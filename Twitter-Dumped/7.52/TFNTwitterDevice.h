//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNTwitterDevice : NSObject
{
    NSString *_twitterUdid;
    unsigned long long _guestId;
    NSString *_model;
    _Bool _restoredFromDifferentDevice;
}

+ (id)shortcodesByCountry;
+ (void)setOsNotificationsSoundsEnabled:(_Bool)arg1;
+ (_Bool)osNotificationsSoundsEnabled;
+ (void)setOsNotificationsBadgesEnabled:(_Bool)arg1;
+ (_Bool)osNotificationsBadgesEnabled;
+ (void)setOsNotificationsAlertsEnabled:(_Bool)arg1;
+ (_Bool)osNotificationsAlertsEnabled;
+ (id)currentDevice;
@property(readonly, nonatomic, getter=isRestoredFromDifferentDevice) _Bool restoredFromDifferentDevice; // @synthesize restoredFromDifferentDevice=_restoredFromDifferentDevice;
- (void).cxx_destruct;
- (id)blockingCarrierName;
- (id)_shortcodeForCountryCode:(id)arg1;
- (_Bool)isInLocale:(id)arg1;
- (id)localizedShortcode;
@property(readonly, nonatomic) NSString *simCountryCode;
- (unsigned long long)deciderIndexForKey:(id)arg1;
- (unsigned long long)_calculateGuestIdFromUdid:(id)arg1;
- (unsigned long long)guestId;
- (id)uniqueIdentifier;
- (id)init;

@end

