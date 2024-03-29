//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterBaseTwitterRecurringTask.h>

@class NSMutableDictionary;

@interface TFNTwitterFlushScribeRecurringTask : TFNTwitterBaseTwitterRecurringTask
{
    NSMutableDictionary *_tokensToScribeFlush;
    _Bool _observing;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)tfs_taskState;
- (void)tfs_priorityForEvent:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)tfs_triggerFromService:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)description;
- (id)_tfn_acquireAccount;
- (id)_tfn_selectNextInactiveAccount;
- (void)_tfn_flushNotification:(id)arg1;
- (void)_tfn_stopObservingFlushNotificationIfNecessary;
- (void)_tfn_startObservingFlushNotificationIfNecessary;
- (void)dealloc;
- (id)initWithTwitter:(id)arg1 type:(long long)arg2;

@end

