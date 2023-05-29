plugins {
    id("com.android.library")
    kotlin("android")
}

android {
    namespace = Vars.namespace + "core"
    compileSdk = Vars.compileSdk
    defaultConfig {
        minSdk = Vars.minSdk
        targetSdk = Vars.targetSdk
    }
    composeOptions {
        kotlinCompilerExtensionVersion = "1.3.2"
    }
    packagingOptions {
        resources {
            excludes += "/META-INF/{AL2.0,LGPL2.1}"
        }
    }
    buildFeatures {
        compose = true
    }
}

dependencies {
    implementation(Dependencies.Compose.ui)
    implementation(Dependencies.Compose.material)
    implementation(Dependencies.Compose.preview)
    implementation(Dependencies.Compose.tooling)
    implementation(Dependencies.Compose.foundation)
    implementation(Dependencies.Compose.navigation)
}