//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, T1EmptyContentMessage, TFSTwitterScribeContext, TNLParameterCollection;

@interface T1URTGenericViewControllerFactoryConfiguration : NSObject
{
    // Error parsing type: , name: path
    // Error parsing type: , name: parameters
    // Error parsing type: , name: title
    // Error parsing type: , name: subtitle
    // Error parsing type: , name: emptyContentMessage
    // Error parsing type: , name: defaultCursorLoadingFailedMessage
    // Error parsing type: , name: dashContentItemType
    // Error parsing type: , name: cacheID
    // Error parsing type: , name: scribeContext
    // Error parsing type: , name: renderPerformanceEventName
    // Error parsing type: , name: pullToLoadTopEnabled
    // Error parsing type: , name: programmaticLoadTopRevealsControl
    // Error parsing type: , name: quotedStatusID
    // Error parsing type: , name: contentSuppressionSupport
    // Error parsing type: , name: actionExecutor
}

+ (id)placePageConfigurationForPlaceID:(id)arg1 placeName:(id)arg2;
+ (id)draftTweetPreviewsTimelineConfigurationForParameters:(id)arg1 account:(id)arg2;
+ (id)listConfigurationForListID:(long long)arg1 title:(id)arg2 account:(id)arg3;
+ (id)quoteTweetConfigurationForQuotedStatusID:(long long)arg1 geoDataProvider:(id)arg2;
+ (id)searchConfigurationForParameters:(id)arg1 resultFilter:(long long)arg2 tweetSearchMode:(long long)arg3 title:(id)arg4 emptyContentMessage:(id)arg5 scribeContext:(id)arg6 geoDataProvider:(id)arg7;
- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) NSString *renderPerformanceEventName;
@property(nonatomic, readonly) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext;
@property(nonatomic, readonly) NSString *cacheID;
@property(nonatomic, readonly) long long dashContentItemType; // @synthesize dashContentItemType;
@property(nonatomic, readonly) NSString *defaultCursorLoadingFailedMessage;
@property(nonatomic, readonly) T1EmptyContentMessage *emptyContentMessage; // @synthesize emptyContentMessage;
@property(nonatomic, readonly) NSString *subtitle;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) TNLParameterCollection *parameters; // @synthesize parameters;
@property(nonatomic, readonly) NSString *path;

@end

