//
//  Image.swift
//  Crypterium
//
//  Created by Viktoria Mihno on 13.09.2018.
//  Copyright © 2018 Crypterium. All rights reserved.
//

import UIKit

public enum Image: String {
    case touchID
    case faceID
    case bulletOn
    case bulletOff
    case bulletWrong
    case checkmark
    case backButton
    case closeCrossBlack
    case closeCrossInCircle
    case kycTakeImage
    case kycEditImage
    case kycAddImage
    case closeModal
    // Tab bar
    case tabBarMain
    case tabBarHistory
    case tabBarchatBlack
    case tabBarProfile
    case onboardingExchangeV21
    case onboardingExchangeV22
    case onboardingExchangeV23
    
    //Transfer to wallet
    case barCodeScanButton
    case profile
    case btsAddressWrong
    case attention
    case bankTransfers
    case completeSuccess
    case walletSelected

	//Transfer to wallet
//	case barCodeScanButton
//	case profile
//	case btsAddressWrong
//	case attention
//	case bankTransfers
	
    case global
    case balance_plus
    case balance_arrowUp
    case PaymentsTopUp
    case voucher
    case bank
    case DashbBank
    case DashbTransfer
    case quotes
    case news
    
    case onboardingWithdrawal1
    case onboardingWithdrawal2
    case onboardingWithdrawal3
    case onboardingWithdrawal4
    case history
    case historyDetailStatusPending = "HistoryDetailStatusPending"
    case payoutArrowUp
    case buyCryptoMastercard
    case historyOperationWithdraw
    case masterCardGrayRound
    case completeSuccessIcon
    
    case tabbarDashboardSelectedNot
    case tabbarDashboardSelected
    case tabbarHistorySelected
    case tabbarHistorySelectedNot
    case tabbarCardSelected
    case tabbarCardSelectedNot
    case tabbarProfileSelected
    case tabbarProfileSelectedNot
    case cross_down = "Cross_down"
    case arrowUpW
    case whyCrpt4
    
    var icon: UIImage {
        return UIImage(named: self.rawValue, in: CRPTBundle, compatibleWith: nil) ?? UIImage()
    }

    var iconLocalized: UIImage {
        let name = NSLocalizedString(self.rawValue, tableName: "LocalizableImages", bundle: CRPTBundle, value: self.rawValue, comment: self.rawValue)
        return UIImage(named: name, in: CRPTBundle, compatibleWith: nil) ?? UIImage()
    }
}
