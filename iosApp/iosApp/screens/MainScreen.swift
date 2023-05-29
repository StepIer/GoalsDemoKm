//
//  MainScreen.swift
//  iosApp
//
//  Created by Stepan on 28.05.2023.
//  Copyright © 2023 orgName. All rights reserved.
//

import Foundation

import SwiftUI
import shared
import KMPNativeCoroutinesRxSwift

struct MainScreen: View {

    var mainViewModel: MainViewModel = ViewModels().mainViewModel
    @State var screenState: MainViewModel.State = ViewModels().mainViewModel.initialState
    
    @Environment(\.scenePhase) var scenePhase
    
    var body: some View {
        
        let state = createObservable(for: mainViewModel.stateNative())
                
        let stateCancelable = state.subscribe() { state in
            screenState = state
        }
        
        NavigationView {
            VStack {
                Text(L.c.general.mainScreen())
                NavigationLink(destination: SettingsScreen()) {
                    Text(L.c.general.goToSetting())
                }
                
                NavigationLink(destination: DiagramScreen()) {
                    Text(L.c.general.goToDiagram())
                }
                
                Text("Text with size").font(.system(size: CGFloat(screenState.textSize)))
                    .onAppear {
                        mainViewModel.sendAction(action: MainViewModel.ActionInitScreen())
                    }
            }
        }
    }
}
