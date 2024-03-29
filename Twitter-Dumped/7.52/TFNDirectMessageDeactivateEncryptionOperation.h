//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@class TSPSession;

@interface TFNDirectMessageDeactivateEncryptionOperation : TFSConcurrentOperation
{
    TSPSession *_session;
    CDUnknownBlockType _completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) TSPSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)private_didDeleteAllMessagesWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)run;
- (id)initWithSession:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

