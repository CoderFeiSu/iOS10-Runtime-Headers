/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class IMLocalObject, IMRemoteObject<IDSDaemonProtocol>, NSObject<OS_dispatch_queue>, NSProtocolChecker, IDSDaemonListener, NSLock, NSString, NSMutableDictionary, NSSet;

@interface IDSDaemonController : NSObject <IDSDaemonProtocol> {
    id _delegate;
    IMRemoteObject<IDSDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IDSDaemonListener *_daemonListener;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSMutableDictionary *_listenerServices;
    NSSet *_services;
    NSSet *_cachedServices;
    NSObject<OS_dispatch_queue> *_servicesLockQueue;
    NSMutableDictionary *_listenerCommands;
    NSSet *_commands;
    NSSet *_cachedCommands;
    NSObject<OS_dispatch_queue> *_commandsLockQueue;
    NSMutableDictionary *_listenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdateCaps;
    NSObject<OS_dispatch_queue> *_capLockQueue;
    NSLock *_connectionLock;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    struct __CFRunLoopSource { } *_runLoopSource;
    BOOL _hasCheckedForDaemon;
    BOOL _preventReconnect;
    BOOL _acquiringDaemonConnection;
    BOOL _autoReconnect;
    BOOL _hasBeenSuspended;
}

@property(readonly) IDSDaemonListener * listener;
@property(setter=_setAutoReconnect:) BOOL _autoReconnect;
@property(readonly) NSObject<OS_dispatch_queue> * _remoteMessageQueue;
@property(setter=_setListenerID:,retain) NSString * _listenerID;
@property id delegate;
@property(readonly) BOOL isConnecting;

+ (void)_setApplicationWillTerminate;
+ (BOOL)_applicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (id)sharedInstance;

- (void)_setListenerID:(id)arg1;
- (id)_listenerID;
- (id)_remoteMessageQueue;
- (void)remoteObjectDiedNotification:(id)arg1;
- (void)localObjectDiedNotification:(id)arg1;
- (void)_agentDidLaunchNotification:(id)arg1;
- (void)_noteSetupComplete;
- (BOOL)_acquiringDaemonConnection;
- (id)_remoteObject;
- (BOOL)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;
- (BOOL)removeListenerID:(id)arg1;
- (BOOL)addListenerID:(id)arg1 services:(id)arg2;
- (void)_handleDaemonException:(id)arg1;
- (BOOL)connectToDaemon;
- (BOOL)_autoReconnect;
- (void)_setCapabilities:(unsigned int)arg1;
- (void)_setCommands:(id)arg1;
- (void)_setServices:(id)arg1;
- (void)disconnectFromDaemonWithForce:(BOOL)arg1;
- (BOOL)__isRemoteObjectValidOnQueue:(id)arg1;
- (BOOL)__isLocalObjectValidOnQueue:(id)arg1;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (id)commandsForListenerID:(id)arg1;
- (id)servicesForListenerID:(id)arg1;
- (BOOL)addListenerID:(id)arg1 services:(id)arg2 commands:(id)arg3;
- (void)_listenerSetUpdated;
- (BOOL)setCommands:(id)arg1 forListenerID:(id)arg2;
- (BOOL)setServices:(id)arg1 forListenerID:(id)arg2;
- (BOOL)hasListenerForID:(id)arg1;
- (void)disconnectFromDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (id)commands;
- (id)services;
- (unsigned int)capabilities;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1;
- (void)_connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (void)_blockUntilSendQueueIsEmpty;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (void)_setAutoReconnect:(BOOL)arg1;
- (BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(id)arg2;
- (BOOL)remoteObjectExists;
- (BOOL)localObjectExists;
- (BOOL)isConnecting;
- (id)localObject;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)listener;
- (BOOL)isConnected;

@end