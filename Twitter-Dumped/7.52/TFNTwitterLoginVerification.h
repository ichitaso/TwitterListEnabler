//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TFNTwitterLoginLegacyPushData;
@protocol OS_dispatch_queue;

@interface TFNTwitterLoginVerification : NSObject
{
    long long _userID;
    _Bool _isLoginVerificationEnabledInUserDefaults;
    unsigned long long _sKeyLoginVerificationModeInUserDefaults;
    TFNTwitterLoginLegacyPushData *_legacyPushDataInUserDefaults;
    _Bool _shouldPerformDeferredInitialization;
    _Bool _initWithUserDefaultsDictionary;
    NSObject<OS_dispatch_queue> *_accessorSerialQueue;
    _Bool _enabled;
    TFNTwitterLoginLegacyPushData *_legacyPushData;
    unsigned long long _mode;
    NSString *_sTOTPKey;
    NSArray *_methods;
}

@property(retain, nonatomic) NSArray *methods; // @synthesize methods=_methods;
@property(retain, nonatomic) NSString *sTOTPKey; // @synthesize sTOTPKey=_sTOTPKey;
@property(retain, nonatomic) TFNTwitterLoginLegacyPushData *legacyPushData; // @synthesize legacyPushData=_legacyPushData;
- (void).cxx_destruct;
- (void)_updateFromKeychain;
- (void)updateUserDefaultsDictionary:(id)arg1;
- (void)updateFromKeychain;
- (void)saveToKeychainFromUserDefaultsIfNecessary;
- (_Bool)_saveToKeychain;
- (void)saveToKeychainWithHandler:(CDUnknownBlockType)arg1;
- (void)setTFNTwitterLoginLegacyPushData:(id)arg1;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_performDeferredInitializationAndSaveToKeyChainFromUserDefaultsIfNecessary;
- (_Bool)shouldShowLoginCodeGenerator;
- (_Bool)shouldShowMethodOfType:(unsigned long long)arg1;
- (id)getMethodsOfType:(unsigned long long)arg1;
- (id)initWithUserID:(long long)arg1 deferUsingKeyChainAndUserDefaultsDictionary:(id)arg2;
- (id)initWithUserID:(long long)arg1;

@end

