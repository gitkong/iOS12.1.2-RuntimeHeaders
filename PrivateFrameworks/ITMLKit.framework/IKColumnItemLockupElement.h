/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKColumnItemLockupElement : IKViewElement

@property (nonatomic, readonly, retain) IKButtonElement *button;
@property (nonatomic, readonly, copy) NSString *columnItemType;
@property (nonatomic, readonly, retain) IKTextElement *descriptionText;
@property (nonatomic, readonly) bool hasSeparator;
@property (nonatomic, readonly) IKImageElement *image;
@property (nonatomic, readonly) NSArray *images;
@property (nonatomic, readonly) bool isWatchlisted;
@property (nonatomic, readonly) bool onlyVisibleOnColumnHighlight;
@property (nonatomic, readonly, retain) IKOrdinalElement *ordinal;
@property (nonatomic, readonly, retain) IKTextElement *secondarySubtitle;
@property (nonatomic, readonly, retain) IKTextElement *subtitle;
@property (nonatomic, readonly) IKTextBadgeAttachment *subtitleBadge;
@property (nonatomic, readonly, retain) NSArray *textElements;
@property (nonatomic, readonly, retain) IKTextElement *title;
@property (nonatomic, readonly) IKTextBadgeAttachment *titleBadge;
@property (nonatomic, readonly, retain) IKVideoElement *video;

- (void)_computeTitle:(id*)arg1 subtitle:(id*)arg2 secondarySubtitle:(id*)arg3 unstyledTextElements:(id*)arg4;
- (id)button;
- (id)columnItemType;
- (id)descriptionText;
- (bool)hasSeparator;
- (id)image;
- (id)images;
- (bool)isWatchlisted;
- (bool)onlyVisibleOnColumnHighlight;
- (id)ordinal;
- (id)secondarySubtitle;
- (id)subtitle;
- (id)subtitleBadge;
- (id)textElements;
- (id)title;
- (id)titleBadge;
- (id)video;

@end