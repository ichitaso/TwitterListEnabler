//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1InlineMediaView, UIEvent, UILongPressGestureRecognizer;
@protocol TAVPlayerView;

@protocol T1InlineMediaViewDelegate <NSObject>
- (_Bool)inlineMediaViewShouldShowVideoDetailsInOverlay:(T1InlineMediaView *)arg1;
- (void)inlineMediaView:(T1InlineMediaView *)arg1 wasLongPressedWithGestureRecognizer:(UILongPressGestureRecognizer *)arg2;
- (void)inlineMediaViewWasTapped:(T1InlineMediaView *)arg1 withEvent:(UIEvent *)arg2;

@optional
- (void)mediaView:(T1InlineMediaView *)arg1 didDetachPlayerView:(id <TAVPlayerView>)arg2;
- (void)mediaView:(T1InlineMediaView *)arg1 willPresentPlayerView:(id <TAVPlayerView>)arg2;
@end

