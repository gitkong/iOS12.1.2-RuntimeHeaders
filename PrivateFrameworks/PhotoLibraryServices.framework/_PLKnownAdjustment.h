/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLKnownAdjustment : NSObject {
    NSString * _identifier;
    id /* block */  _settingsExtractionBlock;
    long long  _supportLevel;
    NSIndexSet * _supportedVersions;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ settingsExtractionBlock;
@property (nonatomic) long long supportLevel;
@property (nonatomic, copy) NSIndexSet *supportedVersions;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void)setSettingsExtractionBlock:(id /* block */)arg1;
- (void)setSupportLevel:(long long)arg1;
- (void)setSupportedVersions:(id)arg1;
- (id /* block */)settingsExtractionBlock;
- (long long)supportLevel;
- (id)supportedVersions;

@end