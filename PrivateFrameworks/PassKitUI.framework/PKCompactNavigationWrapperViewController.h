/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKCompactNavigationWrapperViewController : UIViewController {
    bool  _hasExplicitTargetNavigationHeight;
    double  _targetNavigationHeight;
    UIViewController * _wrappedViewController;
}

@property (nonatomic, readonly) bool hasExplicitTargetNavigationHeight;
@property (nonatomic) double targetNavigationHeight;
@property (nonatomic, readonly) UIViewController *wrappedViewController;

- (void).cxx_destruct;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_wrappedViewControllerFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)didMoveToParentViewController:(id)arg1;
- (unsigned long long)edgesForExtendedLayout;
- (bool)extendedLayoutIncludesOpaqueBars;
- (bool)hasExplicitTargetNavigationHeight;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithViewController:(id)arg1;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setTargetNavigationHeight:(double)arg1;
- (double)targetNavigationHeight;
- (void)viewWillLayoutSubviews;
- (id)wrappedViewController;

@end
