//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1InterestPickerViewController.h>

#import <T1Twitter/T1InterestPickerViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1OnboardingWaitable-Protocol.h>

@class NSString;
@protocol T1OnboardingInterestPickerViewControllerDelegate;

@interface T1OnboardingInterestPickerViewController : T1InterestPickerViewController <T1InterestPickerViewControllerDelegate, T1OnboardingWaitable>
{
    id <T1OnboardingInterestPickerViewControllerDelegate> _delegate;
    _Bool _lastTappedSkip;
    _Bool _hasScrolledToBottom;
}

- (void).cxx_destruct;
- (void)private_contentOffsetDidUpdateForScrollView:(id)arg1;
- (void)private_updateToolbarWaiting:(_Bool)arg1;
- (id)private_toolbarItemsWithNextLabel:(id)arg1 skipLabel:(id)arg2;
- (void)private_nextTapped:(id)arg1;
- (void)private_skipTapped:(id)arg1;
- (void)stopWaiting;
- (void)waitWithMessage:(id)arg1;
- (_Bool)canWaitWithMessage:(id)arg1;
- (void)interestPickerDidTapShowMore:(id)arg1;
- (void)interestPickerSelectionDidEndSearch:(id)arg1;
- (void)interestPickerSelectionDidStartSearch:(id)arg1;
- (void)interestPickerSelectionDidChange:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)tfn_preferredToolbarVisibility;
- (void)setInterestPickerDelegate:(id)arg1;
- (id)initWithAccount:(id)arg1 title:(id)arg2 subtitle:(id)arg3 hideSearch:(_Bool)arg4 searchHeaderText:(id)arg5 searchHint:(id)arg6 nextLabel:(id)arg7 skipLabel:(id)arg8 delegate:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

