//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TLPSubscriptionDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, TFNDirectMessageTypingIndicatorControllerMetadata, TFNTwitterAccount;
@protocol TFNDirectMessageConversation, TFNDirectMessageTypingIndicatorControllerDelegate;

@interface TFNDirectMessageTypingIndicatorController : NSObject <TLPSubscriptionDelegate>
{
    _Bool _needToStartReceivingTypingIndicators;
    TFNTwitterAccount *_account;
    id <TFNDirectMessageConversation> _conversation;
    id <TFNDirectMessageTypingIndicatorControllerDelegate> _delegate;
    NSMutableArray *_subscriptions;
    NSMutableDictionary *_typingRecordsByUserID;
    double _lastPublishTime;
    TFNDirectMessageTypingIndicatorControllerMetadata *_metadata;
}

@property(retain, nonatomic) TFNDirectMessageTypingIndicatorControllerMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) double lastPublishTime; // @synthesize lastPublishTime=_lastPublishTime;
@property(retain, nonatomic) NSMutableDictionary *typingRecordsByUserID; // @synthesize typingRecordsByUserID=_typingRecordsByUserID;
@property(nonatomic) _Bool needToStartReceivingTypingIndicators; // @synthesize needToStartReceivingTypingIndicators=_needToStartReceivingTypingIndicators;
@property(retain, nonatomic) NSMutableArray *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(nonatomic) __weak id <TFNDirectMessageTypingIndicatorControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <TFNDirectMessageConversation> conversation; // @synthesize conversation=_conversation;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)subscription:(id)arg1 didReceiveEvent:(id)arg2;
- (void)subscription:(id)arg1 didChangeState:(long long)arg2;
- (void)conversationDidSendMessage:(id)arg1;
- (void)conversationDidBecomeNonDraft:(id)arg1;
- (void)writeScribe;
- (void)executeTypingCommand;
- (void)disableTypingIndicatorForUser:(id)arg1 didReceiveMessage:(_Bool)arg2;
- (void)enableTypingIndicatorForUser:(id)arg1;
- (void)didReceiveNewMessageForUser:(id)arg1;
- (void)publishTypingIndicator;
- (void)stopReceivingTypingIndicators;
- (void)startReceivingTypingIndicators;
@property(readonly, nonatomic) _Bool shouldShowTypingIndicator;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 conversation:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

