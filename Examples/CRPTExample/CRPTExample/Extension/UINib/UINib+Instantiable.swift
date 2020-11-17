//
//  UINib+Instantiable.swift
//  Crypterium
//
//  Created by George on 26/12/2018.
//  Copyright © 2018 Crypterium. All rights reserved.
//

import UIKit
import Foundation

extension UINib {
    
    func instantiateType<T>() -> T? {
        for object in self.instantiate(withOwner: nil, options: nil) {
            if let element = object as? T {
                return element
            }
        }
        return nil
    }
    
    func instantiateView(with owner: UIView) -> UIView? {
        for object in self.instantiate(withOwner: owner, options: nil) {
            if let element = object as? UIView {
                return element
            }
        }
        return nil
    }
    
}
