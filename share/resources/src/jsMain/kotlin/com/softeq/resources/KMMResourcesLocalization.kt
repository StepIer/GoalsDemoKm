
package com.softeq.resources


import kotlinx.browser.window

var currentLanguage: String? = null
val fallbackLanguage = "en"

private fun getString(key: String, vararg formatArgs: String): String {
    val browserLanguage = window.navigator.languages.firstOrNull()
    val language = currentLanguage ?: browserLanguage ?: fallbackLanguage
    val languageKey = language.split('-')[0]
    val languageLocalizations = localizations[language] ?: localizations[languageKey] ?: localizations[fallbackLanguage]
    return languageLocalizations?.let {
        var message = it[key]
        formatArgs.forEachIndexed { index, arg ->
            message = message?.replace("%${index + 1}\$@", arg)
        }
        message
    } ?: ""
}

actual fun L.General.close(): String = getString("l.general.close")
actual fun L.General.diagramScreen(): String = getString("l.general.diagramScreen")
actual fun L.General.goToBack(): String = getString("l.general.goToBack")
actual fun L.General.goToDiagram(): String = getString("l.general.goToDiagram")
actual fun L.General.goToSetting(): String = getString("l.general.goToSetting")
actual fun L.General.mainScreen(): String = getString("l.general.mainScreen")
actual fun L.General.save(): String = getString("l.general.save")
actual fun L.General.settingsScreen(): String = getString("l.general.settingsScreen")
actual fun L.General.textSize(): String = getString("l.general.textSize")

val localizations = {
    val localizations = mutableMapOf<String, Map<String, String>>()
	localizations["en"] = localizations_en()
    localizations
}()
