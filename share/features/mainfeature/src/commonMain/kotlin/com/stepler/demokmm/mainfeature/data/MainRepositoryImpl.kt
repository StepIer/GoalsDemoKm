package com.stepler.demokmm.mainfeature.data

import com.russhwolf.settings.Settings
import com.stepler.demokmm.mainfeature.domain.MainRepository

class MainRepositoryImpl(
    private val settings: Settings
) : MainRepository {
    override suspend fun setTextSize(size: Int) {
        settings.putInt(TEXT_SIZE, size)
    }

    override suspend fun getTextSize(): Int {
        return settings.getInt(TEXT_SIZE, DEFAULT_TEXT_SIZE)
    }

    companion object {
        const val TEXT_SIZE = "textSize"
        const val DEFAULT_TEXT_SIZE = 12
    }
}