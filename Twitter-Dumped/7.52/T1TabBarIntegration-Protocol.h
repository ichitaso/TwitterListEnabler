//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class UIView;

@protocol T1TabBarIntegration <NSObject>
@property(nonatomic, getter=isTabBarShadowHidden) _Bool tabBarShadowHidden;
@property(readonly, nonatomic) _Bool isTabBarHidden;
- (void)setTabBarHidden:(_Bool)arg1 withDuration:(double)arg2;
- (struct CGRect)tabBarFrameInView:(UIView *)arg1;
@end

