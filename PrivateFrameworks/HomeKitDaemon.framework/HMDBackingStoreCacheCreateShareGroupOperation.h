/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreCacheCreateShareGroupOperation : HMDBackingStoreOperation {
    id /* block */  _creationBlock;
    HMDBackingStoreCacheShareGroup * _record;
}

@property (nonatomic, copy) id /* block */ creationBlock;
@property (nonatomic, retain) HMDBackingStoreCacheShareGroup *record;

- (void).cxx_destruct;
- (id /* block */)creationBlock;
- (id)initWithGroup:(id)arg1 targetOwner:(id)arg2 rootRecord:(id)arg3 creationBlock:(id /* block */)arg4;
- (id)mainReturningError;
- (id)record;
- (void)setCreationBlock:(id /* block */)arg1;
- (void)setRecord:(id)arg1;

@end
