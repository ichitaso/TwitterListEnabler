//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

@class T1UserBadger, TIPImagePipeline;
@protocol T1DirectMessageUserTypeaheadRowAdapterDelegate;

@interface T1DirectMessageUserTypeaheadRowAdapter : TFNItemsTableRowAdapter
{
    id <T1DirectMessageUserTypeaheadRowAdapterDelegate> _delegate;
    TIPImagePipeline *_imagePipeline;
    T1UserBadger *_userBadger;
}

@property(retain, nonatomic) T1UserBadger *userBadger; // @synthesize userBadger=_userBadger;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(nonatomic) __weak id <T1DirectMessageUserTypeaheadRowAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;

@end

