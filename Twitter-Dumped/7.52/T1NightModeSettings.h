//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface T1NightModeSettings : NSObject
{
}

+ (void)applyDefaultDarkColorPaletteForCurrentDisplayType;
+ (void)transitionToNightMode:(_Bool)arg1 animated:(_Bool)arg2;
+ (_Bool)shouldPresentAutomaticNightModeAlertFromDashForAccount:(id)arg1;
+ (_Bool)isAutomaticNightModeEnabled;
+ (_Bool)isNightModeOn;
+ (void)setNightModeStatus:(long long)arg1;
+ (long long)nightModeStatus;

@end

