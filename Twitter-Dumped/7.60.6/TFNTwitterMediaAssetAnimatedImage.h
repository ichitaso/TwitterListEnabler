//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterMediaAssetALAsset.h>

#import <T1Twitter/NSItemProviderReading-Protocol.h>

@class NSData, NSString;

@interface TFNTwitterMediaAssetAnimatedImage : TFNTwitterMediaAssetALAsset <NSItemProviderReading>
{
    NSData *_sourceData;
    struct CGSize _sourceImageDimensions;
}

+ (id)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
@property(nonatomic) struct CGSize sourceImageDimensions; // @synthesize sourceImageDimensions=_sourceImageDimensions;
@property(retain, nonatomic) NSData *sourceData; // @synthesize sourceData=_sourceData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_didLoadBackupData:(id)arg1;
- (void)_saveLocalBackupToFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderFinalDataWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)estimatedPreviewSizeThatFits:(struct CGSize)arg1;
- (unsigned long long)attachmentType;
- (struct CGSize)assetDimensions;
- (void)originalMediaDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)renderAnimatedGIFImageWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithData:(id)arg1 imageDimensions:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

