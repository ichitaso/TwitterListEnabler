//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1TabNavigationController.h>

#import <T1Twitter/TFNTwitterProgressCenterObserver-Protocol.h>

@class NSString;
@protocol NSCopying;

@interface T1TimelineNavigationController : T1TabNavigationController <TFNTwitterProgressCenterObserver>
{
}

+ (long long)panelID;
- (void)progressCenter:(id)arg1 didCompleteProgress:(id)arg2;
- (void)progressCenter:(id)arg1 didUpdateProgress:(id)arg2;
- (void)progressCenter:(id)arg1 didStartProgress:(id)arg2;
- (void)titleTapAction:(id)arg1;
- (void)tabWasLongPressed;
- (void)handleTabSelectionIfAlreadySelected;
- (id)_t1_createAccountsViewerController;
- (id)rootTabViewControllerForAccount:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (id)initWithAccount:(id)arg1 tabView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <NSCopying> uniqueID;

@end

