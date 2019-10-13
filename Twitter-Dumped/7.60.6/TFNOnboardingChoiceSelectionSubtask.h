//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtask.h>

@class NSArray, TFNOnboardingNavigationLink, TFNOnboardingNavigationLinkOptions, TFNOnboardingRichText;

@interface TFNOnboardingChoiceSelectionSubtask : TFNOnboardingSubtask
{
    NSArray *_choices;
    TFNOnboardingRichText *_primaryText;
    TFNOnboardingRichText *_secondaryText;
    long long _selectionType;
    TFNOnboardingNavigationLink *_nextLink;
    TFNOnboardingNavigationLink *_skipLink;
    TFNOnboardingNavigationLinkOptions *_nextLinkOptions;
}

+ (long long)version;
+ (id)typeNames;
@property(readonly, nonatomic) TFNOnboardingNavigationLinkOptions *nextLinkOptions; // @synthesize nextLinkOptions=_nextLinkOptions;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *skipLink; // @synthesize skipLink=_skipLink;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) long long selectionType; // @synthesize selectionType=_selectionType;
@property(readonly, nonatomic) TFNOnboardingRichText *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) TFNOnboardingRichText *primaryText; // @synthesize primaryText=_primaryText;
@property(readonly, nonatomic) NSArray *choices; // @synthesize choices=_choices;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end

