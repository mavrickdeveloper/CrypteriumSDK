//
//  Color.swift
//  Crypterium
//
//  Created by Олег Овечкин on 11/09/2018.
//  Copyright © 2018 Crypterium. All rights reserved.
//

import UIKit

internal enum Color {
    internal static let red = Asset.Colors.red.color
    internal static let oceanBlue = Asset.Colors.oceanBlue.color
    internal static let black = Asset.Colors.black.color
    internal static let green = Asset.Colors.green.color
    internal static let orange = Asset.Colors.orange.color
    internal static let yeterium = Asset.Colors.yeterium.color
    internal static let darkterium10 = Asset.Colors.darkterium10.color
    internal static let darkterium30 = Asset.Colors.darkterium30.color
    internal static let darkterium50 = Asset.Colors.darkterium50.color
    internal static let darkterium60 = Asset.Colors.darkterium60.color
    internal static let darkterium80 = Asset.Colors.darkterium80.color
    internal static let darkterium100 = Asset.Colors.darkterium100.color
    internal static let white = Asset.Colors.white.color
    internal static let blueterium10 = Asset.Colors.blueterium10.color
    internal static let blueterium30 = Asset.Colors.blueterium30.color
    internal static let blueterium80 = Asset.Colors.blueterium80.color
    internal static let blueterium100 = Asset.Colors.blueterium100.color
}

extension UIColor {
    public convenience init(hex: String) {
        let cleanHex = hex.trimmingCharacters(in: CharacterSet.alphanumerics.inverted)
        //.replacingOccurrences(of: "#", with: "")
        var value = UInt32(0)
        Scanner(string: cleanHex).scanHexInt32(&value)
        let a, r, g, b: UInt32
        switch cleanHex.count {
        case 3: // RGB (12-bit)
            (a, r, g, b) = (255, (value >> 8) * 17, (value >> 4 & 0xF) * 17, (value & 0xF) * 17)
        case 6: // RGB (24-bit)
            (a, r, g, b) = (255, value >> 16, value >> 8 & 0xFF, value & 0xFF)
        case 8: // ARGB (32-bit)
            (a, r, g, b) = (value >> 24, value >> 16 & 0xFF, value >> 8 & 0xFF, value & 0xFF)
        default:
            (a, r, g, b) = (255, 0, 0, 0)
        }
        self.init(red: CGFloat(r)/255, green: CGFloat(g)/255, blue: CGFloat(b)/255, alpha: CGFloat(a)/255)
    }
}
