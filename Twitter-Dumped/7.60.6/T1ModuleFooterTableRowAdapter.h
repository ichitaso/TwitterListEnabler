//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

@class TFNTwitterAccount;

@interface T1ModuleFooterTableRowAdapter : TFNItemsTableRowAdapter
{
    TFNTwitterAccount *_account;
}

@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (CDUnknownBlockType)_t1_openURLActionBlockForFooter:(id)arg1 controller:(id)arg2 scribeSection:(id)arg3 scribeComponent:(id)arg4;
- (void)_t1_didSelectFooter:(id)arg1;
- (void)dataViewController:(id)arg1 commitPreviewingViewController:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 previewConfigurationForItem:(id)arg2 withOptions:(id)arg3 location:(struct CGPoint)arg4 inCell:(id)arg5 atIndexPath:(id)arg6;
- (double)heightForFooterInSection:(long long)arg1;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 estimatedTableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

