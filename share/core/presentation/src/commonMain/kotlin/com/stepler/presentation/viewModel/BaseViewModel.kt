package com.stepler.presentation.viewModel

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.StateFlow
import org.orbitmvi.orbit.Container
import org.orbitmvi.orbit.ContainerHost

expect abstract class BaseViewModel<STATE : Any, SIDE_EFFECT : Any>(initialState: STATE) :
    ContainerHost<STATE, SIDE_EFFECT>, KmmViewModel {

    override val container: Container<STATE, SIDE_EFFECT>
    val scope: CoroutineScope
    val initialState: STATE

    fun state(): StateFlow<STATE>
    fun sideEffect(): Flow<SIDE_EFFECT>
}