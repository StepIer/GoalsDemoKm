package com.softeq.core.navigation

object NavigationRoute {
    const val ROUTE_MAIN_SCREEN = "route_main_screen"
    const val ROUTE_SETTINGS_SCREEN = "route_settings_screen"
    const val ROUTE_DIAGRAM_SCREEN = "route_diagram_screen"
}

object NavigationArgument {

}

fun destinationString(route: String, vararg arguments: String): String {
    var dest = route
    var isFirstArg = true
    arguments.forEach {
        if (!isFirstArg) {
            dest += ","
        } else {
            isFirstArg = !isFirstArg
        }
        dest += "?$it={$it}"
    }
    return dest
}

fun navigateString(route: String, vararg arguments: Pair<String, Any>): String {
    var dest = route
    var isFirstArg = true
    arguments.forEach {
        if (!isFirstArg) {
            dest += ","
        } else {
            isFirstArg = !isFirstArg
        }
        dest += "?${it.first}=${it.second}"
    }
    return dest
}