//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAPICommandOperation.h>

@class NSString, TFNDirectMessageConversation, TFNDirectMessageConversationAvatarUpdatedEntry, TFNTwitterEntityImageInfo, TFNTwitterMediaAsset;

@interface TFNDirectMessagePostGroupAvatarUpdateOperation : TFNDirectMessageAPICommandOperation
{
    _Bool _hasUpdatedOptimistically;
    NSString *_accountID;
    TFNDirectMessageConversation *_conversation;
    TFNTwitterMediaAsset *_asset;
    NSString *_mediaID;
    NSString *_requestID;
    TFNTwitterEntityImageInfo *_localAvatarInfo;
    TFNDirectMessageConversationAvatarUpdatedEntry *_entry;
}

@property(nonatomic) _Bool hasUpdatedOptimistically; // @synthesize hasUpdatedOptimistically=_hasUpdatedOptimistically;
@property(readonly, nonatomic) TFNDirectMessageConversationAvatarUpdatedEntry *entry; // @synthesize entry=_entry;
@property(readonly, nonatomic) TFNTwitterEntityImageInfo *localAvatarInfo; // @synthesize localAvatarInfo=_localAvatarInfo;
@property(copy) NSString *requestID; // @synthesize requestID=_requestID;
@property(copy) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(readonly, nonatomic) TFNTwitterMediaAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) TFNDirectMessageConversation *conversation; // @synthesize conversation=_conversation;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)failedWithError:(id)arg1;
- (void)updateOptimistically;
- (id)makeCommandWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccountID:(id)arg1 conversation:(id)arg2 asset:(id)arg3 localURL:(id)arg4;

@end

