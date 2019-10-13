//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterStatusBanner-Protocol.h>
#import <T1Twitter/TFSTwitterTimelinePlistSerialization-Protocol.h>

@class NSString;
@protocol TFNURTSocialContextURTLandingURL;

@interface TFNTwitterURTTimelineStatusBanner : NSObject <TFNTwitterStatusBanner, TFSTwitterTimelinePlistSerialization>
{
    NSString *_bannerText;
    NSString *_badgeName;
    id <TFNURTSocialContextURTLandingURL> _URTLandingURL;
    long long _type;
}

+ (long long)_tfn_typeForBadgeName:(id)arg1;
+ (id)_tfn_supportedBadgeNameForBadgeName:(id)arg1;
+ (id)_tfn_supportedBadgeNames;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id <TFNURTSocialContextURTLandingURL> URTLandingURL; // @synthesize URTLandingURL=_URTLandingURL;
@property(readonly, nonatomic) NSString *badgeName; // @synthesize badgeName=_badgeName;
@property(readonly, copy, nonatomic) NSString *bannerText; // @synthesize bannerText=_bannerText;
- (void).cxx_destruct;
- (id)userReferences;
- (id)landingURL;
- (long long)contextType;
- (id)activityPage;
- (id)activityTitle;
- (id)allUserReferences;
- (_Bool)socialTextIsActivityCount;
- (id)activityName;
- (id)socialText;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithBannerText:(id)arg1 badgeName:(id)arg2 URTLandingURL:(id)arg3;
- (_Bool)_isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

