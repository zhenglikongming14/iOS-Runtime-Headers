/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UITextFieldDelegate>, <UITextInputDelegate>, <UITextInputTokenizer>, MPUTextContainerContentSizeUpdater, NSAttributedString, NSDictionary, NSLayoutConstraint, NSString, UIButton, UIColor, UIFont, UIImage, UIImageView, UILabel, UITextFieldAtomBackgroundView, UITextFieldBackgroundView, UITextFieldBorderView, UITextFieldLabel, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, _UIBaselineLayoutStrut, _UICascadingTextStorage;

@interface UITextField : UIControl <UIKeyboardInput, _UILayoutBaselineUpdating, UITextInputTraits_Private, UIPopoverControllerDelegate, UITextInput, NSCoding, ABText, MPUAutoupdatingTextContainer> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct { 
        unsigned int verticallyCenterText : 1; 
        unsigned int isAnimating : 4; 
        unsigned int inactiveHasDimAppearance : 1; 
        unsigned int becomesFirstResponderOnClearButtonTap : 1; 
        unsigned int clearsPlaceholderOnBeginEditing : 1; 
        unsigned int adjustsFontSizeToFitWidth : 1; 
        unsigned int fieldEditorAttached : 1; 
        unsigned int canBecomeFirstResponder : 1; 
        unsigned int shouldSuppressShouldBeginEditing : 1; 
        unsigned int inResignFirstResponder : 1; 
        unsigned int undoDisabled : 1; 
        unsigned int explicitAlignment : 1; 
        unsigned int implementsCustomDrawing : 1; 
        unsigned int needsClearing : 1; 
        unsigned int suppressContentChangedNotification : 1; 
        unsigned int allowsEditingTextAttributes : 1; 
        unsigned int usesAttributedText : 1; 
        unsigned int backgroundViewState : 2; 
        unsigned int clearingBehavior : 2; 
    UITextFieldAtomBackgroundView *_atomBackgroundView;
    UIImage *_background;
    UITextFieldBorderView *_backgroundView;
    NSLayoutConstraint *_baselineLayoutConstraint;
    _UIBaselineLayoutStrut *_baselineLayoutLabel;
    long long _borderStyle;
    UIButton *_clearButton;
    long long _clearButtonMode;
    } _clearButtonOffset;
    id _delegate;
    UIImage *_disabledBackground;
    UITextFieldBorderView *_disabledBackgroundView;
    UITextFieldLabel *_displayLabel;
    double _fullFontSize;
    UIImageView *_iconView;
    UIView *_inputAccessoryView;
    UIView *_inputView;
    UITextInteractionAssistant *_interactionAssistant;
    UILabel *_label;
    double _labelOffset;
    UIView *_leftView;
    long long _leftViewMode;
    } _leftViewOffset;
    double _minimumFontSize;
    UITextInputTraits *_nonAtomTraits;
    } _padding;
    UITextFieldLabel *_placeholderLabel;
    UITextFieldLabel *_prefixLabel;
    float _progress;
    UIView *_rightView;
    long long _rightViewMode;
    } _rightViewOffset;
    int _scrollXOffset;
    int _scrollYOffset;
    } _selectionRangeWhenNotEditing;
    UITextFieldLabel *_suffixLabel;
    UITextFieldBackgroundView *_systemBackgroundView;
    } _textFieldFlags;
    _UICascadingTextStorage *_textStorage;
    UITextInputTraits *_traits;
    bool_avoidBecomeFirstResponder;
    bool_deferringBecomeFirstResponder;
    bool_setSelectionRangeAfterFieldEditorIsAttached;
}

