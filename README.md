For use Crypterium framework you need to use gem Cocoapods.
https://cocoapods.org/

First of all you need connect to private repository and add it to you locale storage.
Use terminal command for it:
`pod repo add CRPTFramework https://gitlab.com/george.ovchinnikov/crptframework.git`
`pod repo add CRPTOndato https://gitlab.com/george.ovchinnikov/crypterium-ondato-cocoapod.git`

Next initialize Cocoapods in your app project and add lines below.

```
source 'https://gitlab.com/george.ovchinnikov/crptframework.git'
source 'https://gitlab.com/george.ovchinnikov/crypterium-ondato-cocoapod.git'
source 'https://github.com/CocoaPods/Specs.git'

target '<Target name>' do
  use_frameworks!

  pod 'CRPTFramework', '1.5.8'

end
```

Install pods.
Import CRPTFramework for use Crypterium framework functionality.

Our framework use system features like camera, photo galery, contact list and face/touch id. For correct work you need add lines below to your Info.plist file:
```
<key>NSCameraUsageDescription</key>
<string>To scan QR codes and documents photo</string>
<key>NSContactsUsageDescription</key>
<string>This allows Crypterium to select friends from your contact list</string>
<key>NSFaceIDUsageDescription</key>
<string>Do you want to use your face instead of PIN-code to access the app?</string>
<key>NSPhotoLibraryUsageDescription</key>
<string>To upload documents</string>
```

Test mode
```
  Crypterium.enableTestMode()
  Crypterium.configure(basePath: .sandbox)
```
