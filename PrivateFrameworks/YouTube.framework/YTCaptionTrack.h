/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSString, NSURL, YTVideo;

@interface YTCaptionTrack : NSObject {
    NSURL *_captionTrackURL;
    NSString *_language;
    NSString *_title;
    YTVideo *_video;
    bool_speechRecognition;
}

@property(retain) NSURL * captionTrackURL;
@property(retain) NSString * language;
@property bool speechRecognition;
@property(retain) NSString * title;
@property(retain) YTVideo * video;

- (id)captionTrackURL;
- (void)dealloc;
- (id)description;
- (id)language;
- (void)setCaptionTrackURL:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setSpeechRecognition:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setVideo:(id)arg1;
- (bool)speechRecognition;
- (id)title;
- (id)video;

@end
