//
//  DashboardViewController.swift
//  CRPTFramework2
//
//  Created by George on 16/09/2019.
//  Copyright © 2019 Crypterium. All rights reserved.
//

import UIKit
import CRPTFramework

class DashboardViewController: UIViewController, UIScrollViewDelegate {

    private var properties: ViewProperties?
    var viewModel: DashboardViewModel?

    private lazy var refreshControl: UIRefreshControl = {
        let refreshControl = UIRefreshControl()
        refreshControl.tintColor = DashboardDesign().mainColor
        refreshControl.addTarget(self, action: #selector(refreshControlAction), for: UIControl.Event.valueChanged)
        return refreshControl
    }()

    @IBOutlet private weak var scrollView: UIScrollView?

    @IBOutlet private weak var totalConteiner: UIView?
    private lazy var total: DashboardTotalView? = {
        guard let total = DashboardTotalView.instantiate() else { return nil }
        self.totalConteiner?.addSubviewAndPinAllEdges(total)
        return total
    }()

    @IBOutlet private weak var walletsConteiner: UIView?
    @IBOutlet private weak var wallets: UIStackView?

    @IBOutlet private weak var services: UIStackView?

    private var isShowed: Bool = false
    @IBOutlet private weak var showHideButton: UIButton?
    @IBOutlet private weak var showHideLabel: UILabel?
    @IBOutlet private weak var showHideIcon: UIImageView?
    @IBOutlet private weak var walletsConteinerLeadingConstraint: NSLayoutConstraint?
    @IBOutlet private weak var walletsConteinerTopConstraint: NSLayoutConstraint?
    @IBAction private func showHideTap() {
        showHideButton?.isUserInteractionEnabled = false
        self.isShowed = !self.isShowed

        UIView.animate(withDuration: TimeInterval(UINavigationController.hideShowBarDuration), animations: { [weak self] in
            guard let self = self else { return }
            self.showHideUpdate()
            self.view.layoutIfNeeded()
        }) { [weak self] _ in
            guard let self = self else { return }
            self.showHideButton?.isUserInteractionEnabled = true
        }
    }

    private func showHideUpdate() {
        switch isShowed {
        case true:
            showHideLabel?.text = "Hide all wallets"
            walletsConteinerTopConstraint?.constant = 0
            walletsConteinerLeadingConstraint?.constant = 0
        case false:
            showHideLabel?.text = "Show all wallets"
            walletsConteinerTopConstraint?.constant = -(wallets?.frame.size.height ?? 0)
            walletsConteinerLeadingConstraint?.constant = 10
        }
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        scrollView?.addSubview(refreshControl)
        navigationItem.backBarButtonItem?.title = ""
        scrollView?.delegate = self
    }

    override func viewSafeAreaInsetsDidChange() {
        super.viewSafeAreaInsetsDidChange()
        scrollView?.contentInset = UIEdgeInsets(top: 0, left: 0, bottom: view.safeAreaInsets.bottom, right: 0)
    }

    @objc private func refreshControlAction() {
        refreshControl.beginRefreshing()
        properties?.reloadAction()
    }

    override func viewWillAppear(_ animated: Bool) {
        navigationController?.setNavigationBarHidden(true, animated: animated)
        super.viewWillAppear(animated)
    }

    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
    }

    func scrollViewDidScroll(_ scrollView: UIScrollView) {
        if scrollView.contentOffset.y < -60 && refreshControl.isRefreshing == false {
            refreshControlAction()
        }
    }
}

extension DashboardViewController {

    struct ViewProperties {
        let total: DashboardTotalView.ViewProperties
        let wallets: [DashboardWalletView.ViewProperties]
        let services: [DashboardSectionView.ViewProperties]
        let reloadAction: () -> Void
    }

    func update(with properties: ViewProperties) {
        self.properties = properties

        total?.update(with: properties.total)

        wallets?.arrangedSubviews.forEach { subview in
            subview.removeFromSuperview()
        }

        properties.wallets.forEach { walletProperties in
            guard let wallet = DashboardWalletView.instantiate() else { return }
            wallet.update(with: walletProperties)
            wallet.snp.makeConstraints { make in
                make.height.equalTo(62)
            }
            wallets?.addArrangedSubview(wallet)
        }

        services?.arrangedSubviews.forEach { subview in
            subview.removeFromSuperview()
        }

        properties.services.forEach { serviceProperties in
            guard let service = DashboardSectionView.instantiate() else { return }
            service.update(with: serviceProperties)
            services?.addArrangedSubview(service)
        }

        refreshControl.endRefreshing()

        view.layoutIfNeeded()
        showHideUpdate()
        view.layoutIfNeeded()
    }



}
