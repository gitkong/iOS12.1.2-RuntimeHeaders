/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNavigationButtonView : UIView {
    bool  _buttonEnabled;
    id /* block */  _buttonLongPressCallback;
    id /* block */  _buttonTappedCallback;
    CNContactInlineActionsViewController * _contactVC;
    UIImage * _defaultImage;
    UIImage * _disabledImage;
    UIImage * _image;
    UIButton * _imageButton;
    long long  _joinButtonStyle;
    NSString * _text;
    UILabel * _textLabel;
    bool  _wantsLongPress;
}

@property (getter=isButtonEnabled, nonatomic) bool buttonEnabled;
@property (nonatomic, copy) id /* block */ buttonLongPressCallback;
@property (nonatomic, copy) id /* block */ buttonTappedCallback;
@property (nonatomic, retain) CNContactInlineActionsViewController *contactVC;
@property (nonatomic, retain) UIImage *defaultImage;
@property (nonatomic, retain) UIImage *disabledImage;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIButton *imageButton;
@property (nonatomic) long long joinButtonStyle;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic) bool wantsLongPress;

- (void).cxx_destruct;
- (void)_buttonLongPressed:(id)arg1;
- (void)_buttonTapped:(id)arg1;
- (void)_setupImageButton;
- (id /* block */)buttonLongPressCallback;
- (id /* block */)buttonTappedCallback;
- (id)contactVC;
- (id)defaultImage;
- (id)disabledImage;
- (id)image;
- (id)imageButton;
- (id)initWithImage:(id)arg1 disabledImage:(id)arg2 text:(id)arg3 wantsLongPress:(bool)arg4;
- (id)initWithImage:(id)arg1 text:(id)arg2 wantsLongPress:(bool)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isButtonEnabled;
- (long long)joinButtonStyle;
- (void)layoutSubviews;
- (void)setButtonEnabled:(bool)arg1;
- (void)setButtonLongPressCallback:(id /* block */)arg1;
- (void)setButtonTappedCallback:(id /* block */)arg1;
- (void)setContactVC:(id)arg1;
- (void)setDefaultImage:(id)arg1;
- (void)setDisabledImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageButton:(id)arg1;
- (void)setJoinButtonStyle:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setWantsLongPress:(bool)arg1;
- (id)text;
- (id)textLabel;
- (bool)wantsLongPress;

@end