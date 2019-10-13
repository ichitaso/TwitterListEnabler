//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterCardDataSource-Protocol.h>
#import <T1Twitter/TFNTwitterCardDataSourceObject-Protocol.h>

@class NSDictionary, NSNumber, NSString, T1PlayerSessionProducer, TAVAnalyticsMediaIdentifier, TFNTwitterCardData, TFNTwitterMediaInfo, TFNTwitterPromotedContent, TFNTwitterStatus;
@protocol TFNTwitterCardDataSource, TFNTwitterCardDataSourceObject;

@interface _TtC9T1TwitterP33_B6155113CE23FAFE72FAFA561E8FFCF114CardDataSource : NSObject <TFNTwitterCardDataSource, TFNTwitterCardDataSourceObject>
{
    // Error parsing type: , name: scribableItem
    // Error parsing type: , name: cardData
    // Error parsing type: , name: cardEvent
    // Error parsing type: , name: promotedContent
    // Error parsing type: , name: senderID
    // Error parsing type: , name: senderDisplayUsername
    // Error parsing type: , name: senderDisplayFullName
    // Error parsing type: , name: isPlayable
    // Error parsing type: , name: fromUserID
    // Error parsing type: , name: mediaPlaylistUrl
    // Error parsing type: , name: primaryMediaInfo
    // Error parsing type: , name: isMediaEntityVideo
    // Error parsing type: , name: isVine
    // Error parsing type: , name: isGIF
    // Error parsing type: , name: isAdsVideoCard
    // Error parsing type: , name: isAmplifyCardVideo
    // Error parsing type: , name: isThreeSixtyVideo
    // Error parsing type: , name: scribeParameters
    // Error parsing type: , name: mediaScribeContentID
    // Error parsing type: , name: allowDynamicAd
    // Error parsing type: , name: playerStatusID
    // Error parsing type: , name: playerStatus
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) TFNTwitterStatus *playerStatus; // @synthesize playerStatus;
@property(nonatomic, readonly) NSNumber *playerStatusID; // @synthesize playerStatusID;
@property(nonatomic, readonly) _Bool allowDynamicAd; // @synthesize allowDynamicAd;
@property(nonatomic, readonly) id <TFNTwitterCardDataSource> cardDataSource;
@property(nonatomic, readonly) TAVAnalyticsMediaIdentifier *contentMediaIdentifier;
@property(nonatomic, readonly) NSString *mediaScribeContentID;
@property(nonatomic, readonly) NSNumber *mediaScribePublisherID;
@property(nonatomic, readonly) NSDictionary *scribeParameters;
@property(nonatomic, readonly) _Bool isYouTubeCard;
@property(nonatomic, readonly) _Bool isBroadcast;
@property(nonatomic, readonly) _Bool isLiveEvent;
@property(nonatomic, readonly) _Bool isThreeSixtyVideo; // @synthesize isThreeSixtyVideo;
@property(nonatomic, readonly) _Bool isAmplifyCardVideo; // @synthesize isAmplifyCardVideo;
@property(nonatomic, readonly) _Bool isPeriscope;
@property(nonatomic, readonly) _Bool isAdsVideoCard; // @synthesize isAdsVideoCard;
@property(nonatomic, readonly) _Bool isGIF; // @synthesize isGIF;
@property(nonatomic, readonly) _Bool isVine; // @synthesize isVine;
@property(nonatomic, readonly) _Bool isMediaEntityVideo; // @synthesize isMediaEntityVideo;
@property(nonatomic, readonly) TFNTwitterMediaInfo *primaryMediaInfo; // @synthesize primaryMediaInfo;
@property(nonatomic, readonly) NSString *mediaPlaylistUrl;
@property(nonatomic, readonly) long long fromUserID; // @synthesize fromUserID;
@property(nonatomic, readonly) _Bool isPlayable; // @synthesize isPlayable;
@property(nonatomic, readonly) T1PlayerSessionProducer *playerSessionProducer;
@property(nonatomic, readonly) NSString *senderDisplayFullName;
@property(nonatomic, readonly) NSString *senderDisplayUsername;
@property(nonatomic, readonly) long long senderID; // @synthesize senderID;
@property(nonatomic, readonly) NSNumber *sourceID;
@property(nonatomic, readonly) NSDictionary *scribeItem;
@property(nonatomic, readonly) NSString *scribeItemImpressionID;
- (id)entityForURL:(id)arg1;
@property(nonatomic, readonly) TFNTwitterPromotedContent *promotedContent; // @synthesize promotedContent;
@property(nonatomic, readonly) id <TFNTwitterCardDataSourceObject> sourceObject;
@property(nonatomic, readonly) NSDictionary *cardEvent;
@property(nonatomic, readonly) TFNTwitterCardData *cardData; // @synthesize cardData;

@end

