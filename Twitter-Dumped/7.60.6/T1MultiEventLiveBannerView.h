//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSSet, TFNLayoutMetrics;
@protocol T1MultiEventLiveBannerViewDelegate;

@interface T1MultiEventLiveBannerView : UIView
{
    // Error parsing type: , name: imagePipeline
    // Error parsing type: , name: newStylingEnabled
    // Error parsing type: , name: headerTextLabel
    // Error parsing type: , name: headerWrapper
    // Error parsing type: , name: visibleItemViews
    // Error parsing type: , name: carousel
    // Error parsing type: , name: itemsStackView
    // Error parsing type: , name: carouselOffsetForNextLayoutPass
    // Error parsing type: , name: carouselOffsetAtStartOfDrag
    // Error parsing type: , name: delegate
    // Error parsing type: , name: calculatedLayoutMetricOverrides
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutIfNeeded;
- (void)layoutSubviews;
@property(nonatomic, retain) TFNLayoutMetrics *calculatedLayoutMetricOverrides; // @synthesize calculatedLayoutMetricOverrides;
- (void)didTapItem:(id)arg1;
- (void)didTapItemCaret:(id)arg1;
- (void)updateWith:(id)arg1;
@property(nonatomic) __weak id <T1MultiEventLiveBannerViewDelegate> delegate; // @synthesize delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithImagePipeline:(id)arg1 frame:(struct CGRect)arg2 newStylingEnabled:(_Bool)arg3;
@property(nonatomic, copy) NSSet *visibleItemViews;
@property(nonatomic, readonly) NSArray *eventItemViews;

@end

