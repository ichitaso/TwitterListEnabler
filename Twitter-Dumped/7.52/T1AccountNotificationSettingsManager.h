//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterAccountPushSettingsManager-Protocol.h>

@interface T1AccountNotificationSettingsManager : NSObject <TFNTwitterAccountPushSettingsManager>
{
    // Error parsing type: , name: accountID
    // Error parsing type: , name: userID
    // Error parsing type: , name: scribe
    // Error parsing type: , name: userDefaultsPersistenceKey
    // Error parsing type: , name: operationQueue
    // Error parsing type: , name: initialLoadInProgress
    // Error parsing type: , name: pushAuthStatus
    // Error parsing type: , name: checkedInState
    // Error parsing type: , name: removingPush
    // Error parsing type: , name: removingPushQueue
    // Error parsing type: , name: pushTemplateLoadingAndAuthStateObservable
    // Error parsing type: , name: pushTemplateLoadingAndAuthStateInput
    // Error parsing type: , name: allKeysForQueryableSettings.storage
    // Error parsing type: , name: legacySettingsValuesProperties.storage
    // Error parsing type: , name: pushSettingsValuesProperty.storage
    // Error parsing type: , name: checkinStateProperty.storage
}

- (void).cxx_destruct;
- (id)init;
- (void)unregisterForPushWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isRemovingPush;
- (void)checkinWithForce:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryablePushSettingFor:(long long)arg1 isVIT:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end

