//
//  DiagramScreen.swift
//  iosApp
//
//  Created by Stepan on 28.05.2023.
//  Copyright © 2023 orgName. All rights reserved.
//

import Foundation

import SwiftUI
import shared
import Charts

struct DiagramScreen: View {
    
    var data: [ToyShape] = [
        .init(type: "Cube", count: 5),
        .init(type: "Sphere", count: 4),
        .init(type: "Pyramid", count: 4)
    ]
    
    var body: some View {
        Text(L.c.general.diagramScreen())
        
        Chart {
            BarMark(
                x: .value("Shape Type", data[0].type),
                y: .value("Total Count", data[0].count)
            )
            BarMark(
                 x: .value("Shape Type", data[1].type),
                 y: .value("Total Count", data[1].count)
            )
            BarMark(
                 x: .value("Shape Type", data[2].type),
                 y: .value("Total Count", data[2].count)
            )
        }
    }
}

struct ToyShape: Identifiable {
    var type: String
    var count: Double
    var id = UUID()
}
