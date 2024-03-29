//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/_TtC9T1Twitter28GuideHeroBackgroundMediaView.h>

#import <T1Twitter/T1Autoplayable-Protocol.h>

@class UIImage, UIView;
@protocol TFNTwitterAVPlayerSessionSource;

@interface _TtC9T1Twitter28GuideHeroBackgroundMediaView (T1Twitter) <T1Autoplayable>
- (_Bool)isEligibleForAutoplay;
- (void)willResignAsActiveAutoplayableWithManager:(id)arg1;
- (void)didBecomeActiveAutoplayableWithManager:(id)arg1;
@property(nonatomic, readonly) UIView *autoplayableView;
@property(nonatomic, readonly) UIImage *playerPreviewImage;
@property(nonatomic, readonly) UIView *playerContainerView;
@property(nonatomic, readonly) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
- (id)autoplayable;
- (struct CGRect)autoplayableFrameIn:(id)arg1;
@end

