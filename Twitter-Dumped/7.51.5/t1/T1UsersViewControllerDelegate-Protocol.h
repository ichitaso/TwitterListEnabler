//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, T1UsersViewController;

@protocol T1UsersViewControllerDelegate <NSObject>

@optional
- (_Bool)usersViewController:(T1UsersViewController *)arg1 shouldShowBioForUserOrRecommendation:(id)arg2;
- (void)usersViewController:(T1UsersViewController *)arg1 didReceiveUsers:(NSArray *)arg2;
@end

