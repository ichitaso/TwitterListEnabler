//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewSectionController.h>

#import <T1Twitter/T1SuggestsModuleHeaderViewDelegate-Protocol.h>

@class NSString;

@interface T1URTTimelineModuleViewModelSectionController : TFNItemsDataViewSectionController <T1SuggestsModuleHeaderViewDelegate>
{
    // Error parsing type: , name: account
    // Error parsing type: , name: scribeContext
    // Error parsing type: , name: imagePipeline
    // Error parsing type: , name: moduleHeaderAdapter
    // Error parsing type: , name: moduleFooterAdapter
    // Error parsing type: , name: whoToFollowBlender
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: carouselAdapter
    // Error parsing type: , name: userAdapter
    // Error parsing type: , name: hasScribedFirstImpression
}

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)sectionBreaksForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (void)headerViewDidTapCaret:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)didMoveToDataViewController:(id)arg1;
- (_Bool)isLogicalSectionController;
@property(nonatomic, readonly) _Bool isPinnedToTop;
@property(nonatomic, readonly) NSString *scribeComponent;

// Remaining properties
@property(nonatomic, readonly) _Bool logicalSectionController;

@end

