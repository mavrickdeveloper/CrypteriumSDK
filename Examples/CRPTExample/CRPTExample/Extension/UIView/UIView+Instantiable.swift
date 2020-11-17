//
//  UIView+Instantiable.swift
//  Crypterium
//
//  Created by George on 26/12/2018.
//  Copyright © 2018 Crypterium. All rights reserved.
//

import UIKit
import Foundation

let CRPTFrameworkBundle = Bundle(for: BundleToken.self)

private final class BundleToken {}

extension UIView {
    class func instantiate(with owner: UIView) -> UIView? {
        return UINib(nibName: String(class: self), bundle: CRPTFrameworkBundle).instantiateView(with: owner)
    }
    
    class func instantiate() -> Self? {
        return UINib(nibName: String(class: self), bundle: CRPTFrameworkBundle).instantiateType()
    }
}
