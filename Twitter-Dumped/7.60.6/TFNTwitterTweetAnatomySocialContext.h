//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterStatusSocialContext-Protocol.h>

@class NSArray, NSString;

@interface TFNTwitterTweetAnatomySocialContext : NSObject <TFNTwitterStatusSocialContext>
{
    NSString *_socialText;
    NSString *_socialBadgeName;
    NSArray *_allUserReferences;
    long long _type;
}

+ (id)_conversationModuleSocialContextForStatus:(id)arg1;
+ (id)socialContextForStatus:(id)arg1;
+ (id)canonicalSocialContextForStatus:(id)arg1 fromUserReference:(id)arg2 authenticatedUserID:(long long)arg3;
+ (_Bool)statusHasNonConversationTweetAnatomySocialContext:(id)arg1;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *allUserReferences; // @synthesize allUserReferences=_allUserReferences;
@property(readonly, nonatomic) NSString *socialBadgeName; // @synthesize socialBadgeName=_socialBadgeName;
@property(readonly, nonatomic) NSString *socialText; // @synthesize socialText=_socialText;
- (void).cxx_destruct;
- (id)_init;
- (id)timelinePlistDictionaryValue;
- (id)plistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)landingURL;
- (long long)contextType;
- (_Bool)socialTextIsActivityCount;
@property(readonly, nonatomic) NSString *activityTitle;
@property(readonly, nonatomic) NSString *activityName;
@property(readonly, nonatomic) NSString *activityPage;
@property(readonly, copy) NSString *description;
- (id)initRetweetContextWithSocialText:(id)arg1 socialBadgeName:(id)arg2 allUserReferences:(id)arg3;
- (id)initReplyContextWithSocialText:(id)arg1 socialBadgeName:(id)arg2 allUserReferences:(id)arg3;
- (id)initWithSocialText:(id)arg1 socialBadgeName:(id)arg2 allUserReferences:(id)arg3 socialContextType:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

