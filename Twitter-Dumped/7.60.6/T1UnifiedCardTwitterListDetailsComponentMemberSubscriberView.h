//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface T1UnifiedCardTwitterListDetailsComponentMemberSubscriberView : UIView
{
    UILabel *_titleLabel;
    UILabel *_countLabel;
}

+ (id)_t1_titleLabelFont;
+ (id)_t1_countLabelFont;
+ (struct CGSize)_t1_sizeForAvailableWidth:(double)arg1 font:(id)arg2 text:(id)arg3;
+ (struct CGSize)_t1_titleSizeForAvailableWidth:(double)arg1 titleString:(id)arg2;
+ (struct CGSize)_t1_countSizeForAvailableWidth:(double)arg1 countString:(id)arg2;
+ (struct CGSize)sizeForAvailableWidth:(double)arg1 countString:(id)arg2 titleString:(id)arg3;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

