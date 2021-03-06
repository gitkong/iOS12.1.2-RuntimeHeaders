/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebGPULayer : CAMetalLayer {
    struct GPUDevice { unsigned int x1; struct RetainPtr<WebGPULayer> { void *x_2_1_1; } x2; struct RetainPtr<id> { void *x_3_1_1; } x3; } * _context;
    float  _devicePixelRatio;
}

@property (nonatomic) struct GPUDevice { unsigned int x1; struct RetainPtr<WebGPULayer> { void *x_2_1_1; } x2; struct RetainPtr<id> { void *x_3_1_1; } x3; }*context;

- (struct GPUDevice { unsigned int x1; struct RetainPtr<WebGPULayer> { void *x_2_1_1; } x2; struct RetainPtr<id> { void *x_3_1_1; } x3; }*)context;
- (struct CGImage { }*)copyImageSnapshotWithColorSpace:(struct CGColorSpace { }*)arg1;
- (void)display;
- (id)initWithGPUDevice:(struct GPUDevice { unsigned int x1; struct RetainPtr<WebGPULayer> { void *x_2_1_1; } x2; struct RetainPtr<id> { void *x_3_1_1; } x3; }*)arg1;
- (void)setContext:(struct GPUDevice { unsigned int x1; struct RetainPtr<WebGPULayer> { void *x_2_1_1; } x2; struct RetainPtr<id> { void *x_3_1_1; } x3; }*)arg1;

@end
