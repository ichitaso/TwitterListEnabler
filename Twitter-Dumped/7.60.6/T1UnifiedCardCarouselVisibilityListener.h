//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNCellVisibilityListener-Protocol.h>

@class NSString, T1UnifiedCardCarouselView;

@interface T1UnifiedCardCarouselVisibilityListener : NSObject <TFNCellVisibilityListener>
{
    _Bool _displayOnly;
    _Bool _alreadyNotifiedOfDisplay;
    T1UnifiedCardCarouselView *_carousel;
    double _animationDelay;
    double _scrollAnimationPageTime;
    double _animationVisibilityThreshold;
}

@property(nonatomic) _Bool alreadyNotifiedOfDisplay; // @synthesize alreadyNotifiedOfDisplay=_alreadyNotifiedOfDisplay;
@property(readonly, nonatomic) _Bool displayOnly; // @synthesize displayOnly=_displayOnly;
@property(readonly, nonatomic) double animationVisibilityThreshold; // @synthesize animationVisibilityThreshold=_animationVisibilityThreshold;
@property(readonly, nonatomic) double scrollAnimationPageTime; // @synthesize scrollAnimationPageTime=_scrollAnimationPageTime;
@property(readonly, nonatomic) double animationDelay; // @synthesize animationDelay=_animationDelay;
@property(nonatomic) __weak T1UnifiedCardCarouselView *carousel; // @synthesize carousel=_carousel;
- (void).cxx_destruct;
- (id)_t1_carouselForCell:(id)arg1;
- (void)cellDidEndDisplayingFromViewport:(id)arg1 inDataViewController:(id)arg2;
- (void)cellDidDisplay:(id)arg1 inDataViewController:(id)arg2 withVisibilityPercentage:(double)arg3 visibilityState:(unsigned long long)arg4;
- (id)init;
- (id)initAsDisplayNotifier;
- (id)initWithDelay:(double)arg1 scrollPageTime:(double)arg2 threshold:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

