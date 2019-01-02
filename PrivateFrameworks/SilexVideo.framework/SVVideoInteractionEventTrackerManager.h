/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoInteractionEventTrackerManager : NSObject <SVVideoInteractionHandlerFactory> {
    <SVVideoEventTrackerProviding> * _eventTrackerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVVideoEventTrackerProviding> *eventTrackerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)eventTrackerProvider;
- (id)initWithVideoEventTrackerProvider:(id)arg1;

@end