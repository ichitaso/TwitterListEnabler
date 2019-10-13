//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UITapGestureRecognizer;
@protocol T1CampaignMetadataFieldViewDelegate;

@interface T1CampaignMetadataFieldView : UIView
{
    id <T1CampaignMetadataFieldViewDelegate> _delegate;
    UILabel *_countLabel;
    UILabel *_nameLabel;
    UITapGestureRecognizer *_tapGesture;
}

+ (id)contentFont;
+ (double)desiredHeight;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) __weak id <T1CampaignMetadataFieldViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleTap;
- (void)updateWithMetricsValue:(unsigned long long)arg1 metricsName:(id)arg2 campaignState:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

