/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIIndexBarEntryListControllerDelegate>, NSString, SKUIViewElement;

@interface SKUIIndexBarEntryListController : NSObject {
    <SKUIIndexBarEntryListControllerDelegate> *_delegate;
    long long _numberOfEntryDescriptors;
    NSString *_rootTargetIndexBarEntryID;
    SKUIViewElement *_rootTargetViewElement;
    bool_hidesIndexBar;
    bool_needsRootTargetViewElement;
}

@property <SKUIIndexBarEntryListControllerDelegate> * delegate;
@property(readonly) bool hidesIndexBar;
@property(readonly) bool needsRootTargetViewElement;
@property(readonly) long long numberOfEntryDescriptors;
@property(readonly) NSString * rootTargetIndexBarEntryID;
@property(retain) SKUIViewElement * rootTargetViewElement;

+ (id)entryListControllerForEntryListViewElement:(id)arg1;
+ (id)entryListControllerForEntryViewElement:(id)arg1;

- (void).cxx_destruct;
- (void)_didInvalidate;
- (id)delegate;
- (id)entryDescriptorAtIndex:(long long)arg1;
- (bool)hidesIndexBar;
- (bool)needsRootTargetViewElement;
- (long long)numberOfEntryDescriptors;
- (void)reloadViewElementData;
- (id)rootTargetIndexBarEntryID;
- (id)rootTargetViewElement;
- (void)setDelegate:(id)arg1;
- (void)setRootTargetViewElement:(id)arg1;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2;

@end
