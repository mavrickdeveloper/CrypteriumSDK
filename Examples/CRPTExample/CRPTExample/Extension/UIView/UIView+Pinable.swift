//
//  UIView+Pinable.swift
//  CRPTFramework2
//
//  Created by George on 17/09/2019.
//  Copyright © 2019 Crypterium. All rights reserved.
//

import UIKit

extension UIView {

    func addSubviewAndPinAllEdges(_ view: UIView, edges: UIEdgeInsets = UIEdgeInsets.zero) {
        view.translatesAutoresizingMaskIntoConstraints = false
        addSubview(view)
        pinAllEdges(view, edges: edges)
    }

    func pinAllEdges(_ subView: UIView, edges: UIEdgeInsets = UIEdgeInsets.zero) {
        pin(subView, edge: .bottom, constant: edges.bottom)
        pin(subView, edge: .top, constant: edges.top)
        pin(subView, edge: .left, constant: edges.left)
        pin(subView, edge: .right, constant: edges.right)
    }

    fileprivate func pin(_ subView: UIView, edge: NSLayoutConstraint.Attribute, constant: CGFloat) {
        addConstraint(NSLayoutConstraint(item: self,
                                         attribute: edge,
                                         relatedBy: .equal,
                                         toItem: subView,
                                         attribute: edge,
                                         multiplier: 1.0,
                                         constant: constant))
    }

}
