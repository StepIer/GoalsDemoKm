plugins {
    kotlin("multiplatform")
    id("com.android.library")
    id("com.rickclephas.kmp.nativecoroutines")
}

kotlin {
    android()
    
    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = "shared"

            export(project(Dependencies.Module.resources))
            export(Dependencies.Koin.core)
            export(project(Dependencies.Module.Feature.mainFeature))
        }
    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation(project(Dependencies.Module.Core.domain))
                implementation(project(Dependencies.Module.Core.presentation))
                api(project(Dependencies.Module.Feature.mainFeature))
                api(project(Dependencies.Module.resources))

                api(Dependencies.Koin.core)
                implementation(Dependencies.Coroutines.core)
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test"))
            }
        }
        val androidMain by getting
        val androidTest by getting
        val iosX64Main by getting
        val iosArm64Main by getting
        val iosSimulatorArm64Main by getting
        val iosMain by creating {
            dependsOn(commonMain)
            iosX64Main.dependsOn(this)
            iosArm64Main.dependsOn(this)
            iosSimulatorArm64Main.dependsOn(this)
        }
        val iosX64Test by getting
        val iosArm64Test by getting
        val iosSimulatorArm64Test by getting
        val iosTest by creating {
            dependsOn(commonTest)
            iosX64Test.dependsOn(this)
            iosArm64Test.dependsOn(this)
            iosSimulatorArm64Test.dependsOn(this)
        }
    }
}

val copyLocalization by tasks.registering {
    println(Env.configuration)
    println(Env.sdkName)

    if (Env.sdkName != null) {
        copy {
            from("${project.rootDir}/share/resources/src/commonMain/resources/ios")
            into("${project.rootDir}/shared/build/xcode-frameworks/${Env.configuration}/${Env.sdkName}/shared.framework")
        }
    }
}

copyLocalization.configure {
    outputs.upToDateWhen { false }
    onlyIf {
        Env.sdkName != null
    }
}

tasks {
    listOf(
        "linkDebugFrameworkIosSimulatorArm64",
        "linkReleaseFrameworkIosSimulatorArm64",
        "linkDebugFrameworkIosArm64",
        "linkReleaseFrameworkIosArm64",
        "linkDebugFrameworkIosX64",
        "linkReleaseFrameworkIosX64"
    ).forEach { taskName ->
        named(taskName) {
            dependsOn(copyLocalization)
        }
    }
}

android {
    namespace = Vars.namespace
    compileSdk = Vars.compileSdk
    defaultConfig {
        minSdk = Vars.minSdk
        targetSdk = Vars.targetSdk
    }
}