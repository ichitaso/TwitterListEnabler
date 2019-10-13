//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtask.h>

@class NSString, TFNOnboardingNavigationLink;

@interface TFNOnboardingSignUpSubtask : TFNOnboardingSubtask
{
    _Bool _useDevicePrefill;
    NSString *_primaryText;
    NSString *_secondaryText;
    NSString *_nameHint;
    NSString *_phoneHint;
    NSString *_emailHint;
    NSString *_phoneOrEmailHint;
    NSString *_birthdayHint;
    NSString *_usePhoneText;
    NSString *_useEmailText;
    long long _birthdayType;
    NSString *_birthdayExplanation;
    NSString *_jsInstrumentationURL;
    TFNOnboardingNavigationLink *_nextLink;
    TFNOnboardingNavigationLink *_emailNextLink;
}

+ (long long)version;
+ (id)birthdaySubtaskDataKey;
+ (id)emailSubtaskDataKey;
+ (id)phoneSubtaskDataKey;
+ (id)nameSubtaskDataKey;
+ (id)clearPhoneNavigationContextAction;
+ (id)clearNavigationContextAction;
+ (id)selectBirthdayNavigationContextAction;
+ (id)selectEmailNavigationContextAction;
+ (id)selectPhoneNavigationContextAction;
+ (id)selectNameNavigationContextAction;
+ (id)typeNames;
@property(readonly, nonatomic) _Bool useDevicePrefill; // @synthesize useDevicePrefill=_useDevicePrefill;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *emailNextLink; // @synthesize emailNextLink=_emailNextLink;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *nextLink; // @synthesize nextLink=_nextLink;
@property(readonly, nonatomic) NSString *jsInstrumentationURL; // @synthesize jsInstrumentationURL=_jsInstrumentationURL;
@property(readonly, nonatomic) NSString *birthdayExplanation; // @synthesize birthdayExplanation=_birthdayExplanation;
@property(readonly, nonatomic) long long birthdayType; // @synthesize birthdayType=_birthdayType;
@property(readonly, nonatomic) NSString *useEmailText; // @synthesize useEmailText=_useEmailText;
@property(readonly, nonatomic) NSString *usePhoneText; // @synthesize usePhoneText=_usePhoneText;
@property(readonly, nonatomic) NSString *birthdayHint; // @synthesize birthdayHint=_birthdayHint;
@property(readonly, nonatomic) NSString *phoneOrEmailHint; // @synthesize phoneOrEmailHint=_phoneOrEmailHint;
@property(readonly, nonatomic) NSString *emailHint; // @synthesize emailHint=_emailHint;
@property(readonly, nonatomic) NSString *phoneHint; // @synthesize phoneHint=_phoneHint;
@property(readonly, nonatomic) NSString *nameHint; // @synthesize nameHint=_nameHint;
@property(readonly, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end

