//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>

@class NSString, TFNTwitterAccount;

@interface T1SULCategoryUserLoader : NSObject <T1TwitterAuthenticated>
{
    TFNTwitterAccount *_account;
}

@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)loadUsersForSULCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

