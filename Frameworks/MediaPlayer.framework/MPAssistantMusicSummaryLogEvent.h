/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAssistantMusicSummaryLogEvent : MPAssistantMusicLogEvent {
    double  _blockingSecureKeyLoadDuration;
    NSNumber * _perceivedTotalStartupTime;
    double  _tracklistLoadDuration;
}

@property (nonatomic) double blockingSecureKeyLoadDuration;
@property (nonatomic, copy) NSNumber *perceivedTotalStartupTime;
@property (nonatomic) double tracklistLoadDuration;

- (void).cxx_destruct;
- (double)blockingSecureKeyLoadDuration;
- (long long)eventCode;
- (id)eventPayload;
- (id)perceivedTotalStartupTime;
- (void)setBlockingSecureKeyLoadDuration:(double)arg1;
- (void)setPerceivedTotalStartupTime:(id)arg1;
- (void)setTracklistLoadDuration:(double)arg1;
- (double)tracklistLoadDuration;

@end
