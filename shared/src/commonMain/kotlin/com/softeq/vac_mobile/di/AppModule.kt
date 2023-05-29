package com.softeq.vac_mobile.di

import com.stepler.domain.coreDomainModule
import com.stepler.demokmm.mainfeature.di.featureMainModule

val appModule = listOf(
    coreDomainModule,
    featureMainModule,
)