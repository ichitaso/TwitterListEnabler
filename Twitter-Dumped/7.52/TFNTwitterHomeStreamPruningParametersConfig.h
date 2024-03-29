//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterHomeStreamPruningParameters-Protocol.h>

@class NSString;

@interface TFNTwitterHomeStreamPruningParametersConfig : NSObject <TFNTwitterHomeStreamPruningParameters>
{
    _Bool _allowOldUnseenTweetsWithSocialProof;
    _Bool _pullUpUnseenTweetsWithinAgeLimit;
    double _numberOfTimelineViewHeightsFromTopRequiredForPruning;
    unsigned long long _minAdsSpacing;
    unsigned long long _minImpressionDuration;
    double _maxTweetScore;
    unsigned long long _reorderSeenItemsStartIndex;
    double _maxUnseenTweetAgeInHours;
    unsigned long long _minIndexAllowedForGapItem;
}

@property(nonatomic) unsigned long long minIndexAllowedForGapItem; // @synthesize minIndexAllowedForGapItem=_minIndexAllowedForGapItem;
@property(nonatomic) _Bool pullUpUnseenTweetsWithinAgeLimit; // @synthesize pullUpUnseenTweetsWithinAgeLimit=_pullUpUnseenTweetsWithinAgeLimit;
@property(nonatomic) _Bool allowOldUnseenTweetsWithSocialProof; // @synthesize allowOldUnseenTweetsWithSocialProof=_allowOldUnseenTweetsWithSocialProof;
@property(nonatomic) double maxUnseenTweetAgeInHours; // @synthesize maxUnseenTweetAgeInHours=_maxUnseenTweetAgeInHours;
@property(nonatomic) unsigned long long reorderSeenItemsStartIndex; // @synthesize reorderSeenItemsStartIndex=_reorderSeenItemsStartIndex;
@property(nonatomic) double maxTweetScore; // @synthesize maxTweetScore=_maxTweetScore;
@property(nonatomic) unsigned long long minImpressionDuration; // @synthesize minImpressionDuration=_minImpressionDuration;
@property(nonatomic) unsigned long long minAdsSpacing; // @synthesize minAdsSpacing=_minAdsSpacing;
@property(nonatomic) double numberOfTimelineViewHeightsFromTopRequiredForPruning; // @synthesize numberOfTimelineViewHeightsFromTopRequiredForPruning=_numberOfTimelineViewHeightsFromTopRequiredForPruning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

