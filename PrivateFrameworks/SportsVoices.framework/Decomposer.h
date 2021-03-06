/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class NSArray, NSBundle, NSMutableDictionary;

@interface Decomposer : NSObject {
    NSArray *_availableSoundFiles;
    NSBundle *_bundle;
    NSMutableDictionary *_cache;
    id _delegate;
    int _iterations;
    bool_debugging;
}

@property id delegate;

- (void)dealloc;
- (id)delegate;
- (id)initWithDirectory:(id)arg1 bundle:(id)arg2;
- (id)optimalDecompositionOf:(id)arg1 isSubsetOfWhole:(bool)arg2;
- (id)optimalDecompositionOf:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
