/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUILParseExpressions : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *expressions;

+ (id)parseExpressions;
+ (id)parseExpressionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)expressions;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setExpressions:(id)arg1;

@end