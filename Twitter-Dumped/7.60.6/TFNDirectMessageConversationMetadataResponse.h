//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSArray, NSString, TFNDirectMessageConversationMetadata;

@interface TFNDirectMessageConversationMetadataResponse : NSObject <TFSModel>
{
    TFNDirectMessageConversationMetadata *_conversationMetadata;
    NSArray *_users;
}

@property(readonly, nonatomic) NSArray *users; // @synthesize users=_users;
@property(readonly, nonatomic) TFNDirectMessageConversationMetadata *conversationMetadata; // @synthesize conversationMetadata=_conversationMetadata;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 userCache:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

