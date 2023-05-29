package com.stepler.kmmdemo.android

import androidx.compose.runtime.Composable
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import com.softeq.core.navigation.NavigationRoute
import com.stepler.kmmdemo.android.screens.DiagramScreen
import com.stepler.kmmdemo.android.screens.MainScreen
import com.stepler.kmmdemo.android.screens.SettingsScreen

@Composable
fun Navigation() {
    val navController = rememberNavController()
    NavHost(
        navController = navController, startDestination = NavigationRoute.ROUTE_MAIN_SCREEN
    ) {
        composable(NavigationRoute.ROUTE_MAIN_SCREEN) {
            MainScreen(
                navigateToSettingsScreen = {
                    navController.navigate(NavigationRoute.ROUTE_SETTINGS_SCREEN)
                },
                navigateToDiagramScreen = {
                    navController.navigate(NavigationRoute.ROUTE_DIAGRAM_SCREEN)
                })
        }

        composable(NavigationRoute.ROUTE_DIAGRAM_SCREEN) {
            DiagramScreen(
                navigateBack = {
                    navController.popBackStack()
                })
        }

        composable(NavigationRoute.ROUTE_SETTINGS_SCREEN) {
            SettingsScreen {
                navController.popBackStack()
            }
        }
    }
}