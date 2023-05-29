package com.stepler.presentation.viewModel

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.SupervisorJob
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.StateFlow
import org.orbitmvi.orbit.Container
import org.orbitmvi.orbit.ContainerHost
import org.orbitmvi.orbit.container

actual abstract class BaseViewModel<STATE : Any, SIDE_EFFECT : Any> actual constructor(initialState: STATE) :
    ContainerHost<STATE, SIDE_EFFECT>, KmmViewModel() {

    actual val scope: CoroutineScope = CoroutineScope(Dispatchers.Main + SupervisorJob())
    actual override val container: Container<STATE, SIDE_EFFECT> = scope.container(initialState)
    actual val initialState = initialState

    actual fun state(): StateFlow<STATE> = container.stateFlow
    actual fun sideEffect(): Flow<SIDE_EFFECT> = container.sideEffectFlow
}