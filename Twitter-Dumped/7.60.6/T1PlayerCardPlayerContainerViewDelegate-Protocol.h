//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1InlineMediaView, T1PlayerCardPlayerContainerView, UIEvent, UIImage;

@protocol T1PlayerCardPlayerContainerViewDelegate <NSObject>
- (void)cardPlayerContainerView:(T1PlayerCardPlayerContainerView *)arg1 didTapPlayButtonOverlayWithEvent:(UIEvent *)arg2;
- (_Bool)cardPlayerContainerViewCanPlayStreamInline:(T1PlayerCardPlayerContainerView *)arg1;

@optional
- (void)presentFullscreenPlayerFromInlineMediaView:(T1InlineMediaView *)arg1 withPreviewImage:(UIImage *)arg2;
@end

