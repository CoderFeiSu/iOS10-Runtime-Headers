/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString;

@interface AADeviceProvisioningSession : NSObject  {
    NSString *_dsid;
}


- (id)deviceProvisioningInfo;
- (long)eraseProvisioning;
- (long)synchronizeProvisioningWithData:(id)arg1;
- (long)provisionDeviceWithData:(id)arg1;
- (id)initWithDSID:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (void).cxx_destruct;

@end