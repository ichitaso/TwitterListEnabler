//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@class NSNumber, TFNDirectMessageModel, TFNDirectMessageUserUpdatesResponse;

@interface TFNDirectMessageProcessUserUpdatesResponseOperation : TFSConcurrentOperation
{
    TFNDirectMessageUserUpdatesResponse *_response;
    TFNDirectMessageModel *_model;
    NSNumber *_lowQualityFilterState;
}

@property(readonly, nonatomic) NSNumber *lowQualityFilterState; // @synthesize lowQualityFilterState=_lowQualityFilterState;
@property(readonly, nonatomic) TFNDirectMessageModel *model; // @synthesize model=_model;
@property(retain) TFNDirectMessageUserUpdatesResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (void)private_processIncrementalUpdatesResponse:(id)arg1 model:(id)arg2;
- (void)private_processInboxResetResponse:(id)arg1 model:(id)arg2;
- (void)run;
- (id)initWithModel:(id)arg1 updatedLowQualityFilterState:(id)arg2;
- (id)init;

@end

