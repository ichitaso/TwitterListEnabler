//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormBaseCell.h>

@class TFNBooleanItem, UISwitch;

@interface TFNFormBooleanCell : TFNFormBaseCell
{
}

+ (id)formViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 reuseIdentifier:(id)arg4 indexPath:(id)arg5 initialization:(CDUnknownBlockType)arg6;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (id)_inputSwitchValueForState:(_Bool)arg1;
- (_Bool)canHighlight;
@property(readonly, nonatomic) UISwitch *inputSwitch;
@property(readonly, nonatomic) TFNBooleanItem *booleanItem;

@end

