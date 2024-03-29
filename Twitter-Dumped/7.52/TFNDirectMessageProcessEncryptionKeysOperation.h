//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@class TSPAddress, TSPPreKeyBundle, TSPSession;
@protocol TFNDirectMessageProcessEncryptionKeysOperationDelegate;

@interface TFNDirectMessageProcessEncryptionKeysOperation : TFSConcurrentOperation
{
    TSPSession *_session;
    TSPPreKeyBundle *_preKeyBundle;
    TSPAddress *_address;
    id <TFNDirectMessageProcessEncryptionKeysOperationDelegate> _delegate;
}

@property __weak id <TFNDirectMessageProcessEncryptionKeysOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) TSPAddress *address; // @synthesize address=_address;
@property(retain) TSPPreKeyBundle *preKeyBundle; // @synthesize preKeyBundle=_preKeyBundle;
@property(readonly, nonatomic) TSPSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)run;
- (id)initWithSignalProtocolSession:(id)arg1;

@end

