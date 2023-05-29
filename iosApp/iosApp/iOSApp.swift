import SwiftUI
import shared
import GoogleSignIn

@main
struct iOSApp: App {
        
    init() {
        KoinHelperKt.doInitKoin()
        KMMResourcesLocalizationKt.localizationBundle = Bundle(for: L.self)
    }
    
    var body: some Scene {
        WindowGroup {
            MainScreen()
        }
    }
}
