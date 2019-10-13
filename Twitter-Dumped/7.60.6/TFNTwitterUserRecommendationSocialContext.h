//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterStatusSocialContext-Protocol.h>

@class NSArray, NSString;

@interface TFNTwitterUserRecommendationSocialContext : NSObject <TFNTwitterStatusSocialContext>
{
    NSArray *_connectionUserReferences;
}

+ (id)socialTextForConnectionUserReferences:(id)arg1;
+ (id)socialContextForUserRecommendation:(id)arg1;
@property(readonly, nonatomic) NSArray *connectionUserReferences; // @synthesize connectionUserReferences=_connectionUserReferences;
- (void).cxx_destruct;
- (id)_plistDictionaryValueForTimeline:(_Bool)arg1;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)plistDictionaryValue;
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

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

