//
//  DashboardRouter.swift
//  CRPTFramework
//
//  Created by George on 19/09/2019.
//  Copyright © 2019 Crypterium. All rights reserved.
//

import UIKit
import CRPTFramework

final class DashboardRouter: DashboardRouterProtocol {

//    private var constraints = [CrypteriumOperationView]()
    private weak var navigationController: UINavigationController?
    required init(with navigationController: UINavigationController) {
        self.navigationController = navigationController
        #warning("Need to add ConstraintsManager to CRPTCommon")
//        _ = ConstraintsManager.shared.observe { [weak self] constraints in
//            self?.constraints = constraints
//        }
    }

    func start() {
        navigationController?.setViewControllers([DashboardAssembly().make(with: self)], animated: false)
    }

    func showTopup() {
        showOperation(operation: .receiveCrypto)
    }

    func showSend() {
        showOperation(operation: .transferCrypto)
    }

    func showExchange() {
        showOperation(operation: .exchangeCrypto)
    }

    func showCashOut() {
        showOperation(operation: .payoutCard)
    }

    func showBuyCrypto() {
        showOperation(operation: .buyCryptoByCard)
    }

    func showOperation(operation: DashboardOperation) {
//        guard let constraint = constraints.first(where: {$0.name.lowercased() == operation.rawValue.lowercased() })?.constraint else {
//            print("no constraint for \(operation)")
//            return
//        }
//
//        guard constraint == ._none else {
//            showPopUp(constraint: constraint, operation: operation)
//            return
//        }
        switch operation {
        case .buyCryptoByCard:
            showBuy()
        case .paymentMobile:
            break
        case .transferCrypto:
            showSendFlow(operation: operation)
        case .transferMobile:
            showSendFlow(operation: operation)
        case .receiveCrypto:
            showReceiveCryptoFlow()
        case .exchangeCrypto:
            showExchangeFlow()
        case .payoutCard:
            showPayoutToCardFlow()
        case .personalLoans:
            break
        case .transferIban:
            break
        }
    }

    private func showReceiveCryptoFlow(selectedWallet: CRPTWalletModel? = nil) {
        guard let navigationController = navigationController else { return }
        let router = CRPTReceiveRouter(navigationController: navigationController, selectedWallet: selectedWallet)
        router.show()
    }

    private func showSendFlow(operation: DashboardOperation, selectedWallet: CRPTWalletModel? = nil) {
        guard let navigationController = navigationController else { return }
        let router = CRPTSendToWalletRouter(navigationController: navigationController, selectedWallet: selectedWallet)
        router.show()
    }

    private func showExchangeFlow(sourceWallet: CRPTWalletModel? = nil, targetWallet: CRPTWalletModel? = nil) {
        guard let navigationController = navigationController else { return }
        let router = CRPTExchangeRouter(navigationController: navigationController, sourceWallet: sourceWallet, targetWallet: targetWallet)
        router.show()
    }

    private func showBuy(targetWallet: CRPTWalletModel? = nil) {
        guard let navigationController = navigationController else { return }
        let router = CRPTPayInRouter(navigationController: navigationController, targetWallet: targetWallet)
        router.show()
    }

    private func showPayoutToCardFlow(sourceWallet: CRPTWalletModel? = nil) {
        guard let navigationController = navigationController else { return }
        let router = CRPTPayOutRouter(navigationController: navigationController, sourceWallet: sourceWallet)
        router.show()
    }

//    private func showPopUp(constraint: CrypteriumOperationView.Constraint, operation: DashboardOperation) {
//        guard constraint != ._none else {
//            print("no popup for \(constraint) \(operation)")
//            return
//        }
//
//        navigationController?.present(PopupAssembly().make(with: constraint), animated: true)
//    }

}

enum DashboardOperation: String {
    case transferMobile
    case transferCrypto
    case buyCryptoByCard
    case paymentMobile
    case receiveCrypto
    case exchangeCrypto
    case payoutCard
    case personalLoans
    case transferIban
}
