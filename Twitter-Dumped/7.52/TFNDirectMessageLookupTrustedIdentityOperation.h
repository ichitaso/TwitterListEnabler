//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@class NSString, TSPSession;

@interface TFNDirectMessageLookupTrustedIdentityOperation : TFSConcurrentOperation
{
    NSString *_conversationID;
    TSPSession *_signalProtocolSession;
    CDUnknownBlockType _completion;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) TSPSession *signalProtocolSession; // @synthesize signalProtocolSession=_signalProtocolSession;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
- (void).cxx_destruct;
- (void)private_completeWithSuccess:(_Bool)arg1 deviceID:(id)arg2 identityKey:(id)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)run;
- (id)initWithConversationID:(id)arg1 signalProtocolSession:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

