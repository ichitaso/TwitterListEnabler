//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageConversationEntry-Protocol.h>
#import <T1Twitter/TFNTwitterCardDataSourceObject-Protocol.h>
#import <T1Twitter/TFNTwitterCardDataSourceProvider-Protocol.h>

@class NSArray, NSString, TFSTwitterEntitySet;
@protocol TFNDirectMessageCardAttachment, TFNDirectMessageCustomProfile, TFNDirectMessageMediaAttachment, TFNDirectMessageQuickReplyRequest, TFNDirectMessageQuickReplyResponse, TFNDirectMessageStickerAttachment, TFNDirectMessageTweetAttachment, TFNDirectMessageUser;

@protocol TFNDirectMessageEntry <TFNDirectMessageConversationEntry, TFNTwitterCardDataSourceObject, TFNTwitterCardDataSourceProvider>
@property(nonatomic, readonly) NSArray *ctas;
@property(nonatomic, readonly) id <TFNDirectMessageCustomProfile> customProfile;
@property(nonatomic, readonly) id <TFNDirectMessageQuickReplyResponse> quickReplyResponse;
@property(nonatomic, readonly) id <TFNDirectMessageQuickReplyRequest> quickReplyRequest;
@property(nonatomic, readonly) _Bool markedAsAbuse;
@property(nonatomic, readonly) _Bool markedAsSpam;
@property(nonatomic, readonly) id <TFNDirectMessageCardAttachment> cardAttachment;
@property(nonatomic, readonly) id <TFNDirectMessageStickerAttachment> stickerAttachment;
@property(nonatomic, readonly) id <TFNDirectMessageTweetAttachment> tweetAttachment;
@property(nonatomic, readonly) id <TFNDirectMessageMediaAttachment> mediaAttachment;
- (_Bool)isSeenByAllParticipants;
@property(nonatomic, readonly) NSArray *seenByParticipants;
- (_Bool)isEstablished;
@property(nonatomic, readonly) _Bool sendFailed;
- (_Bool)isSending;
@property(nonatomic, readonly) id <TFNDirectMessageUser> sender;
@property(nonatomic, readonly) long long messageID;
@property(nonatomic, readonly) TFSTwitterEntitySet *entities;
@property(nonatomic, readonly) NSArray *displayTextRangesWithAttachmentLinks;
@property(nonatomic, readonly) NSArray *displayTextRanges;
@property(nonatomic, readonly) NSString *displayTextWithAttachmentLinks;
@property(nonatomic, readonly) NSString *sourceText;
@property(nonatomic, readonly) NSString *displayText;

// Remaining properties
@property(nonatomic, readonly) _Bool established;
@property(nonatomic, readonly) _Bool seenByAllParticipants;
@property(nonatomic, readonly) _Bool sending;
@end

