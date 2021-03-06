/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSURL;

@interface _GEORegionalResourceDownload : NSObject {
    NSString *_destinationPath;
    NSString *_expectedChecksum;
    NSString *_name;
    long long _type;
    NSURL *_url;
}

@property(copy) NSString * destinationPath;
@property(copy) NSString * expectedChecksum;
@property(copy) NSString * name;
@property long long type;
@property(copy) NSURL * url;

- (void)dealloc;
- (id)destinationPath;
- (id)expectedChecksum;
- (id)name;
- (void)setDestinationPath:(id)arg1;
- (void)setExpectedChecksum:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (long long)type;
- (id)url;

@end
