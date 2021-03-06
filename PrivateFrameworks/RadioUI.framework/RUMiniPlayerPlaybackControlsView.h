/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class UIView;

@interface RUMiniPlayerPlaybackControlsView : MPUMiniPlayerPlaybackControlsView {
}

@property(readonly) UIView * viewForPresentingStationActions;
@property(readonly) UIView * viewForPresentingTrackActions;

- (bool)_allowsScrubbingForItem:(id)arg1;
- (id)_artistTextForItem:(id)arg1;
- (Class)_miniPlayerActionsViewControllerClass;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_setupVisibleAndDisabledPartsForItem:(id)arg1;
- (Class)_transportControlsClassForItem:(id)arg1;
- (bool)_updateTitlesInView:(id)arg1 forItem:(id)arg2;
- (bool)_wantsCreateButtonForItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)viewForPresentingStationActions;
- (id)viewForPresentingTrackActions;

@end