@property(setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:) bool MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
@property(readonly) MPUTextContainerContentSizeUpdater * MPU_contentSizeUpdater;
@property(setter=_setBaselineLayoutConstraint:,retain) NSLayoutConstraint * _baselineLayoutConstraint;
@property(setter=_setBaselineLayoutLabel:,retain) _UIBaselineLayoutStrut * _baselineLayoutLabel;
@property(copy) NSString * ab_text;
@property(copy) NSDictionary * ab_textAttributes;
@property bool acceptsEmoji;
@property bool acceptsFloatingKeyboard;
@property bool acceptsSplitKeyboard;
@property bool adjustsFontSizeToFitWidth;
@property bool allowsEditingTextAttributes;
@property(copy) NSAttributedString * attributedPlaceholder;
@property(copy) NSAttributedString * attributedText;
@property(copy) NSAttributedString * attributedText;
@property long long autocapitalizationType;
@property(copy) NSString * autocorrectionContext;
@property long long autocorrectionType;
@property(retain) UIImage * background;
@property(readonly) UITextPosition * beginningOfDocument;
@property long long borderStyle;
@property long long clearButtonMode;
@property bool clearsOnBeginEditing;
@property bool clearsOnInsertion;
@property bool contentsIsSingleValue;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSDictionary * defaultTextAttributes;
@property bool deferBecomingResponder;
@property <UITextFieldDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property bool disablePrediction;
@property(retain) UIImage * disabledBackground;
@property bool displaySecureTextUsingPlainText;
@property(getter=isEditing,readonly) bool editing;
@property int emptyContentReturnKeyType;
@property bool enablesReturnKeyAutomatically;
@property bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(readonly) UITextPosition * endOfDocument;
@property(retain) UIFont * font;
@property(retain) UIFont * font;
@property bool forceEnableDictation;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long hash;
@property(retain) UIView * inputAccessoryView;
@property <UITextInputDelegate> * inputDelegate;
@property(retain) UIView * inputView;
@property(retain) UIColor * insertionPointColor;
@property unsigned long long insertionPointWidth;
@property bool isSingleLineDocument;
@property long long keyboardAppearance;
@property long long keyboardType;
@property bool learnsCorrections;
@property(retain) UIView * leftView;
@property long long leftViewMode;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property double minimumFontSize;
@property(copy) NSString * placeholder;
@property(copy) NSString * responseContext;
@property bool returnKeyGoesToNextResponder;
@property long long returnKeyType;
@property(retain) UIView * rightView;
@property long long rightViewMode;
@property(getter=isSecureTextEntry) bool secureTextEntry;
@property(copy) UITextRange * selectedTextRange;
@property long long selectionAffinity;
@property(retain) UIColor * selectionBarColor;
@property(retain) UIImage * selectionDragDotImage;
@property(retain) UIColor * selectionHighlightColor;
@property int shortcutConversionType;
@property long long spellCheckingType;
@property(readonly) Class superclass;
@property(readonly) Class superclass;
@property(readonly) Class superclass;
@property bool suppressReturnKeyStyling;
@property(copy) NSString * text;
@property long long textAlignment;
@property(retain) UIColor * textColor;
@property(readonly) UIView * textInputView;
@property int textLoupeVisibility;
@property int textSelectionBehavior;
@property id textSuggestionDelegate;
@property struct __CFCharacterSet { }* textTrimmingSet;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(copy) NSDictionary * typingAttributes;
@property bool useInterfaceLanguageForLocalization;

+ (bool)_isCompatibilityTextField;
+ (bool)_isDisplayingShortcutViewController;

