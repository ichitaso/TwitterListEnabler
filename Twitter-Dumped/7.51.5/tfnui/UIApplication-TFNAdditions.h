//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@interface UIApplication (TFNAdditions)
+ (_Bool)tfn_deviceHasNotch;
+ (_Bool)tfn_isLandscape;
+ (long long)tfn_interfaceOrientation;
+ (double)tfn_statusBarHeight;
+ (void)load;
@property(readonly) long long tfn_lastApplicationState;
@property(readonly) long long tfn_lastApplicationIconBadgeNumber;
- (id)_tfn_propertyObserver;
- (void)tfn_initializeLastSeenProperties;
- (struct CGSize)tfn_displayDimensions;
- (unsigned long long)tfn_canOpenURLStatus:(id)arg1;
- (_Bool)tfn_canOpenURL:(id)arg1;
- (id)tfn_beginBackgroundTaskHandleWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
@end

