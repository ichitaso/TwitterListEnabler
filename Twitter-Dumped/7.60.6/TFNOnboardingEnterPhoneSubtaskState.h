//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNOnboardingSubtaskState.h>

@class NSString;

@interface TFNOnboardingEnterPhoneSubtaskState : TFNOnboardingSubtaskState
{
    _Bool _discoverabilityValue;
    NSString *_phoneNumber;
    NSString *_countryCode;
}

@property(nonatomic) _Bool discoverabilityValue; // @synthesize discoverabilityValue=_discoverabilityValue;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (void)addStateToJSONDictionary:(id)arg1;

@end

