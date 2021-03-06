/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSTCanvasReferenceProvider>, NSString, TSTReferenceNode, TSUColor;

@interface TSTCompletionToken : TSTWPTokenAttachment {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    <TSTCanvasReferenceProvider> *mCanvasReferenceProvider;
    NSString *mCompletionText;
    TSTReferenceNode *mEditingReferenceNode;
    } mPrefixRange;
    TSUColor *mReferenceColor;
    int mRenderAsTokenType;
}

@property <TSTCanvasReferenceProvider> * canvasReferenceProvider;
@property(retain) NSString * completionText;
@property(retain) TSTReferenceNode * editingReferenceNode;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } prefixRange;
@property(retain) TSUColor * referenceColor;
@property(readonly) int renderAsTokenType;

- (id).cxx_construct;
- (id)canvasReferenceProvider;
- (id)completionText;
- (id)copyIntoContext:(id)arg1 bakeModes:(bool)arg2;
- (void)dealloc;
- (id)description;
- (id)editingReferenceNode;
- (id)initFromArchive:(const struct CompletionTokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct TokenAttachmentArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 completionText:(id)arg2;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;
- (void)makeTokenReflectChoice:(id)arg1;
- (void)p_createCanvasReference;
- (void)p_removeCanvasReference;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })prefixRange;
- (id)referenceColor;
- (int)renderAsTokenType;
- (void)saveToArchive:(struct CompletionTokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct TokenAttachmentArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; unsigned int x5; unsigned int x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setCanvasReferenceProvider:(id)arg1;
- (void)setCompletionText:(id)arg1;
- (void)setEditingReferenceNode:(id)arg1;
- (void)setExpressionNode:(id)arg1;
- (void)setPrefixRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setReferenceColor:(id)arg1;
- (id)tokenText;

@end
