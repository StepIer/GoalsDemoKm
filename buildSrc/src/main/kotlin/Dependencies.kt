object Dependencies {
    object Module {
        object Android {
            const val androidApp = ":android:androidApp"
            const val core = ":android:core"
        }

        object Core {
            const val presentation = ":share:core:presentation"
            const val domain = ":share:core:domain"
        }

        object Feature {
            const val mainFeature = ":share:features:mainfeature"
        }

        const val shared = ":shared"
        const val presentation = ":share:presentation"
        const val domain = ":share:domain"
        const val resources = ":share:resources"
    }

    object Compose {
        private const val version = "1.3.1"
        const val ui = "androidx.compose.ui:ui:$version"
        const val tooling = "androidx.compose.ui:ui-tooling:$version"
        const val preview = "androidx.compose.ui:ui-tooling-preview:$version"
        const val foundation = "androidx.compose.foundation:foundation:$version"
        const val material = "androidx.compose.material:material:$version"
        const val activity = "androidx.activity:activity-compose:1.6.1"
        const val navigation = "androidx.navigation:navigation-compose:2.5.3"
    }

    object Koin {
        private const val versionKoin = "3.2.0"
        private const val versionAndroid = "3.3.0"
        const val core = "io.insert-koin:koin-core:${versionKoin}"
        const val android = "io.insert-koin:koin-android:${versionAndroid}"
        const val compose = "io.insert-koin:koin-androidx-compose:${versionAndroid}"
    }

    object OrbitMVI {
        private const val version = "4.5.0"
        const val core = "org.orbit-mvi:orbit-core:${version}"
        const val viewModel = "org.orbit-mvi:orbit-viewmodel:${version}"
        const val compose = "org.orbit-mvi:orbit-compose:${version}"
        const val test = "org.orbit-mvi:orbit-test:${version}"
    }

    object ViewModel {
        private const val version = "2.5.1"
        const val ktx = "androidx.lifecycle:lifecycle-viewmodel-ktx:${version}"
        const val compose = "androidx.lifecycle:lifecycle-viewmodel-compose:${version}"
    }

    object Coroutines {
        private const val version = "1.6.4"
        const val core = "org.jetbrains.kotlinx:kotlinx-coroutines-core:${version}"
        const val android = "org.jetbrains.kotlinx:kotlinx-coroutines-android:${version}"
    }

    object Ktor {
        private const val version = "2.2.1"
        const val core = "io.ktor:ktor-client-core:${version}"
        const val cio = "io.ktor:ktor-client-cio:${version}"
        const val okhttp = "io.ktor:ktor-client-okhttp:${version}"
        const val negotiation = "io.ktor:ktor-client-content-negotiation:${version}"
        const val serialization = "io.ktor:ktor-serialization-kotlinx-json:${version}"
        const val darwin = "io.ktor:ktor-client-darwin:${version}"
        const val logging = "io.ktor:ktor-client-logging:${version}"
        const val auth = "io.ktor:ktor-client-auth:${version}"
    }

    object Settings {
        private const val version = "1.0.0-RC"
        const val core = "com.russhwolf:multiplatform-settings:${version}"
        const val noArg = "com.russhwolf:multiplatform-settings-no-arg:${version}"
    }

    object KorIO {
        private const val korioVersion = "2.2.0"
        const val multiplatform = "com.soywiz.korlibs.korio:korio:$korioVersion"
    }

    object Vico {
        private const val vicoVersion = "1.6.5"
        const val core = "com.patrykandpatrick.vico:core:$vicoVersion"
        const val compose = "com.patrykandpatrick.vico:compose:$vicoVersion"
        const val views = "com.patrykandpatrick.vico:views:$vicoVersion"
        const val m2 = "com.patrykandpatrick.vico:compose-m2:$vicoVersion"
        const val m3 = "com.patrykandpatrick.vico:compose-m3:$vicoVersion"
    }

    const val serialization = "org.jetbrains.kotlinx:kotlinx-serialization-json:1.4.1"
}