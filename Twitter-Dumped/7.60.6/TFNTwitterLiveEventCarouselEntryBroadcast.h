//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterLiveEventCarouselEntry.h>

@class TFNTwitterLiveEventCarouselEntrySocialProof, TFNTwitterLiveEventSlate, TFNTwitterUser, TFSTwitterBroadcast;

@interface TFNTwitterLiveEventCarouselEntryBroadcast : TFNTwitterLiveEventCarouselEntry
{
    TFSTwitterBroadcast *_broadcast;
    TFNTwitterLiveEventSlate *_fallbackSlate;
    TFNTwitterLiveEventCarouselEntrySocialProof *_socialProof;
    TFNTwitterUser *_broadcasterTwitterUser;
}

@property(readonly, nonatomic) TFNTwitterUser *broadcasterTwitterUser; // @synthesize broadcasterTwitterUser=_broadcasterTwitterUser;
@property(readonly, copy, nonatomic) TFNTwitterLiveEventCarouselEntrySocialProof *socialProof; // @synthesize socialProof=_socialProof;
@property(readonly, copy, nonatomic) TFNTwitterLiveEventSlate *fallbackSlate; // @synthesize fallbackSlate=_fallbackSlate;
@property(readonly, nonatomic) TFSTwitterBroadcast *broadcast; // @synthesize broadcast=_broadcast;
- (void).cxx_destruct;
- (_Bool)isEqualToCarouselEntryBroadcast:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEntryID:(id)arg1 selected:(_Bool)arg2 broadcast:(id)arg3 fallbackSlate:(id)arg4 socialProof:(id)arg5 broadcasterTwitterUser:(id)arg6;
- (_Bool)isEligibleForDocking;

@end

