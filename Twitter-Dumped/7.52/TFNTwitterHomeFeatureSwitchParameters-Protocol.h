//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray;

@protocol TFNTwitterHomeFeatureSwitchParameters <NSObject>
@property(nonatomic, getter=isLatestHomeTimelineOptionAvailable) _Bool latestHomeTimelineOptionAvailable;
@property(readonly, nonatomic) double homeTimelineBackgroundFetchUILaunchDelay;
@property(readonly, nonatomic) NSArray *clientDedupingSuggestTypesToKeep;
@property(readonly, nonatomic) NSArray *clientDedupingSuggestTypesToRemove;
@property(readonly, nonatomic) unsigned long long clientDedupingMinimumModuleSize;
@property(readonly, nonatomic) unsigned long long clientDedupingMaxRecentCacheEntries;
@property(readonly, nonatomic) _Bool isClientDedupingUsingImpressionCacheEnabled;
@property(readonly, nonatomic, getter=isDedupingStatusIDsEnabled) _Bool dedupingStatusIDsEnabled;
@property(readonly, nonatomic) long long progressiveAPISegmentSize;
@property(readonly, nonatomic, getter=isProgressiveAPIEnabled) _Bool progressiveAPIEnabled;
@property(readonly, nonatomic) unsigned long long homeRequestMaxSeenIDs;
@end

