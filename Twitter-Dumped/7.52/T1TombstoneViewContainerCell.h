//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class UIView;
@protocol T1TombstoneContainerView;

@interface T1TombstoneViewContainerCell : TFNTableViewCell
{
    UIView<T1TombstoneContainerView> *_interstitialView;
}

@property(retain, nonatomic) UIView<T1TombstoneContainerView> *interstitialView; // @synthesize interstitialView=_interstitialView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cleanup;
- (void)setInterstitialItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

