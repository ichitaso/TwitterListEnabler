//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

#import <T1Twitter/TFNDirectMessageCommitPreKeysOperationDelegate-Protocol.h>
#import <T1Twitter/TFNDirectMessageGeneratePreKeysOperationDelegate-Protocol.h>
#import <T1Twitter/TFNDirectMessageLoadRegistrationOperationDelegate-Protocol.h>
#import <T1Twitter/TFNDirectMessagePublishEncryptionKeysOperationDelegate-Protocol.h>

@class NSArray, NSError, NSOperation, NSOperationQueue, NSString, TFNDirectMessageCommitPreKeysOperation, TFNDirectMessageGeneratePreKeysOperation, TFNDirectMessageLoadRegistrationDataOperation, TFNDirectMessagePublishEncryptionKeysOperation, TSPIdentityKey, TSPSession;

@interface TFNDirectMessageReplenishPreKeysOperation : TFSConcurrentOperation <TFNDirectMessageLoadRegistrationOperationDelegate, TFNDirectMessageGeneratePreKeysOperationDelegate, TFNDirectMessagePublishEncryptionKeysOperationDelegate, TFNDirectMessageCommitPreKeysOperationDelegate>
{
    _Bool _success;
    NSString *_accountID;
    TSPSession *_session;
    CDUnknownBlockType _completion;
    TFNDirectMessageLoadRegistrationDataOperation *_loadRegistrationDataOperation;
    TFNDirectMessageGeneratePreKeysOperation *_generatePreKeysOperation;
    TFNDirectMessagePublishEncryptionKeysOperation *_publishKeysOperation;
    TFNDirectMessageCommitPreKeysOperation *_commitPreKeysOperation;
    NSOperationQueue *_queue;
    NSOperation *_completionOperation;
    TSPIdentityKey *_identityKey;
    NSArray *_preKeys;
    NSError *_loadRegistrationDataError;
    NSError *_generatePreKeysError;
    NSError *_publishKeysError;
    NSError *_commitPreKeysError;
}

@property(retain) NSError *commitPreKeysError; // @synthesize commitPreKeysError=_commitPreKeysError;
@property(retain) NSError *publishKeysError; // @synthesize publishKeysError=_publishKeysError;
@property(retain) NSError *generatePreKeysError; // @synthesize generatePreKeysError=_generatePreKeysError;
@property(retain) NSError *loadRegistrationDataError; // @synthesize loadRegistrationDataError=_loadRegistrationDataError;
@property(copy) NSArray *preKeys; // @synthesize preKeys=_preKeys;
@property(retain) TSPIdentityKey *identityKey; // @synthesize identityKey=_identityKey;
@property _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) NSOperation *completionOperation; // @synthesize completionOperation=_completionOperation;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) TFNDirectMessageCommitPreKeysOperation *commitPreKeysOperation; // @synthesize commitPreKeysOperation=_commitPreKeysOperation;
@property(readonly, nonatomic) TFNDirectMessagePublishEncryptionKeysOperation *publishKeysOperation; // @synthesize publishKeysOperation=_publishKeysOperation;
@property(readonly, nonatomic) TFNDirectMessageGeneratePreKeysOperation *generatePreKeysOperation; // @synthesize generatePreKeysOperation=_generatePreKeysOperation;
@property(readonly, nonatomic) TFNDirectMessageLoadRegistrationDataOperation *loadRegistrationDataOperation; // @synthesize loadRegistrationDataOperation=_loadRegistrationDataOperation;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) TSPSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)commitPreKeysOperationDidSucceed:(id)arg1;
- (void)commitPreKeysOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)publishEncryptionKeysOperationDidSucceed:(id)arg1;
- (void)publishEncryptionKeysOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)generatePreKeysOperation:(id)arg1 didSucceedWithPreKeys:(id)arg2;
- (void)generatePreKeysOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)loadRegistrationDataOperation:(id)arg1 didSucceedWithRegistrationID:(id)arg2 identityKey:(id)arg3 signedPreKeyLastUpdated:(id)arg4;
- (void)loadRegistrationDataOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)completeOperation;
- (void)run;
- (void)cancel;
- (id)initWithAccountID:(id)arg1 signalProtocolSession:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

