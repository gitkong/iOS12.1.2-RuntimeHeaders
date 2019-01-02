/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICNotesImporterClient : NSObject {
    NSXPCConnection * _connectionToService;
    unsigned long long  _requestCount;
    NSObject<OS_dispatch_queue> * _requestCountQueue;
}

@property (nonatomic) unsigned long long requestCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestCountQueue;

- (void).cxx_destruct;
- (void)archiveEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)cleanupArchiveId:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)countEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)init;
- (void)parseHTMLStringFromEvernoteContentString:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)parseTitleFromHTMLString:(id)arg1 completionBlock:(id /* block */)arg2;
- (unsigned long long)requestCount;
- (id)requestCountQueue;
- (void)resumeConnectionIfNeeded;
- (void)setRequestCount:(unsigned long long)arg1;
- (void)setRequestCountQueue:(id)arg1;
- (void)suspendConnectionIfNeeded;
- (void)unarchiveEvernoteNoteFromArchiveId:(id)arg1 noteArchiveId:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)unarchiveEvernoteResourceFromArchiveId:(id)arg1 resourceArchiveId:(id)arg2 completionBlock:(id /* block */)arg3;

@end