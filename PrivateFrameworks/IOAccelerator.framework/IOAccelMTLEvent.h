/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IOAccelerator.framework/IOAccelerator
 */

@interface IOAccelMTLEvent : NSObject {
    unsigned int  _eventName;
    unsigned long long  _globalTraceObjectID;
    struct __IOAccelShared { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __IOAccelDevice {} *x2; unsigned int x3; id /* block */ x4; unsigned long long x5; struct os_unfair_lock_s { unsigned int x_6_1_1; } x6; struct IOAcceldirtyRingRO {} *x7; struct IOAcceldirtyRingRW {} *x8; struct IOAccelDirtyResourceCommand {} *x9; unsigned int x10; } * _sharedRef;
}

- (void)dealloc;
- (unsigned int)encodeKernelSignalEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 value:(unsigned long long)arg2;
- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x1; unsigned int x2; unsigned long long x3; }*)arg1 value:(unsigned long long)arg2;
- (id)initWithShared:(struct __IOAccelShared { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __IOAccelDevice {} *x2; unsigned int x3; id /* block */ x4; unsigned long long x5; struct os_unfair_lock_s { unsigned int x_6_1_1; } x6; struct IOAcceldirtyRingRO {} *x7; struct IOAcceldirtyRingRW {} *x8; struct IOAccelDirtyResourceCommand {} *x9; unsigned int x10; }*)arg1;

@end
