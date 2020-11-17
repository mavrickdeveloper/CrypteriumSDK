//
//  Font.swift
//  Crypterium
//
//  Created by Олег Овечкин on 14/09/2018.
//  Copyright © 2018 Crypterium. All rights reserved.
//

import UIKit

extension UIFont {
    public enum SFProText {
        case regular
        case bold
        case medium
        case semibold

        public func font(size: CGFloat) -> UIFont {
            switch self {
            case .regular:
                return UIFont(font: FontFamily.SFProText.regular, size: size)
            case .bold:
                return UIFont(font: FontFamily.SFProText.bold, size: size)
            case .medium:
                return UIFont(font: FontFamily.SFProText.medium, size: size)
            case .semibold:
                return UIFont(font: FontFamily.SFProText.semibold, size: size)
            }
        }
    }

    public enum SFProDisplay  {
        case regular
        case bold
        case medium
        case semibold

        public func font(size: CGFloat) -> UIFont {
            switch self {
            case .regular:
                return UIFont(font: FontFamily.SFProDisplay.regular, size: size)
            case .bold:
                return UIFont(font: FontFamily.SFProDisplay.bold, size: size)
            case .medium:
                return UIFont(font: FontFamily.SFProDisplay.medium, size: size)
            case .semibold:
                return UIFont(font: FontFamily.SFProDisplay.semibold, size: size)
            }
        }
    }
}
