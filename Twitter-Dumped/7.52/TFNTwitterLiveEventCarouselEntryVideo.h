//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterLiveEventCarouselEntry.h>

@class TFNTwitterLiveEventCarouselEntrySocialProof, TFNTwitterLiveEventSlate, TFNTwitterStatus;

@interface TFNTwitterLiveEventCarouselEntryVideo : TFNTwitterLiveEventCarouselEntry
{
    TFNTwitterStatus *_status;
    TFNTwitterLiveEventSlate *_fallbackSlate;
    TFNTwitterLiveEventCarouselEntrySocialProof *_socialProof;
}

@property(readonly, copy, nonatomic) TFNTwitterLiveEventCarouselEntrySocialProof *socialProof; // @synthesize socialProof=_socialProof;
@property(readonly, copy, nonatomic) TFNTwitterLiveEventSlate *fallbackSlate; // @synthesize fallbackSlate=_fallbackSlate;
@property(readonly, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)isEqualToCarouselEntryVideo:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEntryID:(id)arg1 selected:(_Bool)arg2 status:(id)arg3 fallbackSlate:(id)arg4 socialProof:(id)arg5;
- (_Bool)isEligibleForDocking;

@end

