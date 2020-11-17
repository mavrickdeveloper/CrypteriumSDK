//
//  DashboardWalletView.swift
//  CRPTFramework2
//
//  Created by George on 17/09/2019.
//  Copyright © 2019 Crypterium. All rights reserved.
//

import UIKit
import CRPTFramework

class DashboardWalletView: UIView {

    struct ViewProperties {
        let image: UIImage
        let title: String
        let amount: String
        let changes: String
        let fiatEquivalent: String
        let separator: Bool
    }

    struct Style {
        let mainFont: UIFont
    }

    private let style = Style(
        mainFont: FontFamily.SFProText.medium.font(size: 14)
    )

    override func awakeFromNib() {
        super.awakeFromNib()

        title?.font = style.mainFont
        amount?.font = style.mainFont
        changes?.font = style.mainFont
        fiatEquivalent?.font = style.mainFont
    }

    @IBOutlet private weak var icon: UIImageView?
    @IBOutlet private weak var title: UILabel?
    @IBOutlet private weak var amount: UILabel?
    @IBOutlet private weak var changes: UILabel?
    @IBOutlet private weak var fiatEquivalent: UILabel?
    @IBOutlet private weak var separator: UIView?

    private var properties: ViewProperties?
    func update(with properties: ViewProperties) {
        self.properties = properties

        icon?.image = properties.image
        title?.text = properties.title
        amount?.text = properties.amount
        changes?.text = properties.changes
        fiatEquivalent?.text = properties.fiatEquivalent
        separator?.isHidden = properties.separator == false
    }

}

extension DashboardWalletView.ViewProperties {

    init(image: UIImage, title: String, amount: String, changes: String, fiatEquivalent: String) {
        self.image = image
        self.title = title
        self.amount = amount
        self.changes = changes
        self.fiatEquivalent = fiatEquivalent
        self.separator = true
    }

}
