/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFContentProtectionObserverWrapper : NSObject {
    MFWeakReferenceHolder * _observerReference;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <MFContentProtectionObserver> *observer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (id)initWithObserver:(id)arg1 queue:(id)arg2;
- (id)observer;
- (id)queue;

@end
