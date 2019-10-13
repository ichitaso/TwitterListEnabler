//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNTwitterDynamicVideoAdViewModel : NSObject
{
    double _countdownValue;
    NSString *_advertiserName;
    unsigned long long _pillViewAdType;
    NSString *_displayText;
}

@property(retain, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(readonly, nonatomic) unsigned long long pillViewAdType; // @synthesize pillViewAdType=_pillViewAdType;
@property(readonly, nonatomic) NSString *advertiserName; // @synthesize advertiserName=_advertiserName;
@property(nonatomic) double countdownValue; // @synthesize countdownValue=_countdownValue;
- (void).cxx_destruct;
- (id)getDisplayTextFromAutoplayAdCountdownValue:(double)arg1;
@property(readonly, nonatomic) long long numberOfLines;
- (id)initWithAdContext:(id)arg1;

@end

