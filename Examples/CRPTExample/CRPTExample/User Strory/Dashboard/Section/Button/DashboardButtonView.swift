//
//  DashboardButtonView.swift
//  CRPTFramework2
//
//  Created by George on 16/09/2019.
//  Copyright © 2019 Crypterium. All rights reserved.
//

import UIKit
import CRPTFramework

class DashboardButtonView: UIView {

    struct ViewProperties {
        let image: UIImage
        let title: String
        let subtitle: String
        let badge: String?
        let action: (() -> Void)?
    }

    struct Style {
        let mainColor: UIColor
        let mainFont: UIFont
        let extraFont: UIFont
        let badgeFont: UIFont
    }

    private let style = Style(
        mainColor: DashboardDesign().mainColor,
        mainFont: FontFamily.SFProText.bold.font(size: 16),
        extraFont: FontFamily.SFProText.regular.font(size: 12),
        badgeFont: FontFamily.SFProText.medium.font(size: 10)
    )

    override func awakeFromNib() {
        super.awakeFromNib()
        image?.tintColor = style.mainColor

        title?.font = style.mainFont
        subtitle?.font = style.extraFont
        badgeLabel?.font = style.badgeFont
    }

    @IBOutlet private weak var image: UIImageView?
    @IBOutlet private weak var title: UILabel?
    @IBOutlet private weak var subtitle: UILabel?

    @IBOutlet private weak var badgeConteiner: UIView?
    @IBOutlet private weak var badgeLabel: UILabel?

    private var properties: ViewProperties?
    func update(with properties: ViewProperties) {
        self.properties = properties

        image?.image = properties.image
        title?.text = properties.title
        subtitle?.text = properties.subtitle

        badgeConteiner?.isHidden = properties.badge == nil
        badgeLabel?.text = properties.badge
    }

    @IBAction private func tap() {
        properties?.action?()
    }

}
