//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDate, NSDictionary, TFNDirectMessageConversationEntryIdentifier;
@protocol TFNDirectMessageConversation, TFNDirectMessageConversationEntry, TFNDirectMessageUser;

@protocol TFNDirectMessageConversationEntry <NSObject>
@property(nonatomic, readonly) NSDate *time;
- (_Bool)isEstablished;
@property(nonatomic, readonly) unsigned long long entryType;
@property(nonatomic, readonly) id <TFNDirectMessageConversation> conversation;
@property(nonatomic, readonly) id <TFNDirectMessageUser> originator;
@property(nonatomic, readonly) CDStruct_778018ce sortKey;
@property(nonatomic, readonly) NSDictionary *scribeItem;
- (long long)compare:(id <TFNDirectMessageConversationEntry>)arg1;
- (long long)compareWithSortKey:(CDStruct_778018ce)arg1;
@property(readonly, copy, nonatomic) TFNDirectMessageConversationEntryIdentifier *identifier;

// Remaining properties
@property(nonatomic, readonly) _Bool established;
@end

