/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface AudioClip : KonaClip {
    int  cachedFadeIn;
    int  cachedFadeOut;
    bool  cachedFades;
    bool  startOffsetValidated;
}

@property (nonatomic) int audioType;
@property (nonatomic) int cachedFadeIn;
@property (nonatomic) int cachedFadeOut;
@property (nonatomic) bool cachedFades;
@property (nonatomic) bool startOffsetValidated;

+ (bool)audioEnabledByDefault;
+ (id)backgroundClip;
+ (int)defaultAudioTypeForClipType:(int)arg1;
+ (int)defaultClipTypeForAudioType:(int)arg1;
+ (id)soundEffectClip;

- (id)asBackgroundAudioClip;
- (id)asForegroundAudioClip;
- (int)audioFadeInDuration;
- (int)audioFadeOutDuration;
- (int)audioType;
- (int)cachedFadeIn;
- (int)cachedFadeOut;
- (bool)cachedFades;
- (int)clipType;
- (bool)hasAudioCharacteristic;
- (id)init;
- (bool)isBackgroundAudio;
- (void)setAudioFadeInDuration:(int)arg1;
- (void)setAudioFadeOutDuration:(int)arg1;
- (void)setAudioType:(int)arg1;
- (void)setCachedFadeIn:(int)arg1;
- (void)setCachedFadeOut:(int)arg1;
- (void)setCachedFades:(bool)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)setDuration:(int)arg1;
- (void)setStartOffset:(int)arg1;
- (void)setStartOffsetValidated:(bool)arg1;
- (void)setThemeID:(id)arg1;
- (int)startOffset;
- (bool)startOffsetValidated;
- (id)themeID;
- (void)validateFades;
- (id)valueForUndefinedKey:(id)arg1;

@end