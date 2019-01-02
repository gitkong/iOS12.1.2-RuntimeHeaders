/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFStateMachine : NSObject {
    PFStateMachineNode * _currentNode;
    id  _delayedEventCancelToken;
    PFStateMachineGraph * _graph;
    NSString * _name;
    id  _owner;
    PFStateMachineNode * _previousNode;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _subflowStack;
    id  _uuid;
}

@property (readonly) NSString *name;
@property (readonly) id uuid;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_cancelLastDelayedEvent;
- (void)_handleEvent:(id)arg1;
- (id)_popReturnTransition;
- (void)_pushReturnTransition:(id)arg1;
- (void)atomicHandleEvent:(id /* block */)arg1;
- (void)atomicHandleEventAsync:(id /* block */)arg1;
- (id)atomicQueue;
- (id)currentNode;
- (void)dealloc;
- (id)description;
- (id)graph;
- (void)handleEvent:(id)arg1;
- (id)initWithGraph:(id)arg1 name:(id)arg2 owner:(id)arg3;
- (id)name;
- (id)owner;
- (void)postEvent:(id)arg1 afterTimeout:(double)arg2;
- (id)previousNode;
- (void)trace:(id)arg1;
- (void)traceObject:(id)arg1 state:(id)arg2;
- (id)uuid;

@end