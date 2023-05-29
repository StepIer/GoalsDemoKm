plugins {
    //trick: for the same plugin versions in all sub-modules
    id("com.android.application").version("7.3.1").apply(false)
    kotlin("multiplatform").version("1.7.20").apply(false)

    id("com.rickclephas.kmp.nativecoroutines").version("0.13.1").apply(false)
    kotlin("plugin.serialization").version("1.7.20").apply(false)
    id("dev.jamiecraane.plugins.kmmresources").version("1.0.0-alpha10").apply(false)
    id("com.android.library") version "7.3.1" apply false
    id("org.jetbrains.kotlin.android") version "1.7.20" apply false
}

tasks.register("clean", Delete::class) {
    delete(rootProject.buildDir)
}
