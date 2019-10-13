//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSDate, NSString, TFNDirectMessageComposition, TFNDirectMessageContext, TFNDirectMessageConversationIdentifier, TFNTwitterEntityImageInfo;
@protocol TFNDirectMessageConversationEntry, TFNDirectMessageConversationParticipant, TFNDirectMessageInbox, TFNDirectMessageUser;

@protocol TFNDirectMessageConversation <NSObject>
@property(nonatomic, readonly) _Bool unread;
@property(nonatomic, readonly) _Bool mentionNotificationsDisabled;
@property(nonatomic, readonly) NSDate *muteExpirationTime;
@property(nonatomic, readonly) _Bool notificationsDisabled;
- (id <TFNDirectMessageUser>)admin;
- (id <TFNDirectMessageUser>)recipient;
@property(nonatomic, readonly) id <TFNDirectMessageConversationParticipant> perspectivalParticipant;
@property(nonatomic, readonly) NSArray *participantsExcludingPerspectivalUser;
@property(nonatomic, readonly) NSArray *participants;
@property(nonatomic, readonly) long long creatorID;
@property(nonatomic, readonly) NSDate *latestUpdateTime;
@property(nonatomic, readonly) NSDate *createTime;
- (void)resetComposition;
@property(nonatomic, readonly) TFNDirectMessageComposition *composition;
- (id <TFNDirectMessageConversationEntry>)latestEntryOfType:(unsigned long long)arg1;
- (id <TFNDirectMessageConversationEntry>)entryAtIndex:(unsigned long long)arg1;
@property(nonatomic, readonly) id <TFNDirectMessageConversationEntry> latestEntry;
@property(nonatomic, readonly) _Bool isIdentifiable;
@property(nonatomic, readonly) _Bool hasMoreEntries;
@property(nonatomic, readonly) unsigned long long entryCount;
- (_Bool)isEmpty;
@property(nonatomic, readonly) NSArray *allEntries;
@property(nonatomic, readonly) _Bool isSelfConversation;
@property(nonatomic, readonly) CDStruct_912cb5d2 readState;
@property(nonatomic, readonly) TFNTwitterEntityImageInfo *avatarInfo;
- (_Bool)isLowQuality;
- (_Bool)isTrusted;
- (_Bool)isReadOnly;
@property(nonatomic, readonly) long long conversationType;
@property(nonatomic, readonly) NSString *conversationName;
@property(nonatomic, readonly) NSString *conversationID;
@property(nonatomic, readonly) TFNDirectMessageConversationIdentifier *identifier;
@property(nonatomic, readonly) long long sortEventID;
@property(nonatomic, readonly) id <TFNDirectMessageInbox> inbox;
@property(nonatomic, readonly) TFNDirectMessageContext *context;

// Remaining properties
@property(nonatomic, readonly) _Bool empty;
@property(nonatomic, readonly) _Bool lowQuality;
@property(nonatomic, readonly) _Bool readOnly;
@property(nonatomic, readonly) _Bool trusted;
@end

