//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter34PrivacyAndContentSettingsViewModel : NSObject
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: emailAndPhoneLoader
    // Error parsing type: , name: account
    // Error parsing type: , name: queue
    // Error parsing type: , name: communicationAgent
    // Error parsing type: , name: weakSelfQueueSettingValueErrorNotificationIfNeeded
    // Error parsing type: , name: $__lazy_storage_$_internal_protectTweetsEnabled
    // Error parsing type: , name: $__lazy_storage_$_internal_connectToPeriscopeEnabled
    // Error parsing type: , name: $__lazy_storage_$_internal_findByEmailEnabled
    // Error parsing type: , name: $__lazy_storage_$_internal_findByPhoneEnabled
    // Error parsing type: , name: $__lazy_storage_$_internal_showSensitiveMedia
}

- (void).cxx_destruct;
- (id)init;
- (void)appWillEnterForeground:(id)arg1;
- (void)tnl_communicationAgent:(id)arg1 didUpdateReachabilityFromPreviousFlags:(unsigned int)arg2 previousStatus:(long long)arg3 toCurrentFlags:(unsigned int)arg4 currentStatus:(long long)arg5;
- (void)tnl_communicationAgent:(id)arg1 didRegisterObserverWithInitialReachabilityFlags:(unsigned int)arg2 status:(long long)arg3 carrierInfo:(id)arg4 WWANRadioAccessTechnology:(id)arg5 captivePortalStatus:(long long)arg6;

@end

