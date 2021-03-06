/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLVCFItemViewController : QLItemViewController {
    NSLayoutConstraint * _bottomConstraint;
    NSLayoutConstraint * _topConstraint;
}

+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (bool)canEnterFullScreen;
- (bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;

@end
