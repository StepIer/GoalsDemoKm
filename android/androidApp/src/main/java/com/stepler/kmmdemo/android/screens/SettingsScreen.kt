package com.stepler.kmmdemo.android.screens

import androidx.compose.foundation.layout.Column
import androidx.compose.material.Button
import androidx.compose.material.Text
import androidx.compose.material.TextField
import androidx.compose.runtime.Composable
import com.softeq.resources.L
import com.softeq.resources.goToBack
import com.softeq.resources.save
import com.softeq.resources.settingsScreen
import com.stepler.demokmm.mainfeature.presentation.SettingsViewModel
import org.koin.androidx.compose.koinViewModel
import org.orbitmvi.orbit.compose.collectAsState

@Composable
fun SettingsScreen(
    navigateBack: () -> Unit
) {

    val settingsViewModel: SettingsViewModel = koinViewModel()
    val state = settingsViewModel.collectAsState()

    Column {
        Text(L.general.settingsScreen())
        Button(onClick = { navigateBack() }) {
            Text(text = L.general.goToBack())
        }
        TextField(value = state.value.textSize.toString(), onValueChange = { text ->
            settingsViewModel.sendAction(SettingsViewModel.Action.TextFieldTextSizeChangeValue(text))
        })
        Button(onClick = {
            settingsViewModel.sendAction(SettingsViewModel.Action.ButtonSaveClicked)
        }) {
            Text(text = L.general.save())
        }
    }
}