/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, UIImage, _UIBarButtonItemAppearanceStorage;

@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage {
    NSString *_backdropViewGroupName;
    long long activeBarMetrics;
    UIImage *backIndicatorImage;
    NSNumber *backIndicatorLeftMargin;
    UIImage *backIndicatorTransitionMaskImage;
    long long barMetrics;
    bool_deferShadowToSearchBar;
    boolhidesShadow;
    boolreversesShadowOffset;
    _UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;
    long long defaultBarMetrics;
    UIImage *shadowImage;
    NSDictionary *textAttributes;
    NSMutableDictionary *titleVerticalAdjustmentsForBarMetrics;
}

@property(readonly) _UIBarButtonItemAppearanceStorage * _barButtonAppearanceStorage;
@property long long activeBarMetrics;
@property(retain) UIImage * backIndicatorImage;
@property(retain) NSNumber * backIndicatorLeftMargin;
@property(retain) UIImage * backIndicatorTransitionMaskImage;
@property(retain) NSString * backdropViewGroupName;
@property(readonly) UIImage * backgroundImage;
@property(readonly) _UIBarButtonItemAppearanceStorage * barButtonAppearanceStorage;
@property(readonly) UIImage * cardBackgroundImage;
@property(readonly) UIImage * condensedBackgroundImage;
@property long long defaultBarMetrics;
@property bool deferShadowToSearchBar;
@property bool hidesShadow;
@property(readonly) UIImage * miniBackgroundImage;
@property(readonly) UIImage * miniPromptBackgroundImage;
@property(readonly) UIImage * promptBackgroundImage;
@property bool reversesShadowOffset;
@property(retain) UIImage * shadowImage;
@property(copy) NSDictionary * textAttributes;

+ (long long)typicalBarPosition;

- (id)_barButtonAppearanceStorage;
- (long long)activeBarMetrics;
- (id)backIndicatorImage;
- (id)backIndicatorLeftMargin;
- (id)backIndicatorTransitionMaskImage;
- (id)backdropViewGroupName;
- (id)backgroundImage;
- (id)barButtonAppearanceStorage;
- (id)cardBackgroundImage;
- (id)condensedBackgroundImage;
- (void)dealloc;
- (long long)defaultBarMetrics;
- (bool)deferShadowToSearchBar;
- (bool)hidesShadow;
- (id)miniBackgroundImage;
- (id)miniPromptBackgroundImage;
- (id)promptBackgroundImage;
- (id)representativeImageForIdiom:(long long)arg1;
- (bool)reversesShadowOffset;
- (void)setActiveBarMetrics:(long long)arg1;
- (void)setBackIndicatorImage:(id)arg1;
- (void)setBackIndicatorLeftMargin:(id)arg1;
- (void)setBackIndicatorTransitionMaskImage:(id)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setDefaultBarMetrics:(long long)arg1;
- (void)setDeferShadowToSearchBar:(bool)arg1;
- (void)setHidesShadow:(bool)arg1;
- (void)setReversesShadowOffset:(bool)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTitleVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (id)shadowImage;
- (id)textAttributes;
- (double)titleVerticalAdjustmentForBarMetrics:(long long)arg1;

@end
