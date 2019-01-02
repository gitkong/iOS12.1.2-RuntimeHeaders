/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigIrisAutoTrimmer : NSObject {
    double  _bufferHistorySeconds;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _captureMotionDelta;
    double  _captureMotionDeltaPeriod;
    unsigned long long  _estimatedIntermediatesCount;
    bool  _haveCaptureMotionDelta;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _lastAttitude;
    double  _lastCheckedTimestamp;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _lastDelta;
    int  _lastStatus;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxHoldDuration;
    long long  _maxHoldFrames;
    bool  _motionAvailable;
    double  _motionSampleRate;
    NSMutableArray * _motionSamples;
    unsigned long long  _nominalHistorySize;
    int  _svmKernelType;
    NSArray * _svmKeys;
    NSData * _svmNormalization;
    int  _svmParamCount;
    float  _svmRBFGamma;
    float  _svmRBFRho;
    int  _svmVectorCount;
    NSData * _svmVectors;
}

@property (nonatomic, readonly) bool trimmingActive;

+ (void)initialize;

- (bool)_checkSamplesContainHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (double)_directionalWeightForSample:(id)arg1;
- (long long)_findClosestIndexToHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3;
- (long long)_findClosestIndexToOffset:(double)arg1 atLeastOneFromIndex:(long long)arg2 limitIndex:(long long)arg3;
- (long long)_findClosestIndexToTimestamp:(double)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3;
- (double)_getHostTime;
- (void)_initSVM:(id)arg1 fromFile:(id)arg2;
- (bool)_isUnstable:(id)arg1 withLookback:(id)arg2;
- (void)_processMotionSample:(const struct { double x1; double x2; double x3; double x4; }*)arg1 gravity:(const struct { float x1; float x2; float x3; }*)arg2 motionTimestamp:(double)arg3 frameTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 metadata:(id)arg5;
- (bool)_shouldCut:(id)arg1 withLookahead:(id)arg2 withLookback:(id)arg3;
- (bool)_shouldCutSVM:(id)arg1;
- (bool)_shouldCutUnstable:(id)arg1 withLookahead:(id)arg2;
- (double)_timeoutThreshold;
- (void)_updateStorageStats;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })beginTrimmingForStillImageHostPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 minimumPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (double)bufferHistorySeconds;
- (void)dealloc;
- (int)emissionStatusForHostPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxHoldDuration;
- (void)processDetectedFaces:(id)arg1 forHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)processISPMotionData:(id)arg1 forHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)processInferences:(id)arg1 forHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setBufferHistorySeconds:(double)arg1;
- (void)setMaxHoldDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoFrameRate:(double)arg1;
- (void)startMotionProcessing;
- (void)stopMotionProcessing;
- (bool)trimmingActive;
- (double)videoFrameRate;

@end