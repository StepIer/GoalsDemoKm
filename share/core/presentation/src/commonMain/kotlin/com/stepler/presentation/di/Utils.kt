package com.stepler.presentation.di

import com.stepler.presentation.viewModel.KmmViewModel
import org.koin.core.definition.Definition
import org.koin.core.instance.InstanceFactory
import org.koin.core.module.Module
import org.koin.core.qualifier.Qualifier

expect inline fun <reified T : KmmViewModel> Module.kmmViewModel(
    qualifier: Qualifier? = null,
    noinline definition: Definition<T>
): Pair<Module, InstanceFactory<T>>