//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TIPImageFetchRequest-Protocol.h>

@class NSDictionary, NSString, NSURL;
@protocol TIPImageFetchTransformer;

@interface TFNTwitterMultiResolutionImageSourceFetchRequest : NSObject <TIPImageFetchRequest>
{
    NSURL *_imageURL;
    NSString *_imageIdentifier;
    long long _targetContentMode;
    struct CGSize _targetDimensions;
}

@property(readonly, nonatomic) long long targetContentMode; // @synthesize targetContentMode=_targetContentMode;
@property(readonly, nonatomic) struct CGSize targetDimensions; // @synthesize targetDimensions=_targetDimensions;
@property(readonly, copy, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)initWithURLString:(id)arg1 identifier:(id)arg2 targetDimensions:(struct CGSize)arg3 targetContentMode:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSDictionary *decoderConfigMap;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) CDUnknownBlockType imageRequestHydrationBlock;
@property(readonly, nonatomic) long long loadingSources;
@property(readonly, nonatomic) long long options;
@property(readonly, copy, nonatomic) NSDictionary *progressiveLoadingPolicies;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double timeToLive;
@property(readonly, nonatomic) id <TIPImageFetchTransformer> transformer;

@end

