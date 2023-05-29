package com.stepler.demokmm.mainfeature.presentation

import com.stepler.presentation.viewModel.BaseViewModel
import com.stepler.presentation.viewModel.useCase
import com.stepler.demokmm.mainfeature.domain.usecase.LoadTextSizeUseCase
import com.stepler.demokmm.mainfeature.domain.usecase.SaveTextSizeUseCase
import org.orbitmvi.orbit.syntax.simple.intent
import org.orbitmvi.orbit.syntax.simple.reduce

class SettingsViewModel(
    private val saveTextSizeUseCase: SaveTextSizeUseCase,
    private val loadTextSizeUseCase: LoadTextSizeUseCase
) : BaseViewModel<SettingsViewModel.State, SettingsViewModel.SideEffect>(State()) {

    init {
        intent {
            useCase {
                val textSize = loadTextSizeUseCase.invoke()
                reduce {
                    state.copy(textSize = textSize)
                }
            }
        }
    }

    fun sendAction(action: Action) {
        when (action) {
            is Action.TextFieldTextSizeChangeValue -> intent {
                val textSize = action.value.toIntOrNull()
                if (textSize != null) {
                    reduce { state.copy(textSize = textSize) }
                }
            }
            Action.ButtonSaveClicked -> intent {
                useCase {
                    saveTextSizeUseCase.invoke(state.textSize)
                }
            }
        }
    }

    data class State(
        val textSize: Int = 0
    )

    object SideEffect

    sealed class Action {
        data class TextFieldTextSizeChangeValue(val value: String) : Action()
        object ButtonSaveClicked : Action()
    }
}