/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface BasicAceContext : NSObject <AceContext> {
    NSMutableDictionary * _groupMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedBasicAceContext;

- (id)aceObjectWithDictionary:(id)arg1;
- (Class)classWithClassName:(id)arg1 group:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)registerGroupAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2;

@end
