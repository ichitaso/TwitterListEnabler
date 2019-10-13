//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSIndexPath, TFNCollectionViewCell, TFNDataViewCellLayout, TFNItemsDataViewAdapter, TFNItemsDataViewController, TFNLayoutMetrics, TFNTableViewCell, UIDragItem, UIViewController;
@protocol NSCopying;

@protocol TFNItemsDataViewDelegate <NSObject>
- (UIDragItem *)dragItemForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (TFNLayoutMetrics *)calculatedLayoutMetricsForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)sectionBreaksForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (id <NSCopying>)cellLayoutObjectIdentifierForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (TFNDataViewCellLayout *)cellLayoutForItem:(id)arg1 withObjectIdentifier:(id <NSCopying>)arg2 previousLayout:(TFNDataViewCellLayout *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)commitPreviewingViewController:(UIViewController *)arg1 forItem:(id)arg2 atIndexPath:(NSIndexPath *)arg3 inDataViewController:(TFNItemsDataViewController *)arg4 withPreviousDataViewAdapter:(TFNItemsDataViewAdapter *)arg5 options:(NSDictionary *)arg6;
- (UIViewController *)previewingViewControllerForItem:(id)arg1 location:(struct CGPoint)arg2 inCell:(id)arg3 atIndexPath:(NSIndexPath *)arg4 outSourceRect:(out struct CGRect *)arg5;
- (void)willBeginEditingItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (NSArray *)editActionsForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (long long)editingStyleForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (_Bool)canEditItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (_Bool)dismissItem:(id)arg1 withInfo:(NSDictionary *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)didDeselectItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (_Bool)shouldDeselectItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)didSelectItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (_Bool)shouldSelectItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)didUnhighlightItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)didHighlightItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (_Bool)shouldHighlightItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)didEndDisplayingCell:(id)arg1 forItem:(id)arg2 atIndexPath:(NSIndexPath *)arg3 inDataViewController:(TFNItemsDataViewController *)arg4 withPreviousDataViewAdapter:(TFNItemsDataViewAdapter *)arg5 options:(NSDictionary *)arg6;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(NSIndexPath *)arg3;
- (TFNCollectionViewCell *)collectionViewCellForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (struct CGSize)collectionViewSizeForItem:(id)arg1 constrainedToSize:(struct CGSize)arg2 atIndexPath:(NSIndexPath *)arg3;
- (TFNTableViewCell *)tableViewCellForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (double)estimatedTableViewHeightForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (double)tableViewHeightForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)cancelPrefetchingForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (NSArray *)prefetchOperationsForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (NSDictionary *)dataViewAdapterOptionsForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
- (TFNItemsDataViewAdapter *)dataViewAdapterForItem:(id)arg1 atIndexPath:(NSIndexPath *)arg2;
@end

