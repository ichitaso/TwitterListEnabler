//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>
#import <T1Twitter/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TFNPagingScrollView, UIKeyCommand, UITapGestureRecognizer, UIView, UIViewController;
@protocol TFNPagingViewControllerDataSource, TFNPagingViewControllerDelegate;

@interface TFNPagingViewController : TFNViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _loopIndexPaths;
    _Bool _pagingEnabled;
    _Bool _bounces;
    _Bool _disableAutomaticReloadOnRotation;
    _Bool _flipXAxisIfRTL;
    _Bool _viewHasLaidOut;
    TFNPagingScrollView *_contentScrollView;
    id <TFNPagingViewControllerDelegate> _delegate;
    id <TFNPagingViewControllerDataSource> _dataSource;
    long long _preloadPolicy;
    long long _retentionPolicy;
    UIKeyCommand *_previousIndexPathKeyCommand;
    UIKeyCommand *_nextIndexPathKeyCommand;
    double _pageSpacing;
    long long _peekingState;
    NSMutableArray *_internalPageState;
    NSMutableArray *_sectionLowerBoundaries;
    NSMutableArray *_sectionUpperBoundaries;
    NSMutableDictionary *_viewControllerEntriesByIndexPath;
    UIView *_panningView;
    NSArray *_sectionDecorationViews;
    UITapGestureRecognizer *_tapRecognizer;
    NSIndexPath *_savedIndexPath;
    UIView *_contentView;
    NSIndexPath *_destinationIndexPath;
    NSNumber *_navigationBarWasCollapsedBeforeUpdate;
    struct CGSize _pageSize;
    struct CGRect _loadedFrame;
}

