package com.softeq.resources


import platform.Foundation.NSBundle
import platform.Foundation.NSString
import platform.Foundation.localizedStringWithFormat

var localizationBundle = NSBundle.mainBundle()

actual fun L.General.close(): String {
    val localizedString = localizationBundle.localizedStringForKey("l.general.close", null, null)
    return NSString.localizedStringWithFormat(localizedString)
}
actual fun L.General.diagramScreen(): String {
    val localizedString = localizationBundle.localizedStringForKey("l.general.diagramScreen", null, null)
    return NSString.localizedStringWithFormat(localizedString)
}
actual fun L.General.goToBack(): String {
    val localizedString = localizationBundle.localizedStringForKey("l.general.goToBack", null, null)
    return NSString.localizedStringWithFormat(localizedString)
}
actual fun L.General.goToDiagram(): String {
    val localizedString = localizationBundle.localizedStringForKey("l.general.goToDiagram", null, null)
    return NSString.localizedStringWithFormat(localizedString)
}
actual fun L.General.goToSetting(): String {
    val localizedString = localizationBundle.localizedStringForKey("l.general.goToSetting", null, null)
    return NSString.localizedStringWithFormat(localizedString)
}
actual fun L.General.mainScreen(): String {
    val localizedString = localizationBundle.localizedStringForKey("l.general.mainScreen", null, null)
    return NSString.localizedStringWithFormat(localizedString)
}
actual fun L.General.save(): String {
    val localizedString = localizationBundle.localizedStringForKey("l.general.save", null, null)
    return NSString.localizedStringWithFormat(localizedString)
}
actual fun L.General.settingsScreen(): String {
    val localizedString = localizationBundle.localizedStringForKey("l.general.settingsScreen", null, null)
    return NSString.localizedStringWithFormat(localizedString)
}
actual fun L.General.textSize(): String {
    val localizedString = localizationBundle.localizedStringForKey("l.general.textSize", null, null)
    return NSString.localizedStringWithFormat(localizedString)
}
