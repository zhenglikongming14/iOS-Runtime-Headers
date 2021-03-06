/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSObject<UIScrollViewDelegate>, NSString, UIScrollView;

@interface SUScrollViewScroller : NSObject <UIScrollViewDelegate> {
    NSObject<UIScrollViewDelegate> *_originalDelegate;
    NSMutableArray *_scrollRequests;
    UIScrollView *_scrollView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) UIScrollView * scrollView;
@property(readonly) Class superclass;

- (void)_addScrollRequest:(id)arg1;
- (void)_finishActiveScrollRequest;
- (void)_performContentOffsetRequest:(id)arg1;
- (void)_performNextScrollRequest;
- (void)_performScrollRectRequest:(id)arg1;
- (void)attachToScrollView:(id)arg1;
- (void)dealloc;
- (void)detachFromScrollView;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)scrollFrameToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2 completionBlock:(id)arg3;
- (id)scrollView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2 completionBlock:(id)arg3;

@end
