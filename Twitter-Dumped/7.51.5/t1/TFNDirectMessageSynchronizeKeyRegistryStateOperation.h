//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDate, TFNDirectMessageKeyRegistryState, TSPPublicKey;
@protocol TFNDirectMessageSynchronizeKeyRegistryStateOperationDelegate;

@interface TFNDirectMessageSynchronizeKeyRegistryStateOperation : NSOperation
{
    TFNDirectMessageKeyRegistryState *_remoteState;
    unsigned long long _localStatus;
    TSPPublicKey *_identityKey;
    NSDate *_signedPreKeyLastUpdated;
    id <TFNDirectMessageSynchronizeKeyRegistryStateOperationDelegate> _delegate;
}

@property __weak id <TFNDirectMessageSynchronizeKeyRegistryStateOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDate *signedPreKeyLastUpdated; // @synthesize signedPreKeyLastUpdated=_signedPreKeyLastUpdated;
@property(readonly, nonatomic) TSPPublicKey *identityKey; // @synthesize identityKey=_identityKey;
@property(readonly, nonatomic) unsigned long long localStatus; // @synthesize localStatus=_localStatus;
@property(readonly, nonatomic) TFNDirectMessageKeyRegistryState *remoteState; // @synthesize remoteState=_remoteState;
- (void).cxx_destruct;
- (void)main;
- (id)initWithRemoteState:(id)arg1 localStatus:(unsigned long long)arg2 identityKey:(id)arg3 signedPreKeyLastUpdated:(id)arg4;

@end

