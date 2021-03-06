/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFConcreteTimeTriggerBuilder : HFItemBuilder {
    HFEventBuilder<HFTimeEventBuilder> * _eventBuilder;
    NSString * _name;
    NSArray * _recurrences;
    NSTimeZone * _timeZone;
}

@property (nonatomic, retain) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *recurrences;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, retain) HMTrigger *trigger;

+ (id)builderForExistingTrigger:(id)arg1 inHome:(id)arg2;

- (void).cxx_destruct;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)commitItem;
- (void)copyCurrentStateFromTriggerBuilder:(id)arg1;
- (id)eventBuilder;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)name;
- (id)recurrences;
- (void)setEventBuilder:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTrigger:(id)arg1;
- (id)timeZone;
- (id)trigger;
- (void)triggerEnabledStateDidChange:(bool)arg1;

@end
