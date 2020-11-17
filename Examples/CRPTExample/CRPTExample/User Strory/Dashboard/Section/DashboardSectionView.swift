//
//  DashboardSectionView.swift
//  CRPTFramework2
//
//  Created by George on 16/09/2019.
//  Copyright © 2019 Crypterium. All rights reserved.
//

import UIKit
import SnapKit
import CRPTFramework

class DashboardSectionView: UIView {

    struct ViewProperties {
        let title: String
        let buttons: [DashboardButtonView.ViewProperties]
    }

    struct Style {
        let mainFont: UIFont
    }

    private let style = Style(
        mainFont: FontFamily.SFProText.bold.font(size: 14)
    )

    override func awakeFromNib() {
        super.awakeFromNib()
        title?.font = style.mainFont
    }

    @IBOutlet private weak var title: UILabel?
    @IBOutlet private weak var buttonStack: UIStackView?

    private var properties: ViewProperties?
    func update(with properties: ViewProperties) {
        self.properties = properties

        title?.text = properties.title

        buttonStack?.arrangedSubviews.forEach { subview in
            subview.removeFromSuperview()
        }

        properties.buttons.forEach { buttonProperties in
            guard let button = DashboardButtonView.instantiate() else { return }
            button.update(with: buttonProperties)
            button.snp.makeConstraints { make in
                make.height.equalTo(68)
            }
            buttonStack?.addArrangedSubview(button)
        }
    }

}
