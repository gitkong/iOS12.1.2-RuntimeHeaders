/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSyncStateManager : NSObject <NNMKSyncStateManager, PSYSyncCoordinatorDelegate> {
    PSYSyncCoordinator * _initialSyncCoordinator;
    BLTPingSubscriber * _notificationsPingSubscriber;
    <NNMKSyncStateManagerDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NNMKSyncStateManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSYSyncCoordinator *initialSyncCoordinator;
@property (nonatomic, retain) BLTPingSubscriber *notificationsPingSubscriber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bbSubsectionIdsForMessage:(id)arg1;
- (void)_handleDidUnpairNotification:(id)arg1;
- (void)_handlePairedDeviceChangedNotification:(id)arg1;
- (id)_pairedNanoRegistryDevice;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initialSyncCoordinator;
- (bool)isInitialSyncRestricted;
- (id)notificationsPingSubscriber;
- (id)pairedDeviceScreenScale;
- (id)pairedDeviceScreenSize;
- (bool)pairedDeviceSupportsMailContentProtectedChannel;
- (bool)pairedDeviceSupportsMultipleMailboxes;
- (bool)pairedDeviceSupportsStandaloneMode;
- (id)pairingStorePath;
- (void)reportInitialSyncDidComplete;
- (void)reportInitialSyncDidCompleteSending;
- (void)reportInitialSyncDidFailWithError:(id)arg1;
- (void)reportInitialSyncProgress:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialSyncCoordinator:(id)arg1;
- (void)setNotificationsPingSubscriber:(id)arg1;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (bool)willPresentNotificationForMessage:(id)arg1;

@end