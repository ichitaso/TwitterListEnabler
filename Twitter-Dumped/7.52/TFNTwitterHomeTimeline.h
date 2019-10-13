//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterTimeline.h>

@class TFNTwitterStream;
@protocol TFNTwitterHomeTimelineConfiguration, TFNTwitterHomeTimelineStream, TFNTwitterHomeTimelineStreamFactory, TFNTwitterInjectableHomeTimelineStream, TFNTwitterTimelineScriber, TFSModelBuilder;

@interface TFNTwitterHomeTimeline : TFNTwitterTimeline
{
    _Bool _pendingLaunchRefreshDueToBackgroundFetch;
    _Bool _autoSwitchedToTop;
    _Bool _processedBackgroundFetchInitialLaunch;
    id <TFNTwitterTimelineScriber> _scriber;
    id <TFNTwitterHomeTimelineConfiguration> _streamConfiguration;
    id <TFSModelBuilder> _modelBuilder;
    long long _savedStateCompatibilityPolicy;
    id <TFNTwitterHomeTimelineStreamFactory> _streamFactory;
    long long _cacheWipeReason;
    long long _backgroundFetchDelayedLoadSource;
}

+ (long long)_tfn_cacheWipeReasonForCache:(id)arg1 withSavedStateCompatibilityPolicy:(long long)arg2;
+ (id)topHomeTimelineArchiveIdentifier;
+ (id)recommendedHomeTimelineArchiveIdentifier;
+ (id)latestHomeTimelineArchiveIdentifier;
+ (id)timelineUpdateNotificationName;
+ (id)streamUpdateFromAPINotificationName;
+ (id)streamUpdateNotificationName;
+ (unsigned long long)refreshPolicy;
+ (id)identifier;
@property(nonatomic) long long backgroundFetchDelayedLoadSource; // @synthesize backgroundFetchDelayedLoadSource=_backgroundFetchDelayedLoadSource;
@property(nonatomic) _Bool processedBackgroundFetchInitialLaunch; // @synthesize processedBackgroundFetchInitialLaunch=_processedBackgroundFetchInitialLaunch;
@property(nonatomic) long long cacheWipeReason; // @synthesize cacheWipeReason=_cacheWipeReason;
@property(readonly, nonatomic) id <TFNTwitterHomeTimelineStreamFactory> streamFactory; // @synthesize streamFactory=_streamFactory;
@property(readonly, nonatomic) long long savedStateCompatibilityPolicy; // @synthesize savedStateCompatibilityPolicy=_savedStateCompatibilityPolicy;
@property(nonatomic, getter=didAutoSwitchToTop) _Bool autoSwitchedToTop; // @synthesize autoSwitchedToTop=_autoSwitchedToTop;
@property(nonatomic, getter=isPendingLaunchRefreshDueToBackgroundFetch) _Bool pendingLaunchRefreshDueToBackgroundFetch; // @synthesize pendingLaunchRefreshDueToBackgroundFetch=_pendingLaunchRefreshDueToBackgroundFetch;
@property(readonly, nonatomic) id <TFSModelBuilder> modelBuilder; // @synthesize modelBuilder=_modelBuilder;
@property(readonly, nonatomic) id <TFNTwitterHomeTimelineConfiguration> streamConfiguration; // @synthesize streamConfiguration=_streamConfiguration;
- (id)scriber;
- (void).cxx_destruct;
- (void)refreshWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)streamWithPlistDictionary:(id)arg1;
- (void)deserializeItemsInContainerDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)deserializedDictionary;
- (void)attemptToSerializeStream;
- (id)streamPlistDictionaryValue;
- (void)_tfn_deleteTopAndLatestArchiveFiles;
- (id)archiveIdentifier;
@property(readonly, nonatomic) id <TFNTwitterInjectableHomeTimelineStream> injectableStream;
- (_Bool)hasUnreadItems;
- (id)initWithAccount:(id)arg1 plistDictionary:(id)arg2 archiveFileFullPath:(id)arg3 modelBuilder:(id)arg4 savedStateCompatibilityPolicy:(long long)arg5 streamConfiguration:(id)arg6 streamFactory:(id)arg7 scriber:(id)arg8;

// Remaining properties
@property(retain, nonatomic) TFNTwitterStream<TFNTwitterHomeTimelineStream> *stream; // @dynamic stream;

@end

