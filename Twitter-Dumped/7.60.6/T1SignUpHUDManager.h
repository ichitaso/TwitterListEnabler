//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNHUD;

@interface T1SignUpHUDManager : NSObject
{
    unsigned long long _hudRetainCount;
    TFNHUD *_submissionHUD;
}

+ (id)_sharedInstance;
+ (void)decrementSignUpWorkBeingPerformed;
+ (void)incrementSignUpWorkBeingPerformedBegin:(_Bool)arg1;
@property(readonly, nonatomic) TFNHUD *submissionHUD; // @synthesize submissionHUD=_submissionHUD;
@property(nonatomic) unsigned long long hudRetainCount; // @synthesize hudRetainCount=_hudRetainCount;
- (void).cxx_destruct;
- (void)_decrement;
- (void)_increment:(_Bool)arg1;
- (id)init;

@end

