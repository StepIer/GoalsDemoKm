package com.softeq.vac_mobile.di

import com.stepler.demokmm.mainfeature.presentation.DiagramViewModel
import com.stepler.demokmm.mainfeature.presentation.MainViewModel
import com.stepler.demokmm.mainfeature.presentation.SettingsViewModel
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject
import org.koin.core.context.startKoin

fun initKoin() {
    val koinApp = startKoin {
        modules(appModule)
    }.koin
}

class ViewModels: KoinComponent {
    val settingsViewModel: SettingsViewModel by inject()
    val mainViewModel: MainViewModel by inject()
    val diagramViewModel: DiagramViewModel by inject()
}

