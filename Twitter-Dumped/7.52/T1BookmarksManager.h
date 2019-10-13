//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNTwitterAccount;

@interface T1BookmarksManager : NSObject
{
    TFNTwitterAccount *_account;
}

+ (void)_t1_showAmbientNotification:(id)arg1 withAccount:(id)arg2;
+ (void)_t1_showAmbientNotification:(id)arg1;
+ (void)_t1_notifyStatus:(id)arg1 hasChangedBookmarkedState:(_Bool)arg2;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)removeAllStatusesFromBookmarksWithScribeContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeStatusFromBookmarks:(id)arg1 withScribeContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addStatusToBookmarks:(id)arg1 withScribeContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end

