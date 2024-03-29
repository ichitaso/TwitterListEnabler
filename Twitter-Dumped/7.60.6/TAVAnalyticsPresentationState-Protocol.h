//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TAVPresentationState-Protocol.h>

@class TAVAnalyticsPresentationScribeParameters, TAVScribeContext;

@protocol TAVAnalyticsPresentationState <TAVPresentationState>
@property(readonly, nonatomic) long long gravity;
@property(readonly, nonatomic) double screenScale;
@property(readonly, nonatomic) struct CGSize windowSize;
@property(readonly, nonatomic) struct CGSize videoSize;
@property(readonly, nonatomic) struct CGSize playerViewSize;
@property(readonly, nonatomic) double visibilityRatio;
@property(readonly, copy, nonatomic) TAVAnalyticsPresentationScribeParameters *scribeParameters;
@property(readonly, copy, nonatomic) TAVScribeContext *scribeContext;
@property(readonly, nonatomic) _Bool shouldFirePlayFromTapBillableEvent;
@property(readonly, nonatomic) _Bool isPreview;
@property(readonly, nonatomic) _Bool isFullscreen;
@end

