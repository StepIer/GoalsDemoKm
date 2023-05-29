package com.softeq.resources

import android.content.Context
import com.stepler.demokmmshare.resources.R

var localizationContext: Context? = null

actual fun L.General.close(): String = localizationContext?.getString(R.string.l_general_close) ?: "Close"
actual fun L.General.diagramScreen(): String = localizationContext?.getString(R.string.l_general_diagramScreen) ?: "Diagram Screen"
actual fun L.General.goToBack(): String = localizationContext?.getString(R.string.l_general_goToBack) ?: "Go to back"
actual fun L.General.goToDiagram(): String = localizationContext?.getString(R.string.l_general_goToDiagram) ?: "Go to diagram"
actual fun L.General.goToSetting(): String = localizationContext?.getString(R.string.l_general_goToSetting) ?: "Go to setting"
actual fun L.General.mainScreen(): String = localizationContext?.getString(R.string.l_general_mainScreen) ?: "Main Screen"
actual fun L.General.save(): String = localizationContext?.getString(R.string.l_general_save) ?: "Save"
actual fun L.General.settingsScreen(): String = localizationContext?.getString(R.string.l_general_settingsScreen) ?: "Settings Screen"
actual fun L.General.textSize(): String = localizationContext?.getString(R.string.l_general_textSize) ?: "Text Size"
