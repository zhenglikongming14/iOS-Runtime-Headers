/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableData, NSString;

@interface MFDbJournal : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    NSMutableData *_buffer;
    int _fd;
    } _lock;
    NSString *_path;
}

- (bool)_processJournalFile:(id)arg1 db:(struct sqlite3 { }*)arg2;
- (void)_resetBuffer;
- (bool)append:(const char *)arg1;
- (void)clear;
- (void)dealloc;
- (bool)flush;
- (id)initWithPath:(id)arg1;
- (bool)mergeWithDatabase:(struct sqlite3 { }*)arg1;

@end
