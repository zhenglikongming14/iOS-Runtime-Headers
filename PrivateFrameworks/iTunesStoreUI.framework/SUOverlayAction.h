/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUOverlayTransition, UIViewController;

@interface SUOverlayAction : NSObject {
    long long _animationCount;
    UIViewController *_otherViewController;
    SUOverlayTransition *_transition;
    int _type;
    UIViewController *_viewController;
}

@property int actionType;
@property long long animationCount;
@property(retain) UIViewController * otherViewController;
@property(retain) SUOverlayTransition * transition;
@property(retain) UIViewController * viewController;

- (int)actionType;
- (long long)animationCount;
- (void)dealloc;
- (id)otherViewController;
- (void)setActionType:(int)arg1;
- (void)setAnimationCount:(long long)arg1;
- (void)setOtherViewController:(id)arg1;
- (void)setTransition:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)transition;
- (id)viewController;

@end
