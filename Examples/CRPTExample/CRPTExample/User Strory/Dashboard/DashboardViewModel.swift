//
//  DashboardViewModel.swift
//  CRPTFramework2
//
//  Created by George on 17/09/2019.
//  Copyright © 2019 Crypterium. All rights reserved.
//

import UIKit
import CRPTFramework

protocol DashboardRouterProtocol {
    func showTopup()
    func showSend()
    func showExchange()
    func showCashOut()
    func showBuyCrypto()
}

final class DashboardViewModel {

    private let router: DashboardRouterProtocol
    private weak var viewController: DashboardViewController?

    required init(with router: DashboardRouterProtocol, viewController: DashboardViewController) {
        self.router = router
        self.viewController = viewController
        viewController.viewModel = self

        _ = CRPTWalletsManager.shared.observe { [weak self] wallets in
            self?.notify(with: wallets)
        }
    }

    private func notify(with wallets: CRPTWalletsView) {

        let lastIndex = wallets.wallets.list.count - 1
        let walletsProperties: [DashboardWalletView.ViewProperties] = wallets.wallets.list.enumerated().map { (index, wallet) in

            let percentage = wallet.fiat?.changePercent ?? 0.0
            var percentageString = percentage.string2f + "%"
            if percentage > 0 {
                percentageString = "+" + percentageString
            }

            let fiatSymbol = getSymbolShort(forCurrencyCode: CRPTProfileManager.shared.customerCurrency() ?? "USD")

            return DashboardWalletView.ViewProperties(
                image: UIImage(named: wallet.currency.uppercased(), in: CRPTFrameworkBundle, compatibleWith: nil) ?? UIImage(),
                title: wallet.currency.uppercased(),
                amount: "\((wallet.balanceString ?? "0").trimmingZeroTrail) \(wallet.currency.uppercased())",
                changes: percentageString,
                fiatEquivalent: "\(fiatSymbol)\(wallet.fiat?.amount?.string2f ?? "0.00")",
                separator: index < lastIndex
            )
        }

        let fiatSymbol = getSymbolShort(forCurrencyCode: CRPTProfileManager.shared.customerCurrency() ?? "USD")

        viewController?.update(with: DashboardViewController.ViewProperties(
            total: DashboardTotalView.ViewProperties(
                balance: "\(fiatSymbol)\(wallets.fiat?.amount?.string2f ?? "0.00")",
                historyButton: ButtonViewProperties(
                    title: "History",
                    image: Asset.FImages.dashboardHistoryIcon.image,
                    action: { [weak self] in
                }),
                profileButton: ButtonViewProperties(
                    title: "Profile",
                    image: Asset.FImages.dashboardProfileIcon.image,
                    action: { [weak self] in
                })),
            wallets: walletsProperties,
            services: [
                DashboardSectionView.ViewProperties(
                    title: "CRYPTO SERVICES",
                    buttons: [
                        DashboardButtonView.ViewProperties(
                            image: Asset.FImages.dashboardTopUpIcon.image,
                            title: "Top up",
                            subtitle: "your wallet address to receive money",
                            badge: nil,
                            action: { [weak self] in
                                self?.router.showTopup()
                            }
                        ),
                        DashboardButtonView.ViewProperties(
                            image: Asset.FImages.dashboardSendIcon.image,
                            title: "Send",
                            subtitle: "money at lightning speed to an address",
                            badge: nil,
                            action: { [weak self] in
                                self?.router.showSend()
                            }
                        ),
                        DashboardButtonView.ViewProperties(
                            image: Asset.FImages.dashboardExchangeIcon.image,
                            title: "Exchange",
                            subtitle: "your crypto with low fees",
                            badge: "Best rates",
                            action: { [weak self] in
                                self?.router.showExchange()
                            }
                        )
                    ]
                ),
                DashboardSectionView.ViewProperties(
                    title: "CRYPTO-FIAT SERVICES",
                    buttons: [
                        DashboardButtonView.ViewProperties(
                            image: Asset.FImages.dashboardCashOutIcon.image,
                            title: "Cash out",
                            subtitle: "to your bank card in minutes",
                            badge: "Worldwide",
                            action: { [weak self] in
                                self?.router.showCashOut()
                            }
                        ),
                        DashboardButtonView.ViewProperties(
                            image: Asset.FImages.dashboardBuyCryptoIcon.image,
                            title: "Buy crypto",
                            subtitle: "with your regular bank card",
                            badge: "Low fees",
                            action: { [weak self] in
                                self?.router.showBuyCrypto()
                            }
                        )
                    ]
                )
            ],
            reloadAction: {
                CRPTWalletsManager.shared.update()
        }))
    }

    private var currencySymbolsCache = [String:String]()
    private func getSymbolShort(forCurrencyCode code: String) -> String {
        if let symbol = currencySymbolsCache[code] {
            return symbol
        }
        let finder = Locale
            .availableIdentifiers
            .lazy
            .map { Locale(identifier: $0) }
            .first { $0.currencyCode == code }
        if let symbol = finder?.currencySymbol {
            currencySymbolsCache[code] = symbol
            return symbol
        }
        return "?" // unknown currency
    }
}
