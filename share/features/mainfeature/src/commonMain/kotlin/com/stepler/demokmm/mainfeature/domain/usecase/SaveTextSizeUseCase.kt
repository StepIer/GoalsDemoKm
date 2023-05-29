package com.stepler.demokmm.mainfeature.domain.usecase

import com.stepler.demokmm.mainfeature.domain.MainRepository
import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.withContext

class SaveTextSizeUseCase(
    private val mainRepository: MainRepository,
    private val dispatcher: CoroutineDispatcher
) {
    suspend fun invoke(size: Int) = withContext(dispatcher) {
        mainRepository.setTextSize(size)
    }
}