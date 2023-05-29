plugins {
    id("com.android.application")
    kotlin("android")
    kotlin("plugin.serialization")
}

android {
    namespace = Vars.namespace + ".android"
    compileSdk = Vars.compileSdk
    defaultConfig {
        applicationId = Vars.namespace + ".android"
        minSdk = Vars.minSdk
        targetSdk = Vars.targetSdk
        versionCode = 1
        versionName = "1.0"
    }
    buildFeatures {
        compose = true
    }
    composeOptions {
        kotlinCompilerExtensionVersion = "1.3.2"
    }
    packagingOptions {
        resources {
            excludes += "/META-INF/{AL2.0,LGPL2.1}"
        }
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
}

dependencies {
    api(project(Dependencies.Module.shared))
    implementation(project(Dependencies.Module.Android.core))
    implementation(project(Dependencies.Module.resources))
    implementation(project(Dependencies.Module.Feature.mainFeature))

    implementation(Dependencies.Compose.ui)
    implementation(Dependencies.Compose.tooling)
    implementation(Dependencies.Compose.preview)
    implementation(Dependencies.Compose.foundation)
    implementation(Dependencies.Compose.material)
    implementation(Dependencies.Compose.activity)

    implementation(Dependencies.Koin.compose)
    implementation(Dependencies.OrbitMVI.compose)
    implementation(Dependencies.serialization)

    implementation(Dependencies.Vico.core)
    implementation(Dependencies.Vico.compose)
    implementation(Dependencies.Vico.views)
    implementation(Dependencies.Vico.m2)
    implementation(Dependencies.Vico.m3)
}