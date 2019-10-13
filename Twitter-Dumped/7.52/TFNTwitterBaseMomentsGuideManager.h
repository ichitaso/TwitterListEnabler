//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterMomentsCapsuleDataManagerListener-Protocol.h>
#import <T1Twitter/TFNTwitterMomentsGuideDataManager-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol TFNTwitterMomentSportEventsDataManager;

@interface TFNTwitterBaseMomentsGuideManager : NSObject <TFNTwitterMomentsGuideDataManager, TFNTwitterMomentsCapsuleDataManagerListener>
{
    NSMutableDictionary *_capsuleDataManagers;
}

@property(retain, nonatomic) NSMutableDictionary *capsuleDataManagers; // @synthesize capsuleDataManagers=_capsuleDataManagers;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <TFNTwitterMomentSportEventsDataManager> sportEventManager;
- (id)createDataManagerForMomentID:(id)arg1;
- (id)createDataManagerForCapsule:(id)arg1;
- (id)capsuleDataManagerForMomentID:(id)arg1;
- (id)capsuleDataManagerForCapsule:(id)arg1 emptyCapsule:(_Bool)arg2;
- (id)capsuleDataManagerForCapsule:(id)arg1;
- (id)error;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

