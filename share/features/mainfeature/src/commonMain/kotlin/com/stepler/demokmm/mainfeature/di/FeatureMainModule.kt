package com.stepler.demokmm.mainfeature.di

import com.russhwolf.settings.Settings
import com.stepler.presentation.di.kmmViewModel
import com.stepler.demokmm.mainfeature.data.MainRepositoryImpl
import com.stepler.demokmm.mainfeature.domain.MainRepository
import com.stepler.demokmm.mainfeature.domain.usecase.LoadTextSizeUseCase
import com.stepler.demokmm.mainfeature.domain.usecase.SaveTextSizeUseCase
import com.stepler.demokmm.mainfeature.presentation.MainViewModel
import com.stepler.demokmm.mainfeature.presentation.SettingsViewModel
import org.koin.dsl.module

val featureMainModule = module {
    single { Settings() }
    single<MainRepository> { MainRepositoryImpl(get()) }
    single { LoadTextSizeUseCase(get(), get()) }
    single { SaveTextSizeUseCase(get(), get()) }
    kmmViewModel { MainViewModel(get()) }
    kmmViewModel { SettingsViewModel(get(), get()) }
}