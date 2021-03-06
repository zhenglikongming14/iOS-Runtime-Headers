/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, UIImage;

@interface PLJPEGPreheatItem : PLPreheatItem {
    UIImage *_cachedImage;
    unsigned int _cancelled;
    NSString *_imagePath;
    unsigned int _loadingOptions;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_requestGroup;
    unsigned long long _requestID;
    NSObject<OS_dispatch_group> *_waitGroup;
    bool_cachedImageCancelled;
    bool_dataIsLoading;
}

@property(readonly) NSString * imagePath;
@property(readonly) unsigned int options;

+ (id)jpegDataLoadSemaphore;

- (void)_cacheImage;
- (void)_cancel;
- (void)_leaveWaitGroupIfNeeded;
- (void)_uncancel;
- (bool)addImageHandler:(id)arg1;
- (id)cachedImage:(bool*)arg1;
- (id)cachedImageIfAvailable:(bool*)arg1;
- (void)cancelPreheatRequest;
- (id)createDecodedImage:(struct CGImage { }*)arg1 data:(id)arg2;
- (void)dealloc;
- (struct __CFDictionary { }*)decodeSessionOptions;
- (id)imagePath;
- (id)initWithImagePath:(id)arg1 format:(int)arg2 imageType:(long long)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 options:(unsigned int)arg5;
- (id)initialDecodeSessionOptions;
- (bool)isCancelled;
- (void)loadPreheatDataWithHandler:(id)arg1;
- (unsigned int)options;
- (bool)originalIsJpeg;
- (id)preheatData;
- (void)startPreheatRequestWithCompletionHandler:(id)arg1;

@end
