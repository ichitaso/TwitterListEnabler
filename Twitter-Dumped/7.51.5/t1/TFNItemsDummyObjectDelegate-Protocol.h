//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSIndexPath, TFNCollectionViewCell, TFNTableViewCell, UICollectionView, UITableView;

@protocol TFNItemsDummyObjectDelegate <NSObject>
- (void)collectionView:(UICollectionView *)arg1 didSelectDummyObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 sizeForDummyObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 constraintedToSize:(struct CGSize)arg4;
- (TFNCollectionViewCell *)collectionView:(UICollectionView *)arg1 cellForDummyObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 didSelectDummyObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3;
- (TFNTableViewCell *)tableView:(UITableView *)arg1 cellForDummyObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3;
- (double)tableView:(UITableView *)arg1 heightForDummyObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3;
- (_Bool)isDummyMetaObject:(id)arg1;
- (_Bool)isDummyObject:(id)arg1;
@end

