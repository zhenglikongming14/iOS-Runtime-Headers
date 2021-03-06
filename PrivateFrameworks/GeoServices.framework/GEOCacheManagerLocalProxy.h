/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface GEOCacheManagerLocalProxy : NSObject <GEOCacheManaging> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (long long)_invalidationDataHasExpired:(id)arg1;
- (bool)_invalidationDataHasExpiredByVersion:(unsigned int)arg1 domains:(id)arg2;
- (long long)_invalidationStateForTTL:(double)arg1 timestamp:(double)arg2 version:(unsigned int)arg3 versionDomains:(id)arg4;
- (bool)_isKey:(id)arg1 subsetOf:(id)arg2;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(id)arg2;
- (void)dealloc;
- (id)init;
- (long long)invalidationStateForPlace:(id)arg1;
- (void)versionsForDomains:(id)arg1 handler:(id)arg2;

@end
