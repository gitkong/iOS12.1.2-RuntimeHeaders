/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

@interface LAUIRadialPingView : UIView {
    bool  _animating;
    unsigned char  _animating_counter;
    bool  _animating_dirty;
    struct array<(anonymous namespace)::blur_container, 2>="__elems_"[2{blur_container="view"@"UIImageView""pulse"{periodic_animation_state="enabled"B"_key"@"NSString""_layer"@"CALayer""_removal_timer"@"NSObject<OS_dispatch_source>" {}  _blurs;
    UIColor * _color;
    UIView * _container;
    UIView * _primary;
    struct periodic_animation_state { 
        bool enabled; 
        NSString *_key; 
        CALayer *_layer; 
        NSObject<OS_dispatch_source> *_removal_timer; 
    }  _pulse;
}

@property (getter=isAnimating, nonatomic) bool animating;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_attachExpandAnimationToContainer:(struct blur_container { id x1; /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*x2; void*x3; const int x4; out double x5; int x6; BOOL x7; void*x8; void*x9; in int x10; void*x11; void*x12; void*x13; int x14; out in void*x15; short x16; void*x17; void*x18; void*x19; void*x20; void*x21; bool x22; id x23; id x24; }*)arg1 withDelay:(double)arg2;
- (void)_attachPulseAnimationWithDelay:(double)arg1;
- (void)_endExpand;
- (void)_setExpand:(bool)arg1 forBlurAtIndex:(unsigned long long)arg2 withDelay:(double)arg3;
- (void)_setPulse:(bool)arg1 withDelay:(double)arg2;
- (void)_startExpandWithDelay:(double)arg1;
- (void)_updateAnimatingAnimated:(bool)arg1;
- (void)_updateExpandForBlurAtIndex:(unsigned long long)arg1 withDelay:(double)arg2;
- (void)_updateViewsWithColor;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimating;
- (void)layoutSubviews;
- (void)setAnimating:(bool)arg1;
- (void)tintColorDidChange;

@end