package com.stepler.demokmm.mainfeature.domain

interface MainRepository {

    suspend fun setTextSize(size: Int)
    suspend fun getTextSize(): Int
}