package com.stepler.domain

import com.stepler.domain.defaultDispatcher
import org.koin.dsl.module

val coreDomainModule = module {
    factory { defaultDispatcher }
}