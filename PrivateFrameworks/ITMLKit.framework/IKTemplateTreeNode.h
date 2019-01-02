/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTemplateTreeNode : NSObject <NSCopying> {
    NSDictionary * _childNodes;
    NSString * _nodeName;
    IKTemplateTreeNode * _parentNode;
    IKViewElementStyleComposer * _styleComposer;
    IKViewElementStyle * _styleOverrides;
}

@property (nonatomic, copy) NSDictionary *childNodes;
@property (nonatomic, readonly, copy) NSString *nodeName;
@property (nonatomic, readonly) IKTemplateTreeNode *parentNode;
@property (nonatomic, retain) IKViewElementStyleComposer *styleComposer;
@property (nonatomic, readonly, copy) IKViewElementStyle *styleOverrides;

- (void).cxx_destruct;
- (id)childNodes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithNodeName:(id)arg1 styleOverrides:(id)arg2 parentNode:(id)arg3;
- (id)nodeName;
- (id)parentNode;
- (void)setChildNodes:(id)arg1;
- (void)setStyleComposer:(id)arg1;
- (id)styleComposer;
- (id)styleOverrides;

@end