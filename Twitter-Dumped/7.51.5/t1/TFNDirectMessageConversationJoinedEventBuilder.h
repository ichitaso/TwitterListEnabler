//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNDirectMessageEventBuilder-Protocol.h>

@class TFNDirectMessageConversationJoinedEntryBuilder;

@interface TFNDirectMessageConversationJoinedEventBuilder : NSObject <TFNDirectMessageEventBuilder>
{
    TFNDirectMessageConversationJoinedEntryBuilder *_entryBuilder;
}

@property(readonly, nonatomic) TFNDirectMessageConversationJoinedEntryBuilder *entryBuilder; // @synthesize entryBuilder=_entryBuilder;
- (void).cxx_destruct;
- (id)eventWithJSONDictionary:(id)arg1 userCache:(id)arg2;
- (id)init;

@end

