//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1AudioPlayerView, TFNTwitterAudioTrack;

@protocol T1AudioPlayerViewDelegate <NSObject>
- (void)audioPlayerView:(T1AudioPlayerView *)arg1 didRequestAction:(long long)arg2;
- (void)audioPlayerView:(T1AudioPlayerView *)arg1 didChangeScrubbingState:(long long)arg2;
- (long long)audioPlayerView:(T1AudioPlayerView *)arg1 appInstallStatusForTrack:(TFNTwitterAudioTrack *)arg2;
@end

