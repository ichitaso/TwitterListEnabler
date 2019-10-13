//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1URTHomeTimelineMigrationConfiguration-Protocol.h>

@class NSString, TFNTwitterAccount;

@interface _T1_HomeTimelineURTMigrationConfiguration : NSObject <T1URTHomeTimelineMigrationConfiguration>
{
    _Bool _hasConfiguredBucket;
    BOOL _migrationPhase;
    _Bool _shouldWipeRichTimelineCache;
    NSString *_experimentBucket;
    TFNTwitterAccount *_account;
    // Error parsing type: {?="lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"predicate"{atomic_flag="_Value"AB}}, name: _configSetupTransientDispatchOnceToken
}

@property(nonatomic) _Bool shouldWipeRichTimelineCache; // @synthesize shouldWipeRichTimelineCache=_shouldWipeRichTimelineCache;
@property(nonatomic) BOOL migrationPhase; // @synthesize migrationPhase=_migrationPhase;
// Error parsing type for property configSetupTransientDispatchOnceToken:
// Property attributes: T{?={os_unfair_lock_s=I}{atomic_flag=AB}},R,N,V_configSetupTransientDispatchOnceToken

@property(readonly, nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) _Bool hasConfiguredBucket; // @synthesize hasConfiguredBucket=_hasConfiguredBucket;
- (void).cxx_destruct;
- (_Bool)_t1_isURTHomeTimelineIntegrationPhase2CacheWipingEnabled;
- (_Bool)_t1_isURTHomeTimelineIntegrationPhase2Enabled;
- (void)_t1_setupConfigIfNeeded;
@property(readonly, nonatomic) NSString *experimentBucket; // @synthesize experimentBucket=_experimentBucket;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

