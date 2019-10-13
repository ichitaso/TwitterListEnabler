//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSArray, NSString;

@interface TFNTwitterDynamicVideoAds : NSObject <TFSModel>
{
    NSArray *_videoAdsArray;
    NSArray *_passthroughArray;
}

+ (id)dynamicVideoAdsWithJSONData:(id)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) NSArray *passthroughArray; // @synthesize passthroughArray=_passthroughArray;
@property(readonly, nonatomic) NSArray *videoAdsArray; // @synthesize videoAdsArray=_videoAdsArray;
- (void).cxx_destruct;
- (id)initWithArray:(id)arg1 passthroughArray:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

