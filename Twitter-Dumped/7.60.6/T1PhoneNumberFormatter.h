//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSString;

@interface T1PhoneNumberFormatter : NSFormatter
{
    NSString *_countryCode;
}

+ (id)formatForDisplay:(id)arg1 normalized:(_Bool)arg2 countryCode:(id)arg3;
+ (id)_cleanedPhoneNumber:(id)arg1;
+ (_Bool)_validateNumber:(id)arg1 countryCode:(id)arg2;
+ (id)_formatNumber:(id)arg1 countryCode:(id)arg2;
+ (id)_cleanAndFormatNumber:(id)arg1 countryCode:(id)arg2;
+ (id)phoneNumberFormatterWithCountryCode:(id)arg1;
+ (id)phoneNumberFormatterWithCurrentCountryCode;
+ (id)currentCountryCode;
+ (id)countryToCallingCodeMapping;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (_Bool)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1 countryCode:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (id)formatForDisplay:(id)arg1 normalized:(_Bool)arg2;
- (id)initWithCountryCode:(id)arg1;

@end

