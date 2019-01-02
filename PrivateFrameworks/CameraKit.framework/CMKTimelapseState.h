/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTimelapseState : NSObject <NSCoding, NSCopying> {
    bool  _allFramesWritten;
    int  _captureOrientation;
    double  _captureTimeInterval;
    float  _focusLensPosition;
    long long  _frameIndexStride;
    NSDate * _lastFrameResponseTime;
    long long  _nextFrameIndex;
    CLLocation * _startLocation;
    NSDate * _startTime;
    long long  _stopReasons;
    NSDate * _stopTime;
    NSString * _timelapseUUID;
    bool  _usingFrontCamera;
}

@property (nonatomic) bool allFramesWritten;
@property (nonatomic) int captureOrientation;
@property (nonatomic, readonly) double captureTimeInterval;
@property (nonatomic, readonly) long long connectionMode;
@property (nonatomic) float focusLensPosition;
@property (nonatomic, readonly) long long frameIndexStride;
@property (nonatomic, retain) NSDate *lastFrameResponseTime;
@property (nonatomic, readonly) long long nextFrameIndex;
@property (nonatomic, retain) CLLocation *startLocation;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic) long long stopReasons;
@property (nonatomic, retain) NSDate *stopTime;
@property (nonatomic, retain) NSString *timelapseUUID;
@property (getter=isUsingFrontCamera, nonatomic) bool usingFrontCamera;

+ (double)maxTimeToWaitForWrittenFrameAfterStop;
+ (id)stateWithContentsOfFile:(id)arg1;

- (void).cxx_destruct;
- (bool)_commonCMKTimelapseStateInitWithCoder:(id)arg1;
- (bool)addStopReasons:(long long)arg1 stopTime:(id)arg2;
- (bool)allFramesWritten;
- (bool)canContinueCapture;
- (int)captureOrientation;
- (double)captureTimeInterval;
- (long long)connectionMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filePathForNextFrameIndex;
- (float)focusLensPosition;
- (void)forceCompleted;
- (long long)frameIndexStride;
- (bool)incrementFrameIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToState:(id)arg1;
- (bool)isReadyForWritingMovie;
- (bool)isUsingFrontCamera;
- (id)lastFrameResponseTime;
- (bool)mergeSecondaryState:(id)arg1;
- (long long)nextFrameIndex;
- (void)setAllFramesWritten:(bool)arg1;
- (void)setCaptureOrientation:(int)arg1;
- (void)setFocusLensPosition:(float)arg1;
- (void)setLastFrameResponseTime:(id)arg1;
- (void)setStartLocation:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setStopReasons:(long long)arg1;
- (void)setStopTime:(id)arg1;
- (void)setTimelapseUUID:(id)arg1;
- (void)setUsingFrontCamera:(bool)arg1;
- (id)startLocation;
- (id)startTime;
- (long long)stopReasons;
- (id)stopTime;
- (id)timelapseUUID;
- (bool)writeToFile:(id)arg1 createDirectoryIfNeeded:(bool)arg2;

@end