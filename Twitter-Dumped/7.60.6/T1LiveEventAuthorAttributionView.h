//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSLayoutConstraint, NSString, T1AvatarImageView, TFNTwitterUser, UIImageView, UILabel;
@protocol T1LiveEventAuthorAttributionTheme;

@interface T1LiveEventAuthorAttributionView : UIView <TFNLayoutMetricsEnvironment>
{
    id <T1LiveEventAuthorAttributionTheme> _theme;
    UIView *_contentView;
    NSLayoutConstraint *_avatarHeightConstraint;
    T1AvatarImageView *_avatarImageView;
    UILabel *_fullNameLabel;
    UIImageView *_verifiedIcon;
    UILabel *_handleLabel;
}

@property(retain, nonatomic) UILabel *handleLabel; // @synthesize handleLabel=_handleLabel;
@property(retain, nonatomic) UIImageView *verifiedIcon; // @synthesize verifiedIcon=_verifiedIcon;
@property(retain, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(retain, nonatomic) T1AvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) NSLayoutConstraint *avatarHeightConstraint; // @synthesize avatarHeightConstraint=_avatarHeightConstraint;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id <T1LiveEventAuthorAttributionTheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)fontSizeChanged;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_t1_setupLabels;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)setAccountID:(id)arg1;
@property(retain, nonatomic) TFNTwitterUser *user;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

