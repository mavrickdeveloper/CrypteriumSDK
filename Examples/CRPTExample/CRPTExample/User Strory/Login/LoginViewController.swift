//
//  LoginViewController.swift
//  CRPTExample
//
//  Created by George on 02/12/2019.
//  Copyright © 2019 Crypterium. All rights reserved.
//

import UIKit
import CRPTFramework

class LoginViewController: UIViewController {

    @IBOutlet private weak var number: UITextField?
    @IBOutlet private weak var password: UITextField?

    @IBAction private func login() {
        CRPTSignManager.shared.signIn(with: number?.text ?? "", password: password?.text ?? "", completion: { [weak self] error in

            let alert = UIAlertController(title: nil,
                                          message: error?.response.message,
                                          preferredStyle: .actionSheet)

            alert.addAction(UIAlertAction(title: "Ok", style: .cancel))
            alert.modalPresentationStyle = .overFullScreen
            self?.present(alert, animated: true)
        })
    }

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }

}
