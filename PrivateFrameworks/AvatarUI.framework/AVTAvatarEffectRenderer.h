/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarEffectRenderer : NSObject <AVTARFrameConsumer, SCNSceneRendererDelegate> {
    AVTAvatar * _avatar;
    <MTLDevice> * _metalDevice;
    struct __CVMetalTextureCache { } * _metalTextureCache;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    AVTRenderer * _renderer;
    NSString * _requestedPuppet;
    struct __CVPixelBufferPool { } * _rotateBufferPool;
    struct OpaqueVTImageRotationSession { } * _rotationSession;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
}

@property (nonatomic, retain) AVTAvatar *avatar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *requestedPuppet;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)avatar;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })convertARTransformToAVTTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)dealloc;
- (id)init;
- (void)renderEmptyBufferWithBackgroundBuffer:(struct __CVBuffer { }*)arg1 completionBlock:(id /* block */)arg2;
- (void)renderForARFrame:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)renderWithPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 backgroundPixelBuffer:(struct __CVBuffer { }*)arg2 completionBlock:(id /* block */)arg3;
- (id)requestedPuppet;
- (void)setAvatar:(id)arg1;
- (void)setRequestedPuppet:(id)arg1;
- (void)setupRenderer;

@end