/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVItemErrorLogEvent : NSObject <NSCopying> {
    AVItemErrorLogEventInternal * _playerItemErrorLogEvent;
}

@property (nonatomic, readonly) NSString *URI;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *errorComment;
@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, readonly) long long errorStatusCode;
@property (nonatomic, readonly) NSString *playbackSessionID;
@property (nonatomic, readonly) NSString *serverAddress;

- (id)URI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)errorComment;
- (id)errorDomain;
- (long long)errorStatusCode;
- (void)finalize;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)playbackSessionID;
- (id)serverAddress;

@end
