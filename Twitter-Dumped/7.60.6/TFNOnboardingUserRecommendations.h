//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSString, TFNTwitterUserRecommendationGroup;

@interface TFNOnboardingUserRecommendations : NSObject <TFSModel>
{
    _Bool _deduplication;
    TFNTwitterUserRecommendationGroup *_userRecommendationGroup;
}

@property(readonly, nonatomic) _Bool deduplication; // @synthesize deduplication=_deduplication;
@property(readonly, nonatomic) TFNTwitterUserRecommendationGroup *userRecommendationGroup; // @synthesize userRecommendationGroup=_userRecommendationGroup;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

