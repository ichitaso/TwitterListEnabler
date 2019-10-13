//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSDictionary, NSNumber, NSString, TAVAnalyticsMediaIdentifier, TFNTwitterMediaInfo, TFNTwitterPromotedContent, TFNTwitterStatus;
@protocol TFNTwitterCardDataSource;

@protocol TFNTwitterAVPlayerSessionSource <TFSTwitterScribableItem>
@property(nonatomic, readonly) TAVAnalyticsMediaIdentifier *contentMediaIdentifier;
@property(nonatomic, readonly) TFNTwitterPromotedContent *promotedContent;
@property(nonatomic, readonly) TFNTwitterStatus *playerStatus;
@property(nonatomic, readonly) NSNumber *playerStatusID;
@property(nonatomic, readonly) _Bool allowDynamicAd;
@property(nonatomic, readonly) id <TFNTwitterCardDataSource> cardDataSource;
@property(nonatomic, readonly) NSString *mediaScribeContentID;
@property(nonatomic, readonly) NSNumber *mediaScribePublisherID;
@property(nonatomic, readonly) NSDictionary *scribeParameters;
@property(nonatomic, readonly) _Bool isYouTubeCard;
@property(nonatomic, readonly) _Bool isPlayable;
@property(nonatomic, readonly) _Bool isBroadcast;
@property(nonatomic, readonly) _Bool isLiveEvent;
@property(nonatomic, readonly) _Bool isThreeSixtyVideo;
@property(nonatomic, readonly) _Bool isAmplifyCardVideo;
@property(nonatomic, readonly) _Bool isPeriscope;
@property(nonatomic, readonly) _Bool isAdsVideoCard;
@property(nonatomic, readonly) _Bool isGIF;
@property(nonatomic, readonly) _Bool isVine;
@property(nonatomic, readonly) _Bool isMediaEntityVideo;
@property(nonatomic, readonly) TFNTwitterMediaInfo *primaryMediaInfo;
@property(nonatomic, readonly) NSString *mediaPlaylistUrl;
@property(nonatomic, readonly) long long fromUserID;
@end

