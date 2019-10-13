//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNCollectionView.h>

@class NSArray;

@interface TFNFormView : TFNCollectionView
{
    _Bool _isActive;
    _Bool _isAnimatingUpdates;
    _Bool _disableContentOffsetAdjustment;
}

@property(nonatomic) _Bool disableContentOffsetAdjustment; // @synthesize disableContentOffsetAdjustment=_disableContentOffsetAdjustment;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)updateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setActiveStateWithRectangle:(struct CGRect)arg1 withTopInset:(double)arg2 topGutterFrame:(struct CGRect)arg3 bottomGutterFrame:(struct CGRect)arg4;
- (void)clearActiveState;
@property(readonly, nonatomic) NSArray *orderedVisibleCells;

@end