@property(retain, nonatomic) NSNumber *navigationBarWasCollapsedBeforeUpdate; // @synthesize navigationBarWasCollapsedBeforeUpdate=_navigationBarWasCollapsedBeforeUpdate;
@property(retain, nonatomic) NSIndexPath *destinationIndexPath; // @synthesize destinationIndexPath=_destinationIndexPath;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSIndexPath *savedIndexPath; // @synthesize savedIndexPath=_savedIndexPath;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) NSArray *sectionDecorationViews; // @synthesize sectionDecorationViews=_sectionDecorationViews;
@property(nonatomic) struct CGRect loadedFrame; // @synthesize loadedFrame=_loadedFrame;
@property(retain, nonatomic) UIView *panningView; // @synthesize panningView=_panningView;
@property(retain, nonatomic) NSMutableDictionary *viewControllerEntriesByIndexPath; // @synthesize viewControllerEntriesByIndexPath=_viewControllerEntriesByIndexPath;
@property(retain, nonatomic) NSMutableArray *sectionUpperBoundaries; // @synthesize sectionUpperBoundaries=_sectionUpperBoundaries;
@property(retain, nonatomic) NSMutableArray *sectionLowerBoundaries; // @synthesize sectionLowerBoundaries=_sectionLowerBoundaries;
@property(retain, nonatomic) NSMutableArray *internalPageState; // @synthesize internalPageState=_internalPageState;
@property(nonatomic) long long peekingState; // @synthesize peekingState=_peekingState;
@property(nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) double pageSpacing; // @synthesize pageSpacing=_pageSpacing;
@property(nonatomic) _Bool viewHasLaidOut; // @synthesize viewHasLaidOut=_viewHasLaidOut;
@property(retain, nonatomic) UIKeyCommand *nextIndexPathKeyCommand; // @synthesize nextIndexPathKeyCommand=_nextIndexPathKeyCommand;
@property(retain, nonatomic) UIKeyCommand *previousIndexPathKeyCommand; // @synthesize previousIndexPathKeyCommand=_previousIndexPathKeyCommand;
@property(nonatomic) long long retentionPolicy; // @synthesize retentionPolicy=_retentionPolicy;
@property(nonatomic) long long preloadPolicy; // @synthesize preloadPolicy=_preloadPolicy;
@property(nonatomic) _Bool flipXAxisIfRTL; // @synthesize flipXAxisIfRTL=_flipXAxisIfRTL;
@property(nonatomic) _Bool disableAutomaticReloadOnRotation; // @synthesize disableAutomaticReloadOnRotation=_disableAutomaticReloadOnRotation;
@property(nonatomic) _Bool bounces; // @synthesize bounces=_bounces;
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(nonatomic) _Bool loopIndexPaths; // @synthesize loopIndexPaths=_loopIndexPaths;
@property(nonatomic) __weak id <TFNPagingViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TFNPagingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNPagingScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
- (void).cxx_destruct;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_didTap:(id)arg1;
- (void)handleNextTabKeyCommand;
- (void)handleNextKeyCommand;
- (void)handlePreviousTabKeyCommand;
- (void)handlePreviousKeyCommand;
- (id)keyCommands;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (double)lengthOfLayoutGuide:(long long)arg1 forEnvironment:(id)arg2;
- (void)layoutGuidesDidChange:(long long)arg1;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
- (id)_pageViewControllerForNotification:(id)arg1;
- (void)_dataViewControllerDidUpdate:(id)arg1;
- (void)_dataViewControllerWillUpdate:(id)arg1;
- (void)_updateContentOffsetIfNeededForPageViewController:(id)arg1;
- (void)scrollToPercent:(double)arg1 animated:(_Bool)arg2;
- (void)scrollToPercent:(double)arg1 inSection:(long long)arg2 animated:(_Bool)arg3;
- (void)peekRight;
@property(readonly, nonatomic) UIView *currentDecorationView;
@property(readonly, nonatomic) UIViewController *currentViewController;
- (double)currentPageScrollProgressIncludingPageSpacing:(_Bool)arg1;
@property(readonly, nonatomic) double totalScrollProgress;
- (double)scrollProgressForSection:(unsigned long long)arg1;
@property(readonly, nonatomic) double currentPageScrollProgress;
@property(readonly, nonatomic) unsigned long long currentSection;
@property(readonly, nonatomic) NSIndexPath *nextIndexPath;
@property(readonly, nonatomic) NSIndexPath *previousIndexPath;
- (void)setCurrentIndexPath:(id)arg1 skipIntermediateViewControllers:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setCurrentIndexPath:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) NSIndexPath *currentIndexPath;
@property(readonly, nonatomic) NSArray *visibleViewControllers;
@property(readonly, nonatomic) NSArray *visibleIndexPaths;
- (id)viewControllerAtIndexPath:(id)arg1;
- (void)reloadInvisibleViewControllers;
- (void)removeSectionAtIndex:(long long)arg1;
- (void)insertSectionAtIndex:(long long)arg1;
- (void)reloadSectionAtIndex:(long long)arg1;
- (double)_renderedPercentForViewController:(id)arg1;
- (void)reloadViewControllerAtIndexPath:(id)arg1;
- (void)_loadVisibleViewControllersForce:(_Bool)arg1;
- (void)_unloadVisibleViewControllers;
- (void)reloadVisibleViewControllersForceUnload:(_Bool)arg1;
- (void)reloadVisibleViewControllers;
- (void)_fireUpdateCall;
- (struct CGSize)_calculatedContentSizeForSize:(struct CGSize)arg1;
- (struct CGSize)_calculatedPageSizeForSize:(struct CGSize)arg1;
- (id)indexPathForContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)_contentOffsetForAbsoluteIndex:(long long)arg1;
- (struct CGPoint)_contentOffsetForIndexPath:(id)arg1;
- (struct CGRect)_frameForPageAtIndexPath:(id)arg1;
- (long long)_absolutePageIndexForIndexPath:(id)arg1;
- (id)_indexPathForAbsolutePageIndex:(long long)arg1;
- (long long)_absolutePageCount;
- (id)_visibleIndexPathsForPageSubset:(long long)arg1;
- (id)_addViewControllerAtIndexPath:(id)arg1;
- (void)_removeViewController:(id)arg1;
- (void)_layoutDecorationViews;
- (void)_prepareLayoutState;
- (void)_prepareDecorationViews;
- (void)reloadViewControllers;
- (void)scrollViewDidScrollProgrammatically:(id)arg1 animated:(_Bool)arg2;
- (void)scrollViewWillScrollProgrammatically:(id)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tfn_contentScrollView;
- (void)_reportPercentEndedAnimation:(_Bool)arg1;
- (void)_reportVisibilityForViewControllerAtIndexPath:(id)arg1;
- (_Bool)tfn_isContentScrolledToBottom;
- (_Bool)tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)_layoutChildren;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPageSpacing:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

