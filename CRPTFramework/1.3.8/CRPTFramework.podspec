Pod::Spec.new do |s|
    s.name              = 'CRPTFramework'
    s.version           = '1.3.8'
    s.summary           = 'Crypterium framework'
    s.homepage          = 'https://gitlab.com/george.ovchinnikov/crptframework'

    s.author            = { 'Georgiy Ovchinnikov' => 'georgiy.ovchinnikov@crypterium.com' }
    s.license           = { :type => 'Apache-2.0', :file => 'LICENSE' }

    s.platform          = :ios
    s.source            = { :git => 'https://gitlab.com/george.ovchinnikov/crptframework.git',
                            :tag => s.version }

    s.swift_versions = ['5.0']

    s.dependency 'SnapKit'
    s.dependency 'Alamofire'
    s.dependency 'RNCryptor'
    s.dependency 'SAMKeychain'
    s.dependency 'PhoneNumberKit'
    s.dependency 'PromiseKit/CorePromise'
    s.dependency 'JVFloatLabeledTextField'
    s.dependency 'lottie-ios'
    s.dependency 'PhoneNumberKit'

    s.ios.deployment_target = '11.0'
    s.ios.vendored_frameworks =
    'CRPTFramework.framework',

    'CRPTTransactions.framework',
    'CRPTTransactionLogic.framework',
    'CRPTKYC.framework',
    'CRPTComponents.framework',

    'CRPTAssets.framework',
    'CRPTColors.framework',
    'CRPTFonts.framework',
    'CRPTImages.framework',
    'CRPTLocalization.framework',

    'CRPTManagers.framework',
    'CRPTCommon.framework',
    'CRPTAnalytics.framework',
    'CRPTNetworkAPI.framework',
    'CRPTNetwork.framework',
    'CRPTCore.framework'

end
