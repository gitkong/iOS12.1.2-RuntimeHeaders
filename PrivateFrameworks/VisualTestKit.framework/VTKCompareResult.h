/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualTestKit.framework/VisualTestKit
 */

@interface VTKCompareResult : NSObject {
    UIImage * _comparisonImage;
    bool  _succesfull;
}

@property (nonatomic, readonly) UIImage *comparisonImage;
@property (getter=isSuccesfull, nonatomic, readonly) bool succesfull;

- (void).cxx_destruct;
- (id)comparisonImage;
- (id)initWithComparisonImage:(id)arg1 isSuccesfull:(bool)arg2;
- (bool)isSuccesfull;

@end