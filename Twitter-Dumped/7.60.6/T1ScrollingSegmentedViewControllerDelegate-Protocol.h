//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1ScrollingSegmentedViewController, UIColor, UIViewController;

@protocol T1ScrollingSegmentedViewControllerDelegate <NSObject>
- (void)segmentedViewController:(T1ScrollingSegmentedViewController *)arg1 didSelectContentViewController:(UIViewController *)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4 userGestureType:(long long)arg5;

@optional
- (double)highlightHeight;
- (double)minimumSpacingForSections;
- (UIColor *)preferredSegmentBackgroundColor;
- (double)preferredBarPadding;
- (double)preferredMaximumBarHeight;
- (_Bool)segmentedViewController:(T1ScrollingSegmentedViewController *)arg1 shouldScrollContentViewControllerToTop:(UIViewController *)arg2 atIndex:(long long)arg3;
- (void)segmentedViewController:(T1ScrollingSegmentedViewController *)arg1 willSelectContentViewController:(UIViewController *)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4;
@end