- (bool)MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
- (id)MPU_contentSizeUpdater;
- (void)MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:(bool)arg1;
- (void)__resumeBecomeFirstResponder;
- (void)_activateSelectionView;
- (void)_addShortcut:(id)arg1;
- (void)_applicationResuming:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_atomBackgroundViewFrame;
- (id)_attributedText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_availableTextRectExcludingButtonsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_availableTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forEditing:(bool)arg2;
- (id)_backgroundView;
- (id)_baselineLayoutConstraint;
- (double)_baselineLayoutConstraintConstantForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_baselineLayoutLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_baselineLeftViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_becomeFirstResponder;
- (bool)_canDrawContent;
- (void)_clearBackgroundViews;
- (id)_clearButton;
- (void)_clearButtonClicked:(id)arg1;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_clearButtonSize;
- (void)_clearSelectionUI;
- (id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3;
- (void)_createBaselineLayoutLabelIfNecessary;
- (void)_createInteractionAssistant;
- (long long)_currentTextAlignment;
- (void)_define:(id)arg1;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (id)_dictationInterpretations;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLabel:(id)arg2;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)_endedEditing;
- (id)_fieldEditor;
- (bool)_fieldEditorAttached;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForLabel:(id)arg1 inTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_hasContent;
- (bool)_hasSuffixField;
- (bool)_heightShouldBeMini;
- (bool)_implementsCustomDrawing;
- (bool)_inPopover;
- (void)_initialScrollDidFinish:(id)arg1;
- (id)_inputController;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_invalidateBaselineLayoutConstraints;
- (bool)_isDisplayingReferenceLibraryViewController;
- (bool)_isPasscodeStyle;
- (bool)_isShowingPlaceholder;
- (bool)_isShowingPrefix;
- (struct CGSize { double x1; double x2; })_leftViewOffset;
- (float)_marginTop;
- (float)_marginTopForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })_originForTextFieldLabel:(id)arg1;
- (bool)_partsShouldBeMini;
- (double)_passcodeStyleAlpha;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (id)_placeholderColor;
- (id)_placeholderLabel;
- (Class)_placeholderLabelClass;
- (id)_placeholderView;
- (void)_populateArchivedSubviews:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_prefixFrame;
- (void)_promptForReplace:(id)arg1;
- (id)_proxyTextInput;
- (bool)_requiresKeyboardResetOnReload;
- (void)_resetSelectionUI;
- (void)_resignFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderExternalTouchRectForWindow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (struct CGSize { double x1; double x2; })_rightViewOffset;
- (void)_sanitizeText:(id)arg1;
- (id)_scriptingInfo;
- (struct CGPoint { double x1; double x2; })_scrollOffset;
- (void)_scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (void)_selectionMayChange:(id)arg1;
- (void)_setAttributedText:(id)arg1 onFieldEditorAndSetCaretSelectionAfterText:(bool)arg2;
- (void)_setBackgroundFillColor:(id)arg1;
- (void)_setBackgroundStrokeColor:(id)arg1;
- (void)_setBackgroundStrokeWidth:(double)arg1;
- (void)_setBaselineLayoutConstraint:(id)arg1;
- (void)_setBaselineLayoutLabel:(id)arg1;
- (void)_setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setLeftViewOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setNeedsStyleRecalc;
- (void)_setPasscodeStyleAlpha:(double)arg1;
- (void)_setPrefix:(id)arg1;
- (void)_setRightViewOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setSuffix:(id)arg1 withColor:(id)arg2;
- (void)_setSystemBackgroundViewActive:(bool)arg1;
- (void)_setUpBaselineLayoutConstraintsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_shouldEndEditing;
- (bool)_shouldObscureInput;
- (bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (void)_showTextStyleOptions:(id)arg1;
- (bool)_showsAtomBackground;
- (bool)_showsClearButton:(bool)arg1;
- (bool)_showsClearButtonWhenEmpty;
- (bool)_showsClearButtonWhenNonEmpty:(bool)arg1;
- (bool)_showsLeftView;
- (bool)_showsRightView;
- (void)_sizeChanged:(bool)arg1;
- (void)_stopObservingFieldEditorScroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_suffixFrame;
- (long long)_suffixLabelTextAlignment;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)_syncTypingAttributesWithDefaultAttribute:(id)arg1;
- (id)_systemBackgroundView;
- (Class)_systemBackgroundViewClass;
- (id)_text;
- (id)_textInputViewForAddingGestureRecognizers;
- (id)_textLabelView;
- (bool)_textNeedsSanitizing:(id)arg1;
- (struct CGSize { double x1; double x2; })_textSize;
- (struct CGSize { double x1; double x2; })_textSizeUsingFullFontSize:(bool)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_updateAtomBackground;
- (void)_updateAtomTextColor;
- (void)_updateAutosizeStyleIfNeeded;
- (void)_updateBackgroundViewsAnimated:(bool)arg1;
- (void)_updateBaselineInformationDependentOnBounds;
- (void)_updateButtons;
- (void)_updateForPasscodeAppearance;
- (void)_updateLabel;
- (void)_updatePlaceholderPosition;
- (void)_updateSuffix:(id)arg1;
- (void)_updateTextLabel;
- (bool)_useGesturesForEditableContent;
- (bool)_wantsBaselineUpdatingFollowingConstraintsPass;
- (void)_windowBecameKey;
- (id)ab_text;
- (id)ab_textAttributes;
- (id)actualFont;
- (double)actualMinimumFontSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedCaretRectForCaretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)adjustsFontSizeToFitWidth;
- (bool)allowsEditingTextAttributes;
- (int)atomStyle;
- (void)attachFieldEditor:(id)arg1;
- (id)attributedPlaceholder;
- (id)attributedText;
- (id)automaticallySelectedOverlay;
- (id)background;
- (id)backgroundColor;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)becomeFirstResponder;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })borderRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)borderStyle;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (void)cancelAutoscroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (unsigned long long)characterOffsetAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)clearButton;
- (long long)clearButtonMode;
- (struct CGSize { double x1; double x2; })clearButtonOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clearButtonRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)clearText;
- (int)clearingBehavior;
- (bool)clearsOnBeginEditing;
- (bool)clearsOnInsertion;
- (bool)clearsPlaceholderOnBeginEditing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)configureFromScriptTextField:(id)arg1;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)copy:(id)arg1;
- (void)createPlaceholderIfNecessary;
- (id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(long long)arg2;
- (id)createTextLabelWithTextColor:(id)arg1;
- (id)customOverlayContainer;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (id)defaultTextAttributes;
- (id)delegate;
- (void)deleteBackward;
- (void)disableClearsOnInsertion;
- (id)disabledBackground;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (void)drawBorder:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawPlaceholderInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawPrefixInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawSuffixInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawsAsAtom;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endOfDocument;
- (void)endSelectionChange;
- (bool)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 toCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)fieldEditorDidChange:(id)arg1;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (void)finishedSettingPlaceholder;
- (void)finishedSettingTextOrAttributedText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)font;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (bool)hasMarkedText;
- (bool)hasSelection;
- (bool)hasText;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconRect;
- (void)increaseSize:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputAccessoryView;
- (id)inputDelegate;
- (id)inputView;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (bool)isAccessibilityElementByDefault;
- (bool)isEditable;
- (bool)isEditing;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isReallyFirstResponder;
- (bool)isUndoEnabled;
- (bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3;
- (bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (bool)keyboardInputShouldDelete:(id)arg1;
- (void)layoutSubviews;
- (void)layoutTilesNow;
- (id)leftView;
- (long long)leftViewMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (double)minimumFontSize;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (unsigned long long)offsetInMarkedTextForSelection:(id)arg1;
- (float)paddingBottom;
- (float)paddingLeft;
- (float)paddingRight;
- (float)paddingTop;
- (void)paste:(id)arg1;
- (id)placeholder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)rc_copyKeyboardSettingsFromTextField:(id)arg1;
- (void)rc_resignFirstResponderWithoutDismissingKeyboardForDuration:(double)arg1 completionBlock:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (bool)resignFirstResponder;
- (bool)respondsToSelector:(SEL)arg1;
- (id)rightView;
- (long long)rightViewMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)scrollTextFieldToVisible;
- (id)searchText;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectAll;
- (void)selectAllFromFieldEditor:(id)arg1;
- (id)selectedAttributedText;
- (id)selectedText;
- (id)selectedTextRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAllowsEditingTextAttributes:(bool)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setAtomStyle:(int)arg1;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAutoresizesTextToFit:(bool)arg1;
- (void)setBackground:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBecomesFirstResponderOnClearButtonTap:(bool)arg1;
- (void)setBorderStyle:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClearButtonMode:(long long)arg1;
- (void)setClearButtonOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setClearButtonStyle:(int)arg1;
- (void)setClearingBehavior:(int)arg1;
- (void)setClearsOnBeginEditing:(bool)arg1;
- (void)setClearsOnInsertion:(bool)arg1;
- (void)setClearsPlaceholderOnBeginEditing:(bool)arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setContinuousSpellCheckingEnabled:(bool)arg1;
- (void)setDefaultTextAttributes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabledBackground:(id)arg1;
- (void)setDrawsAsAtom:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1 fullFontSize:(float)arg2;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIcon:(id)arg1;
- (void)setInactiveHasDimAppearance:(bool)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelOffset:(float)arg1;
- (void)setLeftView:(id)arg1;
- (void)setLeftViewMode:(long long)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setMinimumFontSize:(double)arg1;
- (void)setPaddingBottom:(float)arg1;
- (void)setPaddingLeft:(float)arg1;
- (void)setPaddingRight:(float)arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)setPaddingTop:(float)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setRightView:(id)arg1;
- (void)setRightViewMode:(long long)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextAutorresizesToFit:(bool)arg1;
- (void)setTextCentersHorizontally:(bool)arg1;
- (void)setTextCentersVertically:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)setUndoEnabled:(bool)arg1;
- (double)shadowBlur;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)takeTraitsFrom:(id)arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textInputView;
- (id)textLabel;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)tintColorDidChange;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)typingAttributes;
- (id)undoManager;
- (void)unmarkText;
- (id)viewForBaselineLayout;
- (id)webView;
- (void)willAttachFieldEditor:(id)arg1;
- (void)willDetachFieldEditor:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
