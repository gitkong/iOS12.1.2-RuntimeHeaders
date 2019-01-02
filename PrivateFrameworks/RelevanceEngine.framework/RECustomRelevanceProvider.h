/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RECustomRelevanceProvider : RERelevanceProvider {
    REFeature * _feature;
    REFeatureValue * _value;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) REFeatureValue *value;

+ (id)relevanceSimulatorID;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)feature;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFeature:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)value;

@end