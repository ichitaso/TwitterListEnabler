//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNLayoutMetrics;

@interface UIView (TFNLayoutMetricsEnvironment)
+ (void)load;
- (void)_tfn_swizzledTraitCollectionDidChange:(id)arg1;
- (void)_tfn_swizzledDidMoveToSuperview;
- (void)_tfn_layoutMetricsDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)tfn_inheritedLayoutMetricsDidChangeTo:(id)arg1;
@property(retain, nonatomic) TFNLayoutMetrics *draggingLayoutMetrics;
- (void)layoutMetricsDidChange:(id)arg1;
- (id)calculatedLayoutMetricsForItemAtIndexPath:(id)arg1;
- (id)calculatedLayoutMetrics;
@end

