package com.stepler.demokmm.mainfeature.domain.usecase

import com.stepler.demokmm.mainfeature.domain.MainRepository
import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.withContext

class LoadTextSizeUseCase(
    private val mainRepository: MainRepository,
    private val dispatcher: CoroutineDispatcher
) {
    suspend fun invoke(): Int = withContext(dispatcher) {
        return@withContext mainRepository.getTextSize()
    }
}