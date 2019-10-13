//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TAVTwitterSessionFactory : NSObject
{
}

+ (id)_tfn_defaultOutputViewFactoryForAccount:(id)arg1 configuration:(id)arg2;
+ (id)_tfn_amplifyVideoCardMediaPlaylistURLForSessionSource:(id)arg1 account:(id)arg2;
+ (id)_tfn_ctaInfoForPrimaryMediaEntity:(id)arg1;
+ (id)_tfn_promotedMetadataForSessionSource:(id)arg1 cardContext:(id)arg2;
+ (id)_tfn_liveVideoTypeForBroadcast:(id)arg1 sessionSource:(id)arg2;
+ (id)_tfn_playlistItemProviderForBroadcast:(id)arg1 adSessionSource:(id)arg2 account:(id)arg3 playlistItemMetadata:(id)arg4 configuration:(id)arg5 bufferingConfiguration:(CDStruct_15b96cbe)arg6 captionsConfiguration:(id)arg7 outputViewFactory:(id)arg8 latestReplayPlaylist:(_Bool)arg9 initialPlaybackTime:(CDStruct_1b6d18a9)arg10;
+ (id)_tfn_dynamicAdProviderForSessionSource:(id)arg1 cardContext:(id)arg2 account:(id)arg3 configuration:(id)arg4;
+ (id)_tfn_cardContextForSessionSource:(id)arg1 account:(id)arg2;
+ (id)_tfn_sessionForGIFWithSessionSource:(id)arg1 account:(id)arg2 configuration:(id)arg3 dynamicAdProvider:(id)arg4 initialScribeContext:(id)arg5 observers:(id)arg6 scribe:(id)arg7;
+ (id)_tfn_sessionForVineWithSessionSource:(id)arg1 account:(id)arg2 configuration:(id)arg3 dynamicAdProvider:(id)arg4 initialScribeContext:(id)arg5 observers:(id)arg6 scribe:(id)arg7;
+ (id)_tfn_sessionForMediaEnityVideoWithSessionSource:(id)arg1 account:(id)arg2 configuration:(id)arg3 dynamicAdProvider:(id)arg4 initialScribeContext:(id)arg5 observers:(id)arg6 scribe:(id)arg7;
+ (id)_tfn_sessionForYoutTubeVideoWithSessionSource:(id)arg1 account:(id)arg2 configuration:(id)arg3 initialScribeContext:(id)arg4 observers:(id)arg5 scribe:(id)arg6;
+ (id)_tfn_sessionforAmplifyVideoCardWithSessionSource:(id)arg1 account:(id)arg2 configuration:(id)arg3 dynamicAdProvider:(id)arg4 initialScribeContext:(id)arg5 observers:(id)arg6 scribe:(id)arg7;
+ (id)localCacheMediaURLForMediaEntity:(id)arg1 account:(id)arg2 filenameExtension:(id)arg3;
+ (id)sessionWithMediaEntity:(id)arg1 contentMediaIdentifier:(id)arg2 ownerIdentifier:(id)arg3 account:(id)arg4 configuration:(id)arg5 observers:(id)arg6 initialScribeContext:(id)arg7 baseScribeItem:(id)arg8 promotedContent:(id)arg9;
+ (id)sessionWithBroadcast:(id)arg1 cardDataSource:(id)arg2 account:(id)arg3 configuration:(id)arg4 observers:(id)arg5 initialScribeContext:(id)arg6;
+ (id)sessionWithSource:(id)arg1 account:(id)arg2 configuration:(id)arg3 observers:(id)arg4 initialScribeContext:(id)arg5;

@end

