//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1ScrollingSegmentedViewControllerDataSource-Protocol.h>
#import <T1Twitter/T1ScrollingSegmentedViewControllerDelegate-Protocol.h>

@class NSArray, NSString, T1HomeTimelineItemsViewController, T1ScrollingSegmentedViewController, TFNBarButtonItem, TFNTwitterAccount;

@interface T1HomeTimelineSegmentedViewController : TFNViewController <T1ScrollingSegmentedViewControllerDataSource, T1ScrollingSegmentedViewControllerDelegate>
{
    TFNTwitterAccount *_account;
    T1ScrollingSegmentedViewController *_contentViewController;
    TFNBarButtonItem *_timelineContentPreferencesButton;
    NSArray *_viewControllers;
    NSArray *_titles;
    T1HomeTimelineItemsViewController *_homeViewController;
    unsigned long long _initialViewControllerIndex;
}

@property(readonly, nonatomic) unsigned long long initialViewControllerIndex; // @synthesize initialViewControllerIndex=_initialViewControllerIndex;
@property(retain, nonatomic) T1HomeTimelineItemsViewController *homeViewController; // @synthesize homeViewController=_homeViewController;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) TFNBarButtonItem *timelineContentPreferencesButton; // @synthesize timelineContentPreferencesButton=_timelineContentPreferencesButton;
@property(retain, nonatomic) T1ScrollingSegmentedViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)navigateToTimelineAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long activeTimelineIndex;
@property(readonly, nonatomic) NSArray *timelines;
- (double)highlightHeight;
- (double)minimumSpacingForSections;
- (id)preferredSegmentBackgroundColor;
- (double)preferredBarPadding;
- (double)preferredMaximumBarHeight;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_t1_loadContentViewController:(id)arg1 indexChanged:(_Bool)arg2;
- (void)segmentedViewController:(id)arg1 willSelectContentViewController:(id)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4;
- (void)segmentedViewController:(id)arg1 didSelectContentViewController:(id)arg2 atIndex:(long long)arg3 indexChanged:(_Bool)arg4 userGestureType:(long long)arg5;
- (id)segmentedViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (id)segmentedViewController:(id)arg1 titleAtIndex:(long long)arg2;
- (long long)numberOfEntriesForSegmentedViewController:(id)arg1;
- (void)_t1_hydrateList;
- (_Bool)t1_showsActionButton;
- (void)_t1_action_didTapHomeTimelineContextItemButton:(id)arg1;
- (id)scribeSection;
- (id)scribePage;
- (id)scribe;
- (_Bool)t1_showsPeopleAction;
- (_Bool)t1_showsDashAction;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (void)_t1_fakeRecurringTaskForegroundRefresh:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 timelineViewControllers:(id)arg2 tabTitles:(id)arg3 initialViewControllerIndex:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

