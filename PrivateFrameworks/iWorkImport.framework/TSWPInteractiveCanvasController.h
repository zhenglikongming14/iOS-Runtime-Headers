/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPInteractiveCanvasController : TSDInteractiveCanvasController {
    bool_isEditingText;
    bool_isTearingDown;
    bool_layoutBordersVisible;
}

@property(readonly) bool handleHyperlinksWithTextGRs;
@property(readonly) bool isEditingText;
@property(readonly) bool isTearingDown;
@property(readonly) bool layoutBordersVisible;
@property(readonly) bool shouldRespondToTextHyperlinks;

+ (struct CGColor { }*)layoutBorderColor;

- (bool)cellCommentsAllowedForTableInfo:(id)arg1;
- (void)closeHyperlinkPopover;
- (id)closestRepToPoint:(struct CGPoint { double x1; double x2; })arg1 forStorage:(id)arg2;
- (void)dealloc;
- (void)didBeginEditingText;
- (void)getColumnLeftPosition:(double*)arg1 columnRightPosition:(double*)arg2 singleColumnAtSelectionPoint:(bool)arg3;
- (void)getColumnLeftPosition:(double*)arg1 columnRightPosition:(double*)arg2;
- (bool)handleHyperlinksWithTextGRs;
- (void)hideDisplayedAnnotation;
- (bool)hyperlinkPopoverIsShown;
- (id)infosToHideForCanvas:(id)arg1;
- (bool)isEditingText;
- (bool)isTearingDown;
- (bool)layoutBordersVisible;
- (void)p_recursivelyAddRep:(id)arg1 forStorage:(id)arg2 toSet:(id)arg3;
- (id)p_repsForStorage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2;
- (void)setShowsComments:(bool)arg1;
- (bool)shouldRespondToTextHyperlinks;
- (void)showAnnotation:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(bool)arg4 pinned:(bool)arg5 shouldSetSelection:(bool)arg6;
- (void)showHyperlinkInfoForField:(id)arg1 inRep:(id)arg2 openInEditMode:(bool)arg3;
- (bool)showsComments;
- (id)storageForAnnotationModel:(id)arg1 selection:(id)arg2;
- (void)teardown;
- (void)willEndEditingText;
- (void)withLayoutForModel:(id)arg1 withSelection:(id)arg2 performBlock:(id)arg3;

@end
