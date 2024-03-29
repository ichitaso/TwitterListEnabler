//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIView;
@protocol TFNComposableViewHost;

@interface TFNComposableViewAdapter : NSObject
{
    long long _viewIdentifier;
    UIView<TFNComposableViewHost> *_hostView;
    NSArray *_hideWhenVisible;
    NSArray *_showWhenVisible;
    CDUnknownBlockType _maximumSizeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType maximumSizeBlock; // @synthesize maximumSizeBlock=_maximumSizeBlock;
@property(copy, nonatomic) NSArray *showWhenVisible; // @synthesize showWhenVisible=_showWhenVisible;
@property(copy, nonatomic) NSArray *hideWhenVisible; // @synthesize hideWhenVisible=_hideWhenVisible;
@property(nonatomic) __weak UIView<TFNComposableViewHost> *hostView; // @synthesize hostView=_hostView;
@property(readonly, nonatomic) long long viewIdentifier; // @synthesize viewIdentifier=_viewIdentifier;
- (void).cxx_destruct;
- (id)prefetchingViewIdentifierForViewModel:(id)arg1;
- (id)prefetchingModelIdentifierForViewModel:(id)arg1;
- (id)prefetchingViewInitializersForViewModel:(id)arg1;
- (_Bool)isViewPrefetchableForViewModel:(id)arg1;
- (_Bool)isLayoutState:(id)arg1 validForViewModel:(id)arg2 layoutMetrics:(id)arg3;
- (id)layoutStateForViewModel:(id)arg1 layoutMetrics:(id)arg2;
- (void)setLayoutState:(id)arg1 forView:(id)arg2;
- (void)viewModel:(id)arg1 didUpdateWithInfo:(id)arg2 forView:(id)arg3;
- (void)unsetViewModelForView:(id)arg1;
- (void)setViewModel:(id)arg1 forView:(id)arg2;
- (void)view:(id)arg1 willMoveToHostView:(id)arg2;
- (_Bool)deinitializeView:(id)arg1;
- (id)initializeView;
- (_Bool)isVisibleForViewModel:(id)arg1;
- (_Bool)shouldBeVisibleForViewModel:(id)arg1;
@property(readonly, nonatomic) id viewModel;
@property(readonly, nonatomic) UIView *view;
- (id)init;
- (id)initWithViewIdentifier:(long long)arg1;

@end

