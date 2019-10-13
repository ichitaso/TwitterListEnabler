//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, TIPImagePipeline, UIImage;
@protocol TIPImageFetchRequest;

@protocol T1SpotlightUserActivityInfoProvider <NSObject>
- (TIPImagePipeline *)activityImagePipeline;
- (NSArray *)activityKeywords;
- (UIImage *)activityImage;
- (id <TIPImageFetchRequest>)activityImageFetchRequest;
- (NSString *)activityDetailDescription;
- (NSString *)activityTitle;
- (NSURL *)activityDeeplinkURL;
- (_Bool)activityIsPublic;
- (NSString *)activityDomainIdentifier;
@end

