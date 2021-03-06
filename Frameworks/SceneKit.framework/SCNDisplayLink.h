/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CADisplayLink, NSObject<OS_dispatch_queue>;

@interface SCNDisplayLink : NSObject {
    id _block;
    CADisplayLink *_caDisplayLink;
    long long _frameInterval;
    double _lastVideoOutput;
    id _owner;
    NSObject<OS_dispatch_queue> *_queue;
    int _queuedFrameCount;
    id _reserved;
    bool_asynchronous;
    bool_invalidated;
    bool_paused;
}

@property long long frameInterval;
@property(getter=isPaused) bool paused;

- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)arg1 andDeltaTime:(double)arg2;
- (bool)_isInvalidated;
- (void)_pause;
- (void)_resume;
- (void)_teardown;
- (void)dealloc;
- (long long)frameInterval;
- (id)init;
- (id)initWithOwner:(id)arg1 queue:(id)arg2 block:(id)arg3;
- (void)invalidate;
- (bool)isPaused;
- (int)queuedFrameCount;
- (void)setFrameInterval:(long long)arg1;
- (void)setPaused:(bool)arg1 nextFrameTimeHint:(double)arg2;
- (void)setPaused:(bool)arg1;
- (void)willDie;

@end
