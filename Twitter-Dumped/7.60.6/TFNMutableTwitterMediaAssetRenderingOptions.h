//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterMediaAssetRenderingOptions.h>

@class NSObject, TIPImagePipeline;
@protocol NSCoding><NSCopying;

@interface TFNMutableTwitterMediaAssetRenderingOptions : TFNTwitterMediaAssetRenderingOptions
{
}

@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @dynamic progressHandler;
@property(nonatomic) _Bool allowsLosslessCompression; // @dynamic allowsLosslessCompression;
@property(nonatomic) long long maxDimension; // @dynamic maxDimension;
@property(copy, nonatomic) NSObject<NSCoding><NSCopying> *editParameters; // @dynamic editParameters;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @dynamic imagePipeline;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

