//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNCollectionViewCell.h>

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface TFNStreamGapCollectionViewCell : TFNCollectionViewCell
{
    UILabel *_textLabel;
    UIImageView *_topImageView;
    UIImageView *_bottomImageView;
    UIActivityIndicatorView *_activityIndicator;
}

+ (double)_heightForSectionBreaks:(unsigned long long)arg1 layoutMetrics:(id)arg2;
+ (struct CGSize)sizeForSectionBreaks:(unsigned long long)arg1 constrainedToSize:(struct CGSize)arg2 layoutMetrics:(id)arg3;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) _Bool loading;
- (id)initWithFrame:(struct CGRect)arg1;

@end

