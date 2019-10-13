//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/TFNPagingContentViewController-Protocol.h>

@class NSString, UIViewController;

@interface TFNParallaxContainerViewController : TFNViewController <TFNPagingContentViewController>
{
    _Bool _parallaxEnabled;
    double _visiblePercent;
    UIViewController *_childViewController;
}

@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) double visiblePercent; // @synthesize visiblePercent=_visiblePercent;
@property(nonatomic) _Bool parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
- (void).cxx_destruct;
- (void)_layoutChildWithVisiblePercent:(double)arg1;
- (void)pagingViewController:(id)arg1 didFinishScrollingVisible:(_Bool)arg2;
- (void)pagingViewController:(id)arg1 didUpdateVisibilityPercent:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

