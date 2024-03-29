//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, TFNTwitterUser;

@interface TFNTwitterConversationStructure : NSObject
{
    _Bool _hasMoreReplies;
    NSArray *_ancestors;
    NSArray *_ancestorIDs;
    NSArray *_participants;
    NSArray *_participantIDs;
    NSArray *_entityIDArray;
    NSNumber *_targetStatusID;
    TFNTwitterUser *_rootUser;
    NSNumber *_rootUserID;
}

@property(nonatomic) _Bool hasMoreReplies; // @synthesize hasMoreReplies=_hasMoreReplies;
@property(retain, nonatomic) NSNumber *rootUserID; // @synthesize rootUserID=_rootUserID;
@property(retain, nonatomic) TFNTwitterUser *rootUser; // @synthesize rootUser=_rootUser;
@property(retain, nonatomic) NSNumber *targetStatusID; // @synthesize targetStatusID=_targetStatusID;
@property(retain, nonatomic) NSArray *entityIDArray; // @synthesize entityIDArray=_entityIDArray;
@property(retain, nonatomic) NSArray *participantIDs; // @synthesize participantIDs=_participantIDs;
@property(retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) NSArray *ancestorIDs; // @synthesize ancestorIDs=_ancestorIDs;
@property(retain, nonatomic) NSArray *ancestors; // @synthesize ancestors=_ancestors;
- (void).cxx_destruct;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithRootUser:(id)arg1 participants:(id)arg2 entityIDArray:(id)arg3 ancestors:(id)arg4 targetStatusID:(id)arg5 hasMoreReplies:(_Bool)arg6;

@end

