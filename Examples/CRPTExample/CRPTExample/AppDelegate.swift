//
//  AppDelegate.swift
//  CRPTExample
//
//  Created by George on 02/12/2019.
//  Copyright © 2019 Crypterium. All rights reserved.
//

import UIKit
import CRPTFramework

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow? = UIWindow()
    private var state: CRPTProfileManager.State?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.

        _ = CRPTProfileManager.shared
        _ = CRPTWalletsManager.shared

        _ = CRPTProfileManager.shared.observe { [weak self] state in
            guard let self = self else { return }
            switch state {
            case .unauthorized, .pinVerification:

                switch self.state {
                case .authorized?, .none:
                    self.window?.rootViewController = LoginViewController(nibName: nil, bundle: nil)

                case .unauthorized?, .pinVerification?:
                    break
                }

            case .authorized:

                switch self.state {
                case .unauthorized?, .pinVerification?, .none:
                    let navigationController = UINavigationController(rootViewController: UIViewController())
                    self.window?.rootViewController = navigationController
                    DashboardRouter(with: navigationController).start()

                case .authorized?:
                    break
                }
            }

            self.state = state
            self.window?.makeKeyAndVisible()
        }


        return true
    }

}

