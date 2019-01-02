/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionParticipantMediaStreamInfo : NSObject {
    VCMediaStream * _stream;
    NSMutableArray * _streamConfigs;
}

@property (nonatomic, retain) VCMediaStream *stream;
@property (nonatomic, readonly) NSArray *streamConfigs;

- (void)addStreamConfig:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setStream:(id)arg1;
- (id)stream;
- (id)streamConfigs;

@end