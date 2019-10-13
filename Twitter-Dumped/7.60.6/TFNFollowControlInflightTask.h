//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1FollowControl, TFNTwitterAccount, TFSTwitterScribeContext;
@protocol T1FollowControlDelegate, TFSTwitterCanonicalUser;

@interface TFNFollowControlInflightTask : NSObject
{
    T1FollowControl *_followControl;
    TFSTwitterScribeContext *_scribeContext;
    unsigned long long _action;
    TFNTwitterAccount *_account;
    id <TFSTwitterCanonicalUser> _user;
}

@property(readonly, nonatomic) id <TFSTwitterCanonicalUser> user; // @synthesize user=_user;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) unsigned long long action; // @synthesize action=_action;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak T1FollowControl *relevantFollowControl;
@property(readonly, nonatomic) __weak id <T1FollowControlDelegate> delegate;
- (id)initWithAction:(unsigned long long)arg1 performedFromFollowControl:(id)arg2;
- (id)init;

@end

