//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1AvatarImageView, T1ProfileAvatarImageView, TFNTwitterAccount, UIImageView, UILabel;

@interface T1AccountAvatarAndNameView : UIView
{
    T1AvatarImageView *_avatarImageView;
    UIImageView *_verifiedOrProtectedBadge;
    UILabel *_fullNameLabel;
    UILabel *_usernameLabel;
    T1ProfileAvatarImageView *_contributorBadgeView;
    TFNTwitterAccount *_account;
}

@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) T1ProfileAvatarImageView *contributorBadgeView; // @synthesize contributorBadgeView=_contributorBadgeView;
@property(readonly, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(readonly, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(readonly, nonatomic) UIImageView *verifiedOrProtectedBadge; // @synthesize verifiedOrProtectedBadge=_verifiedOrProtectedBadge;
@property(readonly, nonatomic) T1AvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_accountUserDidUpdate:(id)arg1;
- (void)layoutSubviews;
- (void)_t1_updateSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

