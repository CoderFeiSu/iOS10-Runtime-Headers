/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLManagedAsset, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>, CIBurstImageSet, <CAMAvalancheSessionDelegate>, NSString, NSDate;

@interface CAMAvalancheSession : NSObject  {
    int _type;
    <CAMAvalancheSessionDelegate> *_delegate;
    int _state;
    NSString *_uuid;
    unsigned int _numberOfPhotos;
    PLManagedAsset *_possibleAvalancheAsset;
    NSDate *__expirationDate;
    NSObject<OS_dispatch_source> *__expirationTimer;
    NSObject<OS_dispatch_queue> *__expirationQueue;
    CIBurstImageSet *__burstImageSet;
}

@property(readonly) int type;
@property <CAMAvalancheSessionDelegate> * delegate;
@property int state;
@property(copy) NSString * uuid;
@property(readonly) unsigned int numberOfPhotos;
@property(retain) PLManagedAsset * possibleAvalancheAsset;
@property(setter=_setExpirationDate:,retain) NSDate * _expirationDate;
@property(readonly) NSObject<OS_dispatch_source> * _expirationTimer;
@property(readonly) NSObject<OS_dispatch_queue> * _expirationQueue;
@property(readonly) CIBurstImageSet * _burstImageSet;


- (id)_expirationQueue;
- (id)_expirationTimer;
- (id)_expirationDate;
- (BOOL)extend;
- (void)_setPossibleAvalancheAsset:(id)arg1;
- (void)_didTransitionToState:(int)arg1;
- (BOOL)_ensureValidStateChange:(int)arg1;
- (id)_burstImageSet;
- (void)_expirationTimerFired;
- (void)_transitionToState:(int)arg1;
- (id)possibleAvalancheAsset;
- (id)stackAssetIdentifier;
- (id)bestAssetIndentifiers;
- (id)allAssetIdentifiers;
- (void)_teardownExpirationTimer;
- (void)finalizeWithAnalysis:(BOOL)arg1;
- (void)_setupExpirationTimer;
- (unsigned int)numberOfPhotos;
- (void)_setExpirationDate:(id)arg1;
- (id)uuid;
- (id)initWithType:(int)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (int)state;
- (void)_setState:(int)arg1;
- (void)_setUUID:(id)arg1;
- (int)type;

@end