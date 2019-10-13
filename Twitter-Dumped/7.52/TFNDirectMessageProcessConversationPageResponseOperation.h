//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@class NSArray, TFNDirectMessageConversation, TFNDirectMessageConversationPageResponse, TFNDirectMessageModel;

@interface TFNDirectMessageProcessConversationPageResponseOperation : TFSConcurrentOperation
{
    TFNDirectMessageConversation *_conversation;
    TFNDirectMessageModel *_model;
    TFNDirectMessageConversationPageResponse *_response;
    NSArray *_entries;
    NSArray *_conversations;
}

@property(copy) NSArray *conversations; // @synthesize conversations=_conversations;
@property(copy) NSArray *entries; // @synthesize entries=_entries;
@property(retain) TFNDirectMessageConversationPageResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) TFNDirectMessageModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) TFNDirectMessageConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (void)private_processResponse:(id)arg1 conversation:(id)arg2 model:(id)arg3;
- (void)run;
- (id)initWithConversation:(id)arg1 model:(id)arg2;

@end

