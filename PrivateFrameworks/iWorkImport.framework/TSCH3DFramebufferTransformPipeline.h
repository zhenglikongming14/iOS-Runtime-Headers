/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSCH3DPipelineLinkable>, TSCH3DGLFramebuffer;

@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline {
    TSCH3DGLFramebuffer *mInput;
    <TSCH3DPipelineLinkable> *mSource;
    TSCH3DGLFramebuffer *mTarget;
}

@property(retain) <TSCH3DPipelineLinkable> * source;
@property(retain) TSCH3DGLFramebuffer * target;

- (void)dealloc;
- (void)loadSource;
- (bool)prepareFramebuffer;
- (bool)run;
- (void)setSource:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)source;
- (id)target;

@end
