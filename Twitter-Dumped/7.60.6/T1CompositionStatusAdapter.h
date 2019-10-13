//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

@class T1CompositionStatusViewLayoutDelegate, T1StatusTableRowAdapter, TFNTwitterAccount;
@protocol TFNTwitterScribeImpressionCache;

@interface T1CompositionStatusAdapter : TFNItemsTableRowAdapter
{
    TFNTwitterAccount *_account;
    id <TFNTwitterScribeImpressionCache> _scribeImpressionCache;
    T1StatusTableRowAdapter *_statusAdapter;
    T1CompositionStatusViewLayoutDelegate *_compositionLayout;
}

@property(retain, nonatomic) T1CompositionStatusViewLayoutDelegate *compositionLayout; // @synthesize compositionLayout=_compositionLayout;
@property(retain, nonatomic) T1StatusTableRowAdapter *statusAdapter; // @synthesize statusAdapter=_statusAdapter;
@property(retain, nonatomic) id <TFNTwitterScribeImpressionCache> scribeImpressionCache; // @synthesize scribeImpressionCache=_scribeImpressionCache;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 estimatedTableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;
- (id)initWithAccount:(id)arg1 scribeImpressionCache:(id)arg2;

@end

