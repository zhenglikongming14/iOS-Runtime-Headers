/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TPPageController;

@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn> {
    TPPageController *_pageController;
    unsigned long long _pageIndex;
}

@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } anchoredRange;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long nextWidowPullsDownFromCharIndex;
@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property(readonly) unsigned long long startAnchoredCharIndex;
@property(readonly) unsigned long long startCharIndex;
@property(readonly) Class superclass;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })anchoredRange;
- (void)dealloc;
- (id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2;
- (unsigned long long)nextWidowPullsDownFromCharIndex;
- (const struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; unsigned long long x3; struct _NSRange { unsigned long long x_4_1_1; unsigned long long x_4_1_2; } x4; unsigned long long x5; }*)p_targetFirstHint;
- (const struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; unsigned long long x3; struct _NSRange { unsigned long long x_4_1_1; unsigned long long x_4_1_2; } x4; unsigned long long x5; }*)p_targetLastHint;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (unsigned long long)startAnchoredCharIndex;
- (unsigned long long)startCharIndex;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteLayoutCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;

@end
