//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, T1OnboardingSearchView;

@protocol T1OnboardingSearchViewDelegate <NSObject>

@optional
- (void)searchView:(T1OnboardingSearchView *)arg1 didReturn:(NSString *)arg2;
- (void)searchViewDidEndEditing:(T1OnboardingSearchView *)arg1;
- (void)searchViewDidStartEditing:(T1OnboardingSearchView *)arg1;
- (void)searchView:(T1OnboardingSearchView *)arg1 didChangeText:(NSString *)arg2;
@end

