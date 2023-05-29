plugins {
    kotlin("multiplatform")
    id("com.android.library")
    id("dev.jamiecraane.plugins.kmmresources")
}

kotlin {
    android()

    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = "resources"
        }
    }

    sourceSets {
        val commonMain by getting
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
kmmResourcesConfig {
    androidApplicationId.set(Vars.namespace + "share.resources")
    packageName.set("com.softeq.resources")
    defaultLanguage.set("en")
    input.set(File(project.projectDir.path, "strings.yaml"))
    output.set(project.projectDir)
    androidSourceFolder.set("androidMain") // The location of the android sources in the shared module (Optional, defaults to androidMain)
    iosSourceFolder.set("iosMain")
    useDefaultTranslationIfNotInitialized.set(true) // When true, outputs the texts of the default language in the Android generated actual declarations instead of an empty String
}

val plutil = tasks["executePlutil"] // This one is only needed for iOS

val generateLocalizations = tasks["generateLocalizations"]
tasks["preBuild"].dependsOn(generateLocalizations)

tasks {
    /**
     * This sets up dependencies between the plutil task and compileKotlinIos* tasks. This
     * way common is recompiled if something in strings.yaml changes (so new ios resources
     * are generated). If the strings.yaml file is not changed, the resources are considered
     * up to date by Gradle.
     */
    listOf(
        "compileKotlinIosArm64",
        "compileKotlinIosX64",
        "compileKotlinIosSimulatorArm64"
    ).forEach { taskName ->
        named(taskName) {
            dependsOn(plutil)
        }
    }
}

android {
    namespace = Vars.namespace + "share.resources"
    compileSdk = Vars.compileSdk
    defaultConfig {
        minSdk = Vars.minSdk
        targetSdk = Vars.targetSdk
    }
}