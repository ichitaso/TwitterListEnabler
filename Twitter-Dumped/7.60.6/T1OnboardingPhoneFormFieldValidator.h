//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNAPIFormFieldValidator.h>

@class NSString;

@interface T1OnboardingPhoneFormFieldValidator : TFNAPIFormFieldValidator
{
    NSString *_countryCode;
}

+ (CDUnknownBlockType)validationBlockWithCountryCode:(id)arg1;
- (void).cxx_destruct;
- (id)remoteValidityCommandWithInput:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)remoteValidityWithResponseSuccess:(_Bool)arg1 object:(id)arg2 error:(id)arg3;
- (id)localValidityWithFormField:(id)arg1;

@end

