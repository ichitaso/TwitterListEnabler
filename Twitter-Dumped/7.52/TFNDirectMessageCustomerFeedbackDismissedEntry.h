//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageConversationEntry.h>

#import <T1Twitter/TFNDirectMessageCustomerFeedbackDismissedEntry-Protocol.h>

@class NSDate, NSDictionary, NSString, TFNDirectMessageConversationEntryIdentifier;
@protocol TFNDirectMessageConversation, TFNDirectMessageUser;

@interface TFNDirectMessageCustomerFeedbackDismissedEntry : TFNDirectMessageConversationEntry <TFNDirectMessageCustomerFeedbackDismissedEntry>
{
}

@property(readonly, nonatomic) unsigned long long entryType;

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

