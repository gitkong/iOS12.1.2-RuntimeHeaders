/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFCBGetNightShiftMode : SADomainCommand <CFLocalAceHandling, SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNightShiftMode;
+ (id)getNightShiftModeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (void)getNightShiftStatusWithCompletion:(id /* block */)arg1;
- (id)groupIdentifier;
- (void)handleWithCompletion:(id /* block */)arg1;

@end