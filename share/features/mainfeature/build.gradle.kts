plugins {
    kotlin("multiplatform")
    id("com.android.library")
}

kotlin {
    android {
        compilations.all {
            kotlinOptions {
                jvmTarget = "1.8"
            }
        }
    }
    
    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = "mainfeature"
        }
    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                api(project(Dependencies.Module.Core.presentation))
                implementation(project(Dependencies.Module.Core.domain))

                implementation(Dependencies.Ktor.core)
                implementation(Dependencies.Ktor.serialization)
                implementation(Dependencies.Koin.core)
                implementation(Dependencies.Settings.core)
                implementation(Dependencies.Settings.noArg)
                implementation(Dependencies.OrbitMVI.core)
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test"))
            }
        }
        val androidMain by getting
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

android {
    namespace = Vars.namespace + ".share.features.myrequests"
    compileSdk = Vars.compileSdk
    defaultConfig {
        minSdk = Vars.minSdk
        targetSdk = Vars.targetSdk
    }
}