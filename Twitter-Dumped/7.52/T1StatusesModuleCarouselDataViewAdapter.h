//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1TimelinesItemsViewControllerDataViewAdapter.h>

#import <T1Twitter/T1TimelinesCarouselCollectionViewLayoutMetricsProvider-Protocol.h>

@interface T1StatusesModuleCarouselDataViewAdapter : T1TimelinesItemsViewControllerDataViewAdapter <T1TimelinesCarouselCollectionViewLayoutMetricsProvider>
{
}

- (id)layoutMetricsForCollectionViewLayout:(id)arg1;
- (id)identifierForItem:(id)arg1;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)hostedTableViewCell:(id)arg1 viewControllerForItem:(id)arg2 atIndexPath:(id)arg3;

@end

