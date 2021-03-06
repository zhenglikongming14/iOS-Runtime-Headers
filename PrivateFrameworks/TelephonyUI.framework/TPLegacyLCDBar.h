/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIImage, UIImageView;

@interface TPLegacyLCDBar : UIImageView {
    UIImage *_barBackground;
    UIImageView *_shadowView;
}

@property(retain) UIImage * barBackground;
@property(readonly) UIImageView * shadowView;

+ (id)backgroundImage;
+ (double)defaultHeight;
+ (double)defaultHeightForOrientation:(long long)arg1;
+ (id)shadowImage;

- (id)barBackground;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentStretchRect;
- (void)dealloc;
- (id)initWithDefaultSize;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBarBackground:(id)arg1;
- (void)setOrientation:(long long)arg1 updateFrame:(bool)arg2;
- (void)setOrientation:(long long)arg1;
- (id)shadowView;

@end
