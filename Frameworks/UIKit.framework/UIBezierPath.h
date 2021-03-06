/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBezierPath : NSObject <NSCopying, NSCoding> {
    double _flatness;
    struct CGPath { } *_immutablePath;
    int _lineCapStyle;
    double *_lineDashPattern;
    unsigned long long _lineDashPatternCount;
    double _lineDashPhase;
    int _lineJoinStyle;
    double _lineWidth;
    double _miterLimit;
    struct CGPath { } *_path;
    bool_immutablePathIsValid;
    bool_usesEvenOddFillRule;
}

@property struct CGPath { }* CGPath;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property(readonly) struct CGPoint { double x1; double x2; } currentPoint;
@property(getter=isEmpty,readonly) bool empty;
@property double flatness;
@property int lineCapStyle;
@property int lineJoinStyle;
@property double lineWidth;
@property double miterLimit;
@property bool usesEvenOddFillRule;

+ (id)_bezierPathWithArcRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;
+ (id)_bezierPathWithPillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;
+ (id)_bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadius:(double)arg3;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 segments:(int)arg4 smoothPillShapes:(bool)arg5;
+ (id)_continuousRoundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadius:(struct CGSize { double x1; double x2; })arg3 segments:(int)arg4;
+ (id)_roundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadius:(double)arg3 segments:(int)arg4 legacyCorners:(bool)arg5;
+ (id)_roundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadius:(double)arg3 segments:(int)arg4;
+ (id)bezierPath;
+ (id)bezierPathWithArcCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5;
+ (id)bezierPathWithCGPath:(struct CGPath { }*)arg1;
+ (id)bezierPathWithOvalInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadii:(struct CGSize { double x1; double x2; })arg3;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 withCornerRadii:(id)arg3;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 withCornerRadius:(double)arg3;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedEdges:(unsigned long long)arg2;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTopCornerRadius:(double)arg2 withBottomCornerRadius:(double)arg3;
+ (id)shadowBezierPath:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedEdges:(unsigned long long)arg2;

- (struct CGPath { }*)CGPath;
- (void)_addRoundedCornerWithTrueCorner:(struct CGPoint { double x1; double x2; })arg1 radius:(struct CGSize { double x1; double x2; })arg2 corner:(unsigned long long)arg3 clockwise:(bool)arg4;
- (struct CGPath { }*)_createMutablePathByDecodingData:(id)arg1;
- (id)_initWithCGMutablePath:(struct CGPath { }*)arg1;
- (struct CGPath { }*)_mutablePath;
- (struct CGPath { }*)_pathRef;
- (void)addArcWithCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5;
- (void)addClip;
- (void)addCurveToPoint:(struct CGPoint { double x1; double x2; })arg1 controlPoint1:(struct CGPoint { double x1; double x2; })arg2 controlPoint2:(struct CGPoint { double x1; double x2; })arg3;
- (void)addLineToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)addQuadCurveToPoint:(struct CGPoint { double x1; double x2; })arg1 controlPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)appendBezierPath:(id)arg1;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(bool)arg5;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)appendBezierPathWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)appendPath:(id)arg1;
- (void)applyTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)bezierPathByReversingPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)clip;
- (void)closePath;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })currentPoint;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)fill;
- (void)fillWithBlendMode:(int)arg1 alpha:(double)arg2;
- (double)flatness;
- (void)getLineDash:(double*)arg1 count:(long long*)arg2 phase:(double*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (int)lineCapStyle;
- (int)lineJoinStyle;
- (void)lineToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)lineWidth;
- (double)miterLimit;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)removeAllPoints;
- (void)setCGPath:(struct CGPath { }*)arg1;
- (void)setFlatness:(double)arg1;
- (void)setLineCapStyle:(int)arg1;
- (void)setLineDash:(const double*)arg1 count:(long long)arg2 phase:(double)arg3;
- (void)setLineJoinStyle:(int)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setUsesEvenOddFillRule:(bool)arg1;
- (void)stroke;
- (void)strokeWithBlendMode:(int)arg1 alpha:(double)arg2;
- (bool)usesEvenOddFillRule;

@end
