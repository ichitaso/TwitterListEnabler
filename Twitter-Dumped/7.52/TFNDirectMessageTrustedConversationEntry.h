//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageConversationEntry.h>

@class NSDate, NSDictionary, NSString, TFNDirectMessageConversationEntryIdentifier;
@protocol TFNDirectMessageConversation, TFNDirectMessageUser;

@interface TFNDirectMessageTrustedConversationEntry : TFNDirectMessageConversationEntry
{
    unsigned long long _reason;
}

@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)assimilateLocalEntry:(id)arg1;
@property(readonly, nonatomic) unsigned long long entryType;
- (id)initLocalEntryWithReason:(unsigned long long)arg1;
- (id)initWithIdentifier:(id)arg1 time:(id)arg2 reason:(unsigned long long)arg3;

// Remaining properties
@property(readonly, nonatomic) __weak id <TFNDirectMessageConversation> conversation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEstablished) _Bool established;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) TFNDirectMessageConversationEntryIdentifier *identifier;
@property(readonly, nonatomic) id <TFNDirectMessageUser> originator;
@property(readonly, nonatomic) NSDictionary *scribeItem;
@property(readonly, nonatomic) CDStruct_778018ce sortKey;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSDate *time;

@end

