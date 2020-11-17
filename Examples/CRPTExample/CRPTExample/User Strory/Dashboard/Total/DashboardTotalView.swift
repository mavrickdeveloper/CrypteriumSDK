//
//  DashboardTotalView.swift
//  CRPTFramework2
//
//  Created by George on 17/09/2019.
//  Copyright © 2019 Crypterium. All rights reserved.
//

import UIKit
import CRPTFramework

class DashboardTotalView: UIView {

    struct ViewProperties {
        let balance: String
        let historyButton: ButtonViewProperties
        let profileButton: ButtonViewProperties
    }

    struct Style {
        let backgroundColor: UIColor
        let mainFont: UIFont
        let extraFont: UIFont
    }

    private let style = Style(
        backgroundColor: DashboardDesign().mainColor,
        mainFont: FontFamily.SFProDisplay.semibold.font(size: 28),
        extraFont: FontFamily.SFProText.medium.font(size: 12)
    )

    override func awakeFromNib() {
        super.awakeFromNib()
        backgroundColor = style.backgroundColor

        title?.font = style.extraFont
        amount?.font = style.mainFont
        historyButton?.titleLabel?.font = style.extraFont
        profileButton?.titleLabel?.font = style.extraFont
    }

    @IBOutlet private weak var title: UILabel?
    @IBOutlet private weak var amount: UILabel?
    @IBOutlet private weak var historyButton: Button?
    @IBOutlet private weak var profileButton: Button?

    private var properties: ViewProperties?
    func update(with properties: ViewProperties) {
        self.properties = properties

        amount?.text = properties.balance
        historyButton?.update(with: properties.historyButton)
        profileButton?.update(with: properties.profileButton)
    }
}
