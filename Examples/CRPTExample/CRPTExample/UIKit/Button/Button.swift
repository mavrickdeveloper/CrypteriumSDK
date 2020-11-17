//
//  Button.swift
//  CRPTFramework2
//
//  Created by George on 17/09/2019.
//  Copyright © 2019 Crypterium. All rights reserved.
//

import UIKit
import CRPTFramework

struct ButtonViewProperties {

    typealias EmptyClosure = () -> Void

    let title: String
    let image: UIImage?
    let action: EmptyClosure
    let isEnable: Bool

    init() {
        self.title = ""
        self.action = {}
        self.image = nil
        self.isEnable = true
    }

    init(title: String,
         image: UIImage? = nil,
         isEnable: Bool = true,
         action: @escaping EmptyClosure = {}) {

        self.title = title
        self.action = action
        self.image = image
        self.isEnable = isEnable
    }
}

class Button: UIButton {

    typealias ViewProperties = ButtonViewProperties

    private var properties: ViewProperties?
    func update(with properties: ViewProperties) {
        self.properties = properties

        isEnabled = properties.isEnable
        setTitle(properties.title, for: .normal)
        setImage(properties.image, for: .normal)
    }

    override init(frame: CGRect) {
        super.init(frame: frame)
        setup()
    }

    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        setup()
    }

    private func setup() {
        titleLabel?.minimumScaleFactor = 0.5
        titleLabel?.adjustsFontSizeToFitWidth = true

        contentEdgeInsets = UIEdgeInsets(top: 0, left: 12, bottom: 0, right: 12)

        addTarget(self, action: #selector(tap), for: .touchUpInside)
    }

    @objc private func tap() {
        properties?.action()
    }

    @available(*, deprecated)
    override func setAttributedTitle(_ title: NSAttributedString?, for state: UIControl.State) {}

    override func setTitle(_ title: String?, for state: UIControl.State) {
        UIView.performWithoutAnimation {
            super.setTitle(title, for: state)
            layoutIfNeeded()
        }
    }

}
