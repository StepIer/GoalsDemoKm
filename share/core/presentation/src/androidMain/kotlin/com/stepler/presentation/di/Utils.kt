package com.stepler.presentation.di

import com.stepler.presentation.viewModel.KmmViewModel
import org.koin.androidx.viewmodel.dsl.viewModel
import org.koin.core.definition.Definition
import org.koin.core.instance.InstanceFactory
import org.koin.core.module.Module
import org.koin.core.qualifier.Qualifier

actual inline fun <reified T : KmmViewModel> Module.kmmViewModel(
    qualifier: Qualifier?,
    noinline definition: Definition<T>
): Pair<Module, InstanceFactory<T>> {
    return viewModel(qualifier, definition)
}
