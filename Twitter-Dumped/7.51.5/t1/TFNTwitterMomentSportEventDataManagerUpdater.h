//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterMomentSportEventsUpdatableDataManagerDelegate-Protocol.h>

@class NSString, TFSTimer;
@protocol TFNTwitterMomentSportEventsUpdatableDataManager;

@interface TFNTwitterMomentSportEventDataManagerUpdater : NSObject <TFNTwitterMomentSportEventsUpdatableDataManagerDelegate>
{
    id <TFNTwitterMomentSportEventsUpdatableDataManager> _dataManager;
    TFSTimer *_updateTimer;
    double _pollingInterval;
}

@property(nonatomic) double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(retain, nonatomic) TFSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) id <TFNTwitterMomentSportEventsUpdatableDataManager> dataManager; // @synthesize dataManager=_dataManager;
- (void).cxx_destruct;
- (void)sportEventsUpdatableDataManagerDidUpdate:(id)arg1;
- (void)_updateTimerDidFire:(id)arg1;
- (void)_scheduleTimerUpdate;
- (void)_invalidateTimer;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithDataManager:(id)arg1 pollingInterval:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

