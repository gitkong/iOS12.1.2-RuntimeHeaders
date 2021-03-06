/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventIntersection : NSObject {
    NSDate * _endDate;
    NSArray * _events;
    NSDate * _startDate;
}

@property (readonly) NSDate *endDate;
@property (readonly) NSArray *events;
@property (readonly) NSDate *startDate;

+ (id)eventIntersectionWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3;

- (void).cxx_destruct;
- (id)endDate;
- (id)events;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3;
- (id)startDate;

@end
