//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ProfileDisplayContentProvider.h>

@class T1AppNavigationContext, T1ProfileClusterFollowViewController, T1ProfileContentSubheaderEntry, T1ProfileFriendsFollowingViewController, T1ProfileLandingControlViewController, T1ProfileSocialContextViewController, T1ProfileUserInfoViewController, T1PushLandingItem, TFSTwitterScribeContext;

@interface T1ProfileDisplayNormalSubheaderContentProvider : T1ProfileDisplayContentProvider
{
    _Bool _didDismissClusterFollow;
    _Bool _didDismissSocialContext;
    _Bool _shouldShowLandingItem;
    T1AppNavigationContext *_socialContextNavigationContext;
    TFSTwitterScribeContext *_socialContextSourceScribeContext;
    CDUnknownBlockType _userInfoBirthdayTapBlock;
    T1PushLandingItem *_landingItem;
    T1ProfileContentSubheaderEntry *_clusterFollowSubheaderEntry;
    T1ProfileContentSubheaderEntry *_friendsFollowingSubheaderEntry;
    T1ProfileContentSubheaderEntry *_socialContextSubheaderEntry;
    T1ProfileContentSubheaderEntry *_pushLandingControlEntry;
    T1ProfileContentSubheaderEntry *_userInfoSubheaderEntry;
    T1ProfileClusterFollowViewController *_clusterFollowViewController;
    T1ProfileFriendsFollowingViewController *_friendsFollowingViewController;
    T1ProfileSocialContextViewController *_socialContextViewController;
    T1ProfileUserInfoViewController *_userInfoViewController;
    T1ProfileLandingControlViewController *_landingControlViewController;
}

@property(nonatomic) __weak T1ProfileLandingControlViewController *landingControlViewController; // @synthesize landingControlViewController=_landingControlViewController;
@property(nonatomic) __weak T1ProfileUserInfoViewController *userInfoViewController; // @synthesize userInfoViewController=_userInfoViewController;
@property(nonatomic) __weak T1ProfileSocialContextViewController *socialContextViewController; // @synthesize socialContextViewController=_socialContextViewController;
@property(nonatomic) __weak T1ProfileFriendsFollowingViewController *friendsFollowingViewController; // @synthesize friendsFollowingViewController=_friendsFollowingViewController;
@property(nonatomic) __weak T1ProfileClusterFollowViewController *clusterFollowViewController; // @synthesize clusterFollowViewController=_clusterFollowViewController;
@property(retain, nonatomic) T1ProfileContentSubheaderEntry *userInfoSubheaderEntry; // @synthesize userInfoSubheaderEntry=_userInfoSubheaderEntry;
@property(retain, nonatomic) T1ProfileContentSubheaderEntry *pushLandingControlEntry; // @synthesize pushLandingControlEntry=_pushLandingControlEntry;
@property(retain, nonatomic) T1ProfileContentSubheaderEntry *socialContextSubheaderEntry; // @synthesize socialContextSubheaderEntry=_socialContextSubheaderEntry;
@property(retain, nonatomic) T1ProfileContentSubheaderEntry *friendsFollowingSubheaderEntry; // @synthesize friendsFollowingSubheaderEntry=_friendsFollowingSubheaderEntry;
@property(retain, nonatomic) T1ProfileContentSubheaderEntry *clusterFollowSubheaderEntry; // @synthesize clusterFollowSubheaderEntry=_clusterFollowSubheaderEntry;
@property(nonatomic) _Bool shouldShowLandingItem; // @synthesize shouldShowLandingItem=_shouldShowLandingItem;
@property(retain, nonatomic) T1PushLandingItem *landingItem; // @synthesize landingItem=_landingItem;
@property(nonatomic) _Bool didDismissSocialContext; // @synthesize didDismissSocialContext=_didDismissSocialContext;
@property(nonatomic) _Bool didDismissClusterFollow; // @synthesize didDismissClusterFollow=_didDismissClusterFollow;
@property(copy, nonatomic) CDUnknownBlockType userInfoBirthdayTapBlock; // @synthesize userInfoBirthdayTapBlock=_userInfoBirthdayTapBlock;
@property(copy, nonatomic) TFSTwitterScribeContext *socialContextSourceScribeContext; // @synthesize socialContextSourceScribeContext=_socialContextSourceScribeContext;
@property(retain, nonatomic) T1AppNavigationContext *socialContextNavigationContext; // @synthesize socialContextNavigationContext=_socialContextNavigationContext;
- (void).cxx_destruct;
- (void)_updateSocialContext;
- (id)_socialContextText;
- (void)_showSocialContextSourceUsers;
- (_Bool)_isSocialContextValid;
- (_Bool)_isClusterFollowValid;
- (id)_generateUserInfoViewController;
- (id)_generateLandingControlController;
- (id)_generateSocialContextViewController;
- (id)_generateClusterFollowViewController;
- (void)removeCachedViewControllersIfNeeded;
- (void)profileDataSourceDidInvalidateWithReason:(long long)arg1;
- (id)contentSubheaderEntries;
@property(readonly, nonatomic) CDUnknownBlockType enableAccountLinkDisplayActionBlock;
@property(readonly, nonatomic) CDUnknownBlockType showFollowersBlock;

@end

