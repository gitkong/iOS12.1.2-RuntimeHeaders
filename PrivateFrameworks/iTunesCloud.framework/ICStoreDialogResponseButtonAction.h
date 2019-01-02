/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreDialogResponseButtonAction : NSObject <NSCopying> {
    NSDictionary * _actionDictionary;
}

@property (nonatomic, readonly, copy) NSString *URLString;
@property (nonatomic, readonly, copy) NSDictionary *actionDictionary;
@property (nonatomic, readonly, copy) NSString *buyParams;
@property (nonatomic, readonly, copy) NSString *itemName;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) NSString *subtarget;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)URLString;
- (id)actionDictionary;
- (id)buyParams;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithResponseButtonActionDictionary:(id)arg1;
- (id)itemName;
- (id)kind;
- (id)subtarget;
- (long long)type;

@end