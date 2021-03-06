/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFDestination : NSObject <NSCopying> {
    PDFDestinationPrivate * _private;
}

@property (nonatomic, readonly) PDFPage *page;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } point;
@property (nonatomic) double zoom;

- (void).cxx_destruct;
- (void)commonInit;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct __CFArray { }*)createArrayRef;
- (id)description;
- (id)document;
- (id)init;
- (id)initWithDictionary:(struct CGPDFDictionary { }*)arg1 forDocument:(id)arg2;
- (id)initWithPage:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)page;
- (struct CGPoint { double x1; double x2; })point;
- (void)setZoom:(double)arg1;
- (int)type;
- (double)zoom;

@end
