/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLInternalTencentWeiboRequest : SLRequest {
    bool  _shouldSign;
}

@property bool shouldSign;

- (void)_addAuthenticationParameters:(id)arg1;
- (void)performRequestWithHandler:(id /* block */)arg1;
- (void)setShouldSign:(bool)arg1;
- (bool)shouldSign;
- (id)signedTencentRequestFromRequest:(id)arg1;

@end
