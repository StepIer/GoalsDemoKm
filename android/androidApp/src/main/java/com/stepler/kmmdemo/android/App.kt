package com.stepler.kmmdemo.android

import android.app.Application
import com.softeq.resources.localizationContext
import com.softeq.vac_mobile.di.appModule
import org.koin.core.context.startKoin

class App : Application() {
    override fun onCreate() {
        super.onCreate()

        localizationContext = this
        startKoin {
            modules(appModule)
        }
    }
}