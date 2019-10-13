//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSTimer;
@protocol TFNTwitterAVIdleGuardDelegate;

@interface TFNTwitterAVIdleGuard : NSObject
{
    _Bool _didDisableApplicationIdleTimer;
    id <TFNTwitterAVIdleGuardDelegate> _delegate;
    TFSTimer *_timer;
}

@property(retain, nonatomic) TFSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <TFNTwitterAVIdleGuardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didDisableApplicationIdleTimer; // @synthesize didDisableApplicationIdleTimer=_didDisableApplicationIdleTimer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)private_updateApplicationIdleTimer;
- (void)private_enableApplicationIdleTimer;
- (void)private_disableApplicationIdleTimer;
- (id)initWithInterval:(double)arg1 delegate:(id)arg2;

@end

