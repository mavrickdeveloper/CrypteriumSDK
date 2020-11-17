//
//  String+Instantiable.swift
//  CRPTFramework2
//
//  Created by George on 17/09/2019.
//  Copyright © 2019 Crypterium. All rights reserved.
//

import Foundation

extension String {

    init(class: AnyClass) {
        let fullName = String(reflecting: `class`)
        let name = fullName.components(separatedBy: ".").last
        self = name ?? fullName
    }

}
