//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNOnboardingSubtaskDataReference;

@interface TFNOnboardingMediaSource : NSObject
{
    TFNOnboardingSubtaskDataReference *_mediaDataReference;
    long long _style;
}

@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) TFNOnboardingSubtaskDataReference *mediaDataReference; // @synthesize mediaDataReference=_mediaDataReference;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

