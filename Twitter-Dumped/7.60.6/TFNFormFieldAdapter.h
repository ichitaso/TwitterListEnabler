//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewAdapter.h>

@class NSIndexPath;
@protocol TFNFormFieldCellDelegate, TFNFormViewAdapterAppearanceProvider;

@interface TFNFormFieldAdapter : TFNItemsDataViewAdapter
{
    double _previousCombiningWidth;
    NSIndexPath *_previousCombiningIndexPath;
    id <TFNFormViewAdapterAppearanceProvider> _appearanceProvider;
    id <TFNFormFieldCellDelegate> _delegate;
    _Bool _requiredImmediateInput;
}

@property(nonatomic) _Bool requiredImmediateInput; // @synthesize requiredImmediateInput=_requiredImmediateInput;
- (void).cxx_destruct;
- (id)_pickerViewControllerForFormField:(id)arg1;
- (void)dataViewController:(id)arg1 didSelectItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (void)dataViewController:(id)arg1 willDisplayCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)dataViewController:(id)arg1 collectionViewSizeForItem:(id)arg2 constrainedToSize:(struct CGSize)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)initWithAppearanceProvider:(id)arg1 delegate:(id)arg2;

@end

