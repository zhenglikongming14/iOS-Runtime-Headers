/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer, NSString, TPMarginAdjustRep;

@interface TPPageRep : TSWPPageRep <TSDMasterDrawableDelegate> {
    CALayer *_separatorLayer;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) TPMarginAdjustRep * marginAdjustRep;
@property(readonly) Class superclass;

- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)bodyReps;
- (bool)childRepIsMasterDrawable:(id)arg1;
- (bool)childRepIsOnDocSetupCanvas:(id)arg1;
- (id)childRepsForHitTesting;
- (void)dealloc;
- (void)didUpdateLayer:(id)arg1;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (id)hitMasterRep:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id)arg2;
- (id)layerClass;
- (id)marginAdjustRep;
- (bool)masksToBounds;
- (void)p_didUpdateLayer:(id)arg1;
- (bool)p_headerFooterIsVisibleAndInteractive:(int)arg1;
- (int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)p_hitRep:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id)arg2;
- (bool)p_pageRequiresSeparator;
- (id)p_topmostEditingInfo;
- (void)p_updateBorderLayers;
- (void)p_updateLayoutBordersVisibility;
- (void)p_updateSeparatorLayer;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)showHUDForWPRep:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)viewScaleDidChange;
- (id)visibleChildLayouts;
- (void)willBeRemoved;

@end
