//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSOperationDependencyRequirement.h>

@class TFNTwitterMediaAssetPackedSegmentedUploadPerformanceScribeValue;

@interface TFNTwitterMediaAssetPackedSegmentedUploadPerformanceScribeValueDependencyRequirement : TFSOperationDependencyRequirement
{
    CDUnknownBlockType _updateBlock;
    TFNTwitterMediaAssetPackedSegmentedUploadPerformanceScribeValue *_scribeValue;
}

@property(readonly, nonatomic) TFNTwitterMediaAssetPackedSegmentedUploadPerformanceScribeValue *scribeValue; // @synthesize scribeValue=_scribeValue;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
- (void).cxx_destruct;
- (_Bool)shouldRunDependentOperation:(id)arg1 withDependency:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

