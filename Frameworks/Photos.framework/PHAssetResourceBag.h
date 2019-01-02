/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetResourceBag : NSObject {
    PHAssetCreationRequest * _assetCreationRequest;
    NSArray * _assetResourceContexts;
    NSArray * _assetResources;
    bool  _didValidateForInsertion;
    bool  _hasAdjustments;
    bool  _hasRAW;
    unsigned long long  _mediaSubtype;
    long long  _mediaType;
    PHExternalAssetResource * _primaryResource;
    bool  _valid;
}

@property (nonatomic, readonly) PHAssetCreationRequest *assetCreationRequest;
@property (nonatomic, readonly) NSArray *assetResources;
@property (nonatomic, readonly) bool didValidateForInsertion;
@property (nonatomic, readonly) bool hasAdjustments;
@property (nonatomic, readonly) bool hasRAW;
@property (nonatomic, readonly) unsigned long long mediaSubtype;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) PHExternalAssetResource *primaryResource;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)_primaryAssetResource:(id)arg1;
+ (bool)_supportsAssetResourceTypes:(id)arg1 mediaType:(long long*)arg2 mediaSubtype:(unsigned long long*)arg3;
+ (bool)supportsAssetResourceTypes:(id)arg1 mediaType:(long long*)arg2;

- (void).cxx_destruct;
- (bool)_extractValidatedAdjustmentsURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4;
- (bool)_extractValidatedAudioURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4;
- (bool)_extractValidatedImageURL:(id*)arg1 imageData:(id*)arg2 fromResource:(id)arg3 photoLibrary:(id)arg4 error:(id*)arg5;
- (bool)_extractValidatedVideoURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4;
- (id)_validateAssetResourceForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (bool)_validateAssetResourcesForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)_validatedContextForResource:(id)arg1;
- (id)assetCreationRequest;
- (id)assetResourceWithType:(long long)arg1;
- (id)assetResources;
- (bool)didValidateForInsertion;
- (bool)hasAdjustments;
- (bool)hasRAW;
- (id)initWithAssetResources:(id)arg1 assetCreationRequest:(id)arg2;
- (bool)isValid;
- (unsigned long long)mediaSubtype;
- (long long)mediaType;
- (id)primaryResource;
- (bool)validateForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)validatedDataForAssetResource:(id)arg1;
- (id)validatedURLForAssetResource:(id)arg1;

@end