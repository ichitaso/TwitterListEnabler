//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1InterestPickerShowMoreReusableViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, TFNPeopleDiscoveryShowMore;
@protocol T1InterestPickerSectionHelperDelegate;

@interface T1InterestPickerSectionHelper : NSObject <T1InterestPickerShowMoreReusableViewDelegate>
{
    NSString *_categoryName;
    TFNPeopleDiscoveryShowMore *_showMore;
    NSMutableArray *_showMoreItems;
    id <T1InterestPickerSectionHelperDelegate> _delegate;
}

+ (void)registerReusableViewsForCollectionView:(id)arg1;
+ (id)helperForShowMore:(id)arg1 items:(id)arg2 delegate:(id)arg3;
+ (id)helperForCategoryName:(id)arg1;
- (void).cxx_destruct;
- (struct UIEdgeInsets)private_categorySectionHeaderContentEdgeInsetsForLayoutMetrics:(id)arg1;
- (void)showMoreReusableViewWasPressed:(id)arg1;
@property(readonly, nonatomic) NSArray *hiddenItems;
- (struct CGSize)sectionHeaderSizeForLayoutMetrics:(id)arg1;
- (id)sectionHeaderViewForLayoutMetrics:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3;
@property(readonly, nonatomic) double sectionHeaderTopContentInset;
@property(readonly, nonatomic) _Bool hasCategoryName;

@end

