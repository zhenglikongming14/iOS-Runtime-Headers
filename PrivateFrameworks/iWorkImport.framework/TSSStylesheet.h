/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableDictionary, NSSet, NSString, TSSStylesheet, TSUMutableRetainedPointerSet, TSURetainedPointerKeyDictionary, TSWPParagraphStyle;

@interface TSSStylesheet : TSPObject <TSKTransformableObject> {
    boolmCanCullStyles;
    boolmIsLocked;
    TSSStylesheet *mChild;
    NSMutableDictionary *mIdentifierToStyleMap;
    TSSStylesheet *mParent;
    TSURetainedPointerKeyDictionary *mParentToChildrenStyleMap;
    TSUMutableRetainedPointerSet *mStyles;
}

@property bool canCullStyles;
@property(readonly) TSSStylesheet * child;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) TSWPParagraphStyle * defaultPresenterNotesParagraphStyle;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool isLocked;
@property(readonly) TSSStylesheet * parent;
@property(readonly) NSSet * styles;
@property(readonly) Class superclass;

+ (id)p_presenterNotesListStyleIdentifierForListLabelType:(int)arg1;
+ (id)presenterNotesParagraphStyleIdentifier;
+ (id)variationMapForVaryingCharacterStyle:(id)arg1 overParagraphStyle:(id)arg2 withPropertyMap:(id)arg3;

- (id)_defaultCharacterStyleWasCreated:(bool*)arg1;
- (id)_defaultColumnStyleWasCreated:(bool*)arg1;
- (id)_defaultListStyleWasCreated:(bool*)arg1;
- (id)_defaultParagraphStyleWasCreated:(bool*)arg1;
- (id)_defaultStyleOfClass:(Class)arg1 withIdentifier:(id)arg2 wasCreated:(bool*)arg3 usingBlock:(id)arg4;
- (id)_hyperlinkStyleWasCreated:(bool*)arg1;
- (void)addDefaultPresenterNotesStylesIfAbsent;
- (id)addDuplicateOfStyle:(id)arg1 withIdentifier:(id)arg2;
- (void)addStyle:(id)arg1 withIdentifier:(id)arg2;
- (void)addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3;
- (void)addStyle:(id)arg1 withParent:(id)arg2;
- (void)addStyle:(id)arg1;
- (bool)canCullStyles;
- (bool)cascadedContainsStyle:(id)arg1;
- (id)cascadedStyleWithIdentifier:(id)arg1 componentMask:(int)arg2;
- (id)cascadedStyleWithIdentifier:(id)arg1;
- (id)cascadedStylesPassingTest:(id)arg1;
- (id)child;
- (id)childrenOfStyle:(id)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)containsStyle:(id)arg1;
- (void)dealloc;
- (id)defaultCharacterStyle;
- (id)defaultColumnStyle;
- (id)defaultListStyle;
- (id)defaultParagraphStyle;
- (id)defaultPresenterNotesParagraphStyle;
- (unsigned int)delayedArchivingPriority;
- (unsigned long long)descendantCount;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (void)enumerateCascadedStylesUsingBlock:(id)arg1;
- (void)enumerateStylesUsingBlock:(id)arg1;
- (id)firstCascadedStylePassingTest:(id)arg1;
- (id)firstRootlessStyleOfClass:(Class)arg1 withOverridePropertyMap:(id)arg2;
- (id)headerAndFooterStyle;
- (id)hyperlinkStyle;
- (id)identifiedStyles;
- (id)identifiedStylesOfClass:(Class)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 canCullStyles:(bool)arg2;
- (id)initWithContext:(id)arg1;
- (bool)isAncestorOf:(id)arg1;
- (bool)isChildOf:(id)arg1;
- (bool)isDescendentOf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocked;
- (bool)isParentOf:(id)arg1;
- (id)namedStylesOfClass:(Class)arg1;
- (id)pVariationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4;
- (void)p_addStyle:(id)arg1 withParent:(id)arg2 identifier:(id)arg3;
- (void)p_addStyleToParentChildren:(id)arg1;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_node<long long, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)p_allFilteredIdentifiersInArchive:(const struct StylesheetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::Reference> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct RepeatedPtrField<TSS::StylesheetArchive_IdentifiedStyleEntry> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; struct Reference {} *x5; struct RepeatedPtrField<TSS::StylesheetArchive_StyleChildrenEntry> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; boolx7; boolx8; int x9; unsigned int x10[1]; }*)arg1 unarchiver:(id)arg2;
- (id)p_defaultPresenterNotesListStylePropertyMapForListLabelType:(int)arg1;
- (id)p_defaultPresenterNotesParagraphStylePropertyMap;
- (id)p_defaultPresenterNotesParagraphStyleWithContext:(id)arg1;
- (id)p_newDefaultPresenterNotesListStyleWithContext:(id)arg1 forListLabelType:(int)arg2;
- (void)p_removeStyle:(id)arg1;
- (void)p_removeStyleFromParentChildren:(id)arg1;
- (void)p_setIdentifier:(id)arg1 ofStyle:(id)arg2;
- (void)p_setParent:(id)arg1 ofStyle:(id)arg2;
- (id)p_stylesPassingTest:(id)arg1 cascade:(bool)arg2;
- (void)p_upgradeDefaultPresenterNotesStylesResetExisting:(bool)arg1;
- (id)packageLocator;
- (id)parent;
- (void)removeStyle:(id)arg1;
- (id)rootAncestor;
- (void)saveStyles:(id)arg1 toArchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setCanCullStyles:(bool)arg1;
- (void)setIdentifier:(id)arg1 ofStyle:(id)arg2;
- (void)setIsLocked:(bool)arg1;
- (void)setParent:(id)arg1 ofStyle:(id)arg2;
- (void)setParent:(id)arg1 withParentStyleMap:(struct __CFDictionary { }*)arg2;
- (void)setParent:(id)arg1;
- (bool)shouldDelayArchiving;
- (id)styleWithIdentifier:(id)arg1 componentMask:(int)arg2;
- (id)styleWithIdentifier:(id)arg1;
- (id)styles;
- (id)stylesOfClass:(Class)arg1;
- (id)stylesPassingTest:(id)arg1;
- (id)stylesWithName:(id)arg1;
- (void)unlockStylesheetForDurationOfBlock:(id)arg1;
- (id)unusedStyleIdentifierWithPackageString:(id)arg1 styleDescriptor:(id)arg2 contentTag:(id)arg3;
- (void)upgradeDefaultPresenterNotesStyles;
- (id)variationOfCharacterStyle:(id)arg1 paragraphStyle:(id)arg2 propertyMap:(id)arg3;
- (id)variationOfStyle:(id)arg1 exactPropertyMap:(id)arg2;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 context:(id)arg3;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2 matchStyles:(id)arg3 context:(id)arg4;
- (id)variationOfStyle:(id)arg1 propertyMap:(id)arg2;
- (id)variationOfStyleMatchingStyle:(id)arg1 withNewParentStyle:(id)arg2;

@end
