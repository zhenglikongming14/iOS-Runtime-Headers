/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLDevice>, MTLToolsPointerArray, NSString;

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI> {
    MTLToolsPointerArray *_commandBuffers;
}

@property int backgroundTrackingPID;
@property(readonly) MTLToolsPointerArray * commandBuffers;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) <MTLDevice> * device;
@property bool executionEnabled;
@property(readonly) unsigned long long hash;
@property(copy) NSString * label;
@property(getter=isProfilingEnabled) bool profilingEnabled;
@property bool skipRender;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (int)backgroundTrackingPID;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBuffers;
- (id)device;
- (bool)executionEnabled;
- (void)finish;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)insertDebugCaptureBoundary;
- (bool)isProfilingEnabled;
- (id)label;
- (void)setBackgroundTrackingPID:(int)arg1;
- (void)setExecutionEnabled:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setProfilingEnabled:(bool)arg1;
- (void)setSkipRender:(bool)arg1;
- (bool)skipRender;

@end
