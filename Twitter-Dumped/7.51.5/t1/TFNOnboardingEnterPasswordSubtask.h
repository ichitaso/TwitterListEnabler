//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtask.h>

@class NSString, TFNOnboardingNavigationLink, TFNOnboardingRichText;

@interface TFNOnboardingEnterPasswordSubtask : TFNOnboardingSubtask
{
    NSString *_name;
    NSString *_email;
    NSString *_username;
    TFNOnboardingRichText *_primaryText;
    TFNOnboardingRichText *_secondaryText;
    NSString *_hint;
    TFNOnboardingNavigationLink *_nextLink;
    TFNOnboardingNavigationLink *_skipLink;
}

+ (id)typeNames;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *skipLink; // @synthesize skipLink=_skipLink;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(readonly, nonatomic) TFNOnboardingRichText *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) TFNOnboardingRichText *primaryText; // @synthesize primaryText=_primaryText;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 error:(id *)arg5;

@end

