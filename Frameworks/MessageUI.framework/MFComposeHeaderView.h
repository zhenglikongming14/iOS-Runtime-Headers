/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFHeaderLabelView, NSString, UIView;

@interface MFComposeHeaderView : UIView {
    id _delegate;
    MFHeaderLabelView *_labelView;
    NSString *_navTitle;
    UIView *_separator;
}

@property(copy) NSString * label;
@property(readonly) MFHeaderLabelView * labelView;
@property(copy) NSString * navTitle;

+ (double)_labelTopPaddingSpecification;
+ (id)defaultFont;
+ (double)preferredHeight;
+ (double)separatorHeight;

- (id)_automationID;
- (bool)_canBecomeFirstResponder;
- (void)dealloc;
- (void)handleTouchesEnded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (id)labelColor;
- (double)labelTopPadding;
- (id)labelView;
- (void)layoutSubviews;
- (id)navTitle;
- (void)refreshPreferredContentSize;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLabel:(id)arg1;
- (void)setNavTitle:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleLabelBaselineAlignmentRectForLabel:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
