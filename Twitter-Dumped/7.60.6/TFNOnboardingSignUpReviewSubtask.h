//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtask.h>

@class NSArray, NSDate, NSString, TFNOnboardingNavigationLink, TFNOnboardingRichText, TFNOnboardingSubtaskDataReference;

@interface TFNOnboardingSignUpReviewSubtask : TFNOnboardingSubtask
{
    NSString *_primaryText;
    NSString *_secondaryText;
    NSString *_nameString;
    TFNOnboardingSubtaskDataReference *_nameSubtaskDataReference;
    NSString *_phoneString;
    TFNOnboardingSubtaskDataReference *_phoneSubtaskDataReference;
    NSString *_emailString;
    TFNOnboardingSubtaskDataReference *_emailSubtaskDataReference;
    NSDate *_birthdayDate;
    TFNOnboardingSubtaskDataReference *_birthdaySubtaskDataReference;
    NSArray *_noticeTextQuantityPairs;
    NSArray *_noticeSubtaskDataReferences;
    TFNOnboardingNavigationLink *_nameEditLink;
    TFNOnboardingNavigationLink *_phoneEditLink;
    TFNOnboardingNavigationLink *_emailEditLink;
    TFNOnboardingNavigationLink *_birthdayEditLink;
    long long _birthdayType;
    NSDate *_birthdayRequirement;
    TFNOnboardingNavigationLink *_invalidBirthdayLink;
    TFNOnboardingRichText *_signInText;
    TFNOnboardingNavigationLink *_emailNextLink;
    TFNOnboardingNavigationLink *_phoneNextLink;
    TFNOnboardingRichText *_detailText;
}

+ (long long)version;
+ (id)phoneSubtaskDataKey;
+ (id)typeNames;
@property(readonly, nonatomic) TFNOnboardingRichText *detailText; // @synthesize detailText=_detailText;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *phoneNextLink; // @synthesize phoneNextLink=_phoneNextLink;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *emailNextLink; // @synthesize emailNextLink=_emailNextLink;
@property(readonly, nonatomic) TFNOnboardingRichText *signInText; // @synthesize signInText=_signInText;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *invalidBirthdayLink; // @synthesize invalidBirthdayLink=_invalidBirthdayLink;
@property(readonly, nonatomic) NSDate *birthdayRequirement; // @synthesize birthdayRequirement=_birthdayRequirement;
@property(readonly, nonatomic) long long birthdayType; // @synthesize birthdayType=_birthdayType;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *birthdayEditLink; // @synthesize birthdayEditLink=_birthdayEditLink;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *emailEditLink; // @synthesize emailEditLink=_emailEditLink;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *phoneEditLink; // @synthesize phoneEditLink=_phoneEditLink;
@property(readonly, nonatomic) TFNOnboardingNavigationLink *nameEditLink; // @synthesize nameEditLink=_nameEditLink;
@property(readonly, nonatomic) NSArray *noticeSubtaskDataReferences; // @synthesize noticeSubtaskDataReferences=_noticeSubtaskDataReferences;
@property(readonly, nonatomic) NSArray *noticeTextQuantityPairs; // @synthesize noticeTextQuantityPairs=_noticeTextQuantityPairs;
@property(readonly, nonatomic) TFNOnboardingSubtaskDataReference *birthdaySubtaskDataReference; // @synthesize birthdaySubtaskDataReference=_birthdaySubtaskDataReference;
@property(readonly, nonatomic) NSDate *birthdayDate; // @synthesize birthdayDate=_birthdayDate;
@property(readonly, nonatomic) TFNOnboardingSubtaskDataReference *emailSubtaskDataReference; // @synthesize emailSubtaskDataReference=_emailSubtaskDataReference;
@property(readonly, nonatomic) NSString *emailString; // @synthesize emailString=_emailString;
@property(readonly, nonatomic) TFNOnboardingSubtaskDataReference *phoneSubtaskDataReference; // @synthesize phoneSubtaskDataReference=_phoneSubtaskDataReference;
@property(readonly, nonatomic) NSString *phoneString; // @synthesize phoneString=_phoneString;
@property(readonly, nonatomic) TFNOnboardingSubtaskDataReference *nameSubtaskDataReference; // @synthesize nameSubtaskDataReference=_nameSubtaskDataReference;
@property(readonly, nonatomic) NSString *nameString; // @synthesize nameString=_nameString;
@property(readonly, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end

