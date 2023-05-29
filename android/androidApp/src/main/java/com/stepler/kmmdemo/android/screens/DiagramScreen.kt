package com.stepler.kmmdemo.android.screens

import androidx.compose.foundation.layout.Column
import androidx.compose.material.Button
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import com.patrykandpatrick.vico.compose.axis.horizontal.bottomAxis
import com.patrykandpatrick.vico.compose.axis.vertical.startAxis
import com.patrykandpatrick.vico.compose.chart.Chart
import com.patrykandpatrick.vico.compose.chart.line.lineChart
import com.patrykandpatrick.vico.core.entry.entryModelOf
import com.softeq.resources.L
import com.softeq.resources.diagramScreen
import com.softeq.resources.goToBack

@Composable
fun DiagramScreen(
    navigateBack: () -> Unit
) {
    Column {
        Text(L.general.diagramScreen())
        Button(onClick = { navigateBack() }) {
            Text(text = L.general.goToBack())
        }

        val chartEntryModel = entryModelOf(4f, 12f, 8f, 16f)

        Chart(
            chart = lineChart(),
            model = chartEntryModel,
            startAxis = startAxis(),
            bottomAxis = bottomAxis(),
        )
    }
}