//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtask.h>

@class TFNOnboardingNavigationLink;

@interface TFNOnboardingFetchTemporaryPasswordSubtask : TFNOnboardingSubtask
{
    _Bool _shouldGenerate;
    TFNOnboardingNavigationLink *_nextLink;
}

+ (id)typeNames;
@property(readonly, nonatomic) _Bool shouldGenerate; // @synthesize shouldGenerate=_shouldGenerate;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end

