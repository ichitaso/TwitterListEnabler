//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVMutableAudioMix, AVMutableComposition, AVMutableVideoComposition, TFNNewsCameraVideoCompositorContext;

@interface TFNNewsCameraVideoCompositorComposition : NSObject
{
    AVMutableComposition *_composition;
    AVMutableVideoComposition *_videoComposition;
    AVMutableAudioMix *_audioMix;
    TFNNewsCameraVideoCompositorContext *_context;
}

@property(retain, nonatomic) TFNNewsCameraVideoCompositorContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AVMutableAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(retain, nonatomic) AVMutableVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVMutableComposition *composition; // @synthesize composition=_composition;
- (void).cxx_destruct;
- (_Bool)_tfn_buildComposition:(id)arg1 videoComposition:(id)arg2;
- (void)_tfn_createComposition;
- (id)initWithContext:(id)arg1;

@end

