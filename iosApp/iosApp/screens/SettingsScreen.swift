//
//  SettingsScreen.swift
//  iosApp
//
//  Created by Stepan on 28.05.2023.
//  Copyright © 2023 orgName. All rights reserved.
//

import Foundation
import SwiftUI
import shared
import KMPNativeCoroutinesRxSwift

struct SettingsScreen: View {
    
    var settingsViewModel: SettingsViewModel = ViewModels().settingsViewModel
    @State var screenState: SettingsViewModel.State = ViewModels().settingsViewModel.initialState
    
    @State private var textSize = ""
    
    var body: some View {
        
        let state = createObservable(for: settingsViewModel.stateNative())
                
        let stateCancelable = state.subscribe() { state in
            screenState = state
        }
        
        TextField(L.c.general.textSize(), text: $textSize)
            .onChange(of: textSize) { value in
                settingsViewModel.sendAction(action: SettingsViewModel.ActionTextFieldTextSizeChangeValue(value: value))
            }
        
        Button(L.c.general.save()) {
            settingsViewModel.sendAction(action: SettingsViewModel.ActionButtonSaveClicked())
        }
        
        Text(L.c.general.settingsScreen())
    }
}
