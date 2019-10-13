//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>

@class TFNMomentsTutorialState;
@protocol OS_dispatch_queue, TFNMomentsTutorialManagerDelegate, TFNMomentsTutorialPolicy;

@interface TFNMomentsTutorialManager : NSObject <NSCoding>
{
    _Bool _needsSerialization;
    id <TFNMomentsTutorialPolicy> _policy;
    id <TFNMomentsTutorialManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    TFNMomentsTutorialState *_state;
    long long _archivingCount;
}

+ (id)unarchiveForAccount:(id)arg1;
+ (id)_archiveFileNameForAccount:(id)arg1;
+ (id)createTutorialManagerForTest;
@property(nonatomic) long long archivingCount; // @synthesize archivingCount=_archivingCount;
@property(nonatomic) _Bool needsSerialization; // @synthesize needsSerialization=_needsSerialization;
@property(retain, nonatomic) TFNMomentsTutorialState *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <TFNMomentsTutorialManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <TFNMomentsTutorialPolicy> policy; // @synthesize policy=_policy;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)reset;
- (void)willTriggerEvent:(unsigned long long)arg1;
- (void)didTriggerEvent:(unsigned long long)arg1 forAccount:(id)arg2;
- (_Bool)shouldTriggerEvent:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isArchiving) _Bool archiving;
- (void)performArchiveToFile:(id)arg1;
- (void)archiveForAccount:(id)arg1 async:(_Bool)arg2;
- (id)initWithState:(id)arg1;

@end

