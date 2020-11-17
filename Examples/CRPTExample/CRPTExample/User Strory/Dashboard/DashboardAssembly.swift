//
//  DashboardAssembly.swift
//  CRPTFramework2
//
//  Created by George on 17/09/2019.
//  Copyright © 2019 Crypterium. All rights reserved.
//

import UIKit
import CRPTFramework

final class DashboardAssembly {

    func make(with router: DashboardRouterProtocol) -> UIViewController {
        let viewController = DashboardViewController(nibName: nil, bundle: CRPTFrameworkBundle)
        let viewModel = DashboardViewModel(with: router, viewController: viewController)
        return viewController
    }

}
