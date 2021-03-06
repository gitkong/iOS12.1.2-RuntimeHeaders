/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCurrentActivityCacheQueryServer : HDQueryServer <HDActivityCacheManagerObserver> {
    HDActivityCacheManager * _activityCacheManager;
    NSCalendar * _calendar;
    HKActivityCache * _lastActivityCache;
    NSDateComponents * _statisticsIntervalComponents;
}

@property (nonatomic) HDActivityCacheManager *activityCacheManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5 error:(id*)arg6;
+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (void)_queue_stop;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldListenForUpdates;
- (id)activityCacheManager;
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (void)setActivityCacheManager:(id)arg1;
- (bool)shouldObserveActivityCache;

@end
