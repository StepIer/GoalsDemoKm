package com.stepler.kmmdemo.android.screens

import androidx.compose.foundation.layout.Column
import androidx.compose.material.Button
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.ui.unit.sp
import com.softeq.resources.L
import com.softeq.resources.goToDiagram
import com.softeq.resources.goToSetting
import com.softeq.resources.mainScreen
import com.stepler.demokmm.mainfeature.presentation.MainViewModel
import org.koin.androidx.compose.koinViewModel
import org.orbitmvi.orbit.compose.collectAsState

@Composable
fun MainScreen(
    navigateToSettingsScreen: () -> Unit,
    navigateToDiagramScreen: () -> Unit
) {

    val mainViewModel: MainViewModel = koinViewModel()
    val state = mainViewModel.collectAsState()

    LaunchedEffect(key1 = null, block = {
        mainViewModel.sendAction(MainViewModel.Action.InitScreen)
    })

    Column {
        Text(L.general.mainScreen())
        Button(onClick = { navigateToSettingsScreen() }) {
            Text(text = L.general.goToSetting())
        }
        Button(onClick = { navigateToDiagramScreen() }) {
            Text(text = L.general.goToDiagram())
        }
        Text(
            text = "Text with Size",
            fontSize = state.value.textSize.sp
        )
    }
}