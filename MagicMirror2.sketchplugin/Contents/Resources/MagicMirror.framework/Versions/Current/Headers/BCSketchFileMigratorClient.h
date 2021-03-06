//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>, NSXPCConnection;

@interface BCSketchFileMigratorClient : NSObject
{
    NSXPCConnection *_connection;
    id <BCSketchFileMigrator> _proxy;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    CDUnknownBlockType _reply;
}


@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;
- (void)handleXPCError:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)migrateDocumentAtURL:(id)arg1 intoFolderAtURL:(id)arg2 options:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)migrateResourcesWithNames:(id)arg1 atURL:(id)arg2 options:(unsigned long long)arg3 withReply:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) id <BCSketchFileMigrator> proxy; // @synthesize proxy=_proxy;
@property(copy, nonatomic) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (void)sendReplyWithError:(id)arg1 options:(unsigned long long)arg2;
- (void)validateDocumentAtURL:(id)arg1 options:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)waitUntilDoneIfSynchronous;

@end

