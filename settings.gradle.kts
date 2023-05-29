pluginManagement {
    repositories {
        google()
        gradlePluginPortal()
        mavenCentral()
    }
}

dependencyResolutionManagement {
    repositories {
        google()
        mavenCentral()
    }
}

rootProject.name = "DemoKmm"
include(":android:androidApp")
include(":shared")
include(":share:core:presentation")
include(":android:core")
include(":share:resources")
include(":share:core:domain")
include(":android:settings")
include(":share:features:mainfeature")
