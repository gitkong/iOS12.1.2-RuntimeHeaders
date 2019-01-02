/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGName : SGObject {
    unsigned long long  _extractionType;
    NSString * _firstName;
    NSString * _fullName;
    NSString * _lastName;
    NSString * _middleName;
    NSString * _prefix;
    NSString * _suffix;
}

@property (nonatomic, readonly) unsigned long long extractionType;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *middleName;
@property (nonatomic, readonly) NSString *prefix;
@property (nonatomic, readonly) NSString *suffix;

+ (id)nameWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 withRecordId:(id)arg7 origin:(id)arg8;
+ (id)nameWithFirstName:(id)arg1 lastName:(id)arg2 withRecordId:(id)arg3 origin:(id)arg4;
+ (id)nameWithFirstName:(id)arg1 withRecordId:(id)arg2 origin:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)extractionType;
- (id)firstName;
- (id)fullName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 recordId:(id)arg7 origin:(id)arg8;
- (id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6 recordId:(id)arg7 origin:(id)arg8 extractionType:(unsigned long long)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToName:(id)arg1;
- (id)lastName;
- (id)middleName;
- (id)name;
- (id)prefix;
- (id)suffix;

@end