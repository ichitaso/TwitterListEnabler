//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class NSArray, TFNTwitterUnifiedCardAppStoreData;

@interface TFNTwitterUnifiedCard : NSObject <NSCopying>
{
    NSArray *_components;
    TFNTwitterUnifiedCardAppStoreData *_appStoreData;
    CDUnknownBlockType _scribeCustomization;
}

+ (id)_tfn_matchJSONIds:(id)arg1 toComponentModels:(id)arg2;
+ (id)_tfn_mediaModelsFromJSONDict:(id)arg1;
+ (id)_tfn_destinationModelsFromJSONDict:(id)arg1 mediaEntitiesDict:(id)arg2 appStoreData:(id)arg3;
@property(readonly, copy, nonatomic) CDUnknownBlockType scribeCustomization; // @synthesize scribeCustomization=_scribeCustomization;
@property(readonly, nonatomic) TFNTwitterUnifiedCardAppStoreData *appStoreData; // @synthesize appStoreData=_appStoreData;
@property(readonly, copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)convertingCarouselsToSingleMedia;
- (id)convertingCarouselsToUseFullBleed:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasFullBleedComponent;
- (id)_tfn_componentModelsFromJSONDict:(id)arg1 destinationsDict:(id)arg2 mediaEntitiesDict:(id)arg3 appStoreData:(id)arg4 promotedContent:(id)arg5 usersDict:(id)arg6;
- (id)withPromotedContent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 promotedContent:(id)arg2;
- (id)initWithComponents:(id)arg1 promotedContent:(id)arg2 appStoreData:(id)arg3 scribeCustomization:(CDUnknownBlockType)arg4;
- (id)videoSourceComponent;
- (_Bool)containsVideo;

@end

