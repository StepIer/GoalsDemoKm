package com.stepler.demokmm.mainfeature.presentation

import com.stepler.presentation.viewModel.BaseViewModel
import com.stepler.demokmm.mainfeature.domain.usecase.LoadTextSizeUseCase
import com.stepler.presentation.viewModel.useCase
import org.orbitmvi.orbit.syntax.simple.intent
import org.orbitmvi.orbit.syntax.simple.reduce

class MainViewModel(
    private val loadTextSizeUseCase: LoadTextSizeUseCase
): BaseViewModel<MainViewModel.State, SettingsViewModel.SideEffect>(State()) {

    fun sendAction(action: Action) {
        when(action) {
            Action.InitScreen -> intent {
                useCase {
                    val textSize = loadTextSizeUseCase.invoke()
                    reduce { state.copy(textSize = textSize) }
                }
            }
        }
    }

    data class State(
        val textSize: Int = 0
    )
    object SideEffect
    sealed class Action {
        object InitScreen: Action()
    }
}