//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1UserRecommendationViewLayoutState, TFNTwitterAccount, TFNTwitterStatus, TFSTwitterScribeContext;

@interface T1TweetDetailsUserRecommendationItem : NSObject
{
    TFSTwitterScribeContext *_scribeContext;
    TFNTwitterStatus *_status;
    TFNTwitterAccount *_account;
    T1UserRecommendationViewLayoutState *_layoutState;
}

@property(retain, nonatomic) T1UserRecommendationViewLayoutState *layoutState; // @synthesize layoutState=_layoutState;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
- (void).cxx_destruct;
- (id)initWithStatus:(id)arg1 account:(id)arg2;

@end

