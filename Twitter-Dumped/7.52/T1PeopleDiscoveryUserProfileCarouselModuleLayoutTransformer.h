//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1PeopleDiscoveryModuleLayoutTransformer-Protocol.h>

@class NSPredicate, NSString, T1PeopleDiscoveryUserProfileCardViewProvider, TFNTwitterAccount, TFSTwitterScribeContext;

@interface T1PeopleDiscoveryUserProfileCarouselModuleLayoutTransformer : NSObject <T1PeopleDiscoveryModuleLayoutTransformer>
{
    TFNTwitterAccount *_account;
    CDUnknownBlockType _userTapActionBlock;
    CDUnknownBlockType _tapActionBlock;
    TFSTwitterScribeContext *_scribeContext;
    T1PeopleDiscoveryUserProfileCardViewProvider *_viewProvider;
}

@property(readonly, nonatomic) T1PeopleDiscoveryUserProfileCardViewProvider *viewProvider; // @synthesize viewProvider=_viewProvider;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType userTapActionBlock; // @synthesize userTapActionBlock=_userTapActionBlock;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)itemsForModule:(id)arg1;
@property(readonly, nonatomic) NSPredicate *predicate;
- (void)configureAdaptersForSectionController:(id)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1 userTapActionBlock:(CDUnknownBlockType)arg2 tapActionBlock:(CDUnknownBlockType)arg3 scribeContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

