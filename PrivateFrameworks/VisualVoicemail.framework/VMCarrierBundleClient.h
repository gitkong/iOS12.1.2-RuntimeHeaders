/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMCarrierBundleClient : VMTelephonyClient <CoreTelephonyClientCarrierBundleDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)carrierBundleChange:(id)arg1;
- (bool)isGreetingChangeSupportedForSubscription:(id)arg1;
- (bool)isPasswordChangeSupportedForDefaultSubscription;
- (bool)isPasswordChangeSupportedForSubscription:(id)arg1;
- (bool)isServiceSupportedForSubscription:(id)arg1;
- (double)maximumGreetingDurationForSubscription:(id)arg1;
- (id)objectForDomain:(id)arg1 key:(id)arg2 subscription:(id)arg3;
- (id)objectForDomain:(id)arg1 key:(id)arg2 subscription:(id)arg3 error:(id*)arg4;
- (id)objectForKey:(id)arg1 subscription:(id)arg2;
- (id)objectForKey:(id)arg1 subscription:(id)arg2 error:(id*)arg3;

@end
