//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

@class NSDate, NSString, TFNTwitterMediaAssetPackedSegmentedUploadContext;

@interface TFNTwitterMediaAssetPackedSegmentedUploadPerformanceScribeOperation : TFSDependentConcurrentOperation
{
    unsigned long long _action;
    NSString *_mediaID;
    TFNTwitterMediaAssetPackedSegmentedUploadContext *_context;
    unsigned long long _process;
    NSDate *_startDate;
}

@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) unsigned long long process; // @synthesize process=_process;
@property(readonly, nonatomic) TFNTwitterMediaAssetPackedSegmentedUploadContext *context; // @synthesize context=_context;
@property(copy) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property unsigned long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)_tfn_main_run;
- (void)run;
- (id)initWithContext:(id)arg1 process:(unsigned long long)arg2;

@end

