//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1LiveEventCarouselCellsRowAdapterDelegate-Protocol.h>

@class NSIndexPath, NSNumber, NSString, TFNTwitterLiveEventCarousel, TFNTwitterLiveEventCarouselEntry, UICollectionViewFlowLayout;
@protocol T1LiveEventCarouselViewControllerDelegate;

@interface T1LiveEventCarouselViewController : TFNItemsDataViewController <T1LiveEventCarouselCellsRowAdapterDelegate>
{
    _Bool _hasSetInitialContentOffset;
    TFNTwitterLiveEventCarousel *_carousel;
    id <T1LiveEventCarouselViewControllerDelegate> _delegate;
    UICollectionViewFlowLayout *_collectionViewFlowLayout;
    NSIndexPath *_selectedIndexPath;
}

@property(nonatomic) _Bool hasSetInitialContentOffset; // @synthesize hasSetInitialContentOffset=_hasSetInitialContentOffset;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(readonly, nonatomic) UICollectionViewFlowLayout *collectionViewFlowLayout; // @synthesize collectionViewFlowLayout=_collectionViewFlowLayout;
@property(nonatomic) __weak id <T1LiveEventCarouselViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterLiveEventCarousel *carousel; // @synthesize carousel=_carousel;
- (void).cxx_destruct;
- (id)scribeContextForCarouselCellsRowAdapter:(id)arg1 tilePosition:(id)arg2;
- (void)_t1_deselectCarouselEntryAtIndexPath:(id)arg1;
- (void)_t1_selectCarouselEntryAtIndexPath:(id)arg1;
- (void)_t1_invalidateCollectionViewLayoutIfNeeded;
- (void)_t1_centerItemAtIndexPathOnCarousel:(id)arg1;
- (id)_t1_viewModelsForCarouselEntries:(id)arg1;
- (void)tfn_fontSizeChanged;
- (void)layoutMetricsDidChange:(id)arg1;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
@property(retain, nonatomic) TFNTwitterLiveEventCarouselEntry *selectedEntry;
@property(retain, nonatomic) NSNumber *selectedCarouselIndex;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCarousel:(id)arg1 imagePipeline:(id)arg2 scribe:(id)arg3 impressionLogger:(id)arg4;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

