//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterStatusSocialContext-Protocol.h>

@class NSString;

@interface TFNTwitterStatusSummarySocialContext : NSObject <TFNTwitterStatusSocialContext>
{
    long long _type;
    unsigned long long _favoriteCount;
    unsigned long long _retweetCount;
    NSString *_trendingTopic;
}

@property(readonly, nonatomic) NSString *trendingTopic; // @synthesize trendingTopic=_trendingTopic;
@property(readonly, nonatomic) unsigned long long retweetCount; // @synthesize retweetCount=_retweetCount;
@property(readonly, nonatomic) unsigned long long favoriteCount; // @synthesize favoriteCount=_favoriteCount;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)plistDictionaryValueForTimeline:(_Bool)arg1;
- (id)timelinePlistDictionaryValue;
- (id)plistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)landingURL;
- (long long)contextType;
- (id)activityPage;
- (id)activityTitle;
- (id)allUserReferences;
- (_Bool)socialTextIsActivityCount;
- (id)activityName;
- (id)socialText;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

