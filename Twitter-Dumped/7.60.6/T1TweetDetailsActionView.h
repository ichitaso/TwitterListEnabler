//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/T1StatusViewInlineActions-Protocol.h>

@class NSArray, NSDictionary, NSString, TFNTwitterAccount, TFNTwitterStatus;

@interface T1TweetDetailsActionView : UIView <T1StatusViewInlineActions>
{
    struct CGRect _previousButtonBounds;
    _Bool _disabled;
    _Bool _hidesDisabledActions;
    _Bool _usesSimpleAnimation;
    _Bool _needsUpdateButtons;
    _Bool _haveSetInitialStates;
    long long _style;
    TFNTwitterStatus *_status;
    TFNTwitterAccount *_account;
    NSArray *_layoutOrder;
    NSDictionary *_actions;
    UIView *_accessibilityAnchorView;
}

+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;
+ (struct UIEdgeInsets)_touchInsetsForActionButtonFrame:(struct CGRect)arg1 bounds:(struct CGRect)arg2;
@property(retain, nonatomic) UIView *accessibilityAnchorView; // @synthesize accessibilityAnchorView=_accessibilityAnchorView;
@property(nonatomic) _Bool haveSetInitialStates; // @synthesize haveSetInitialStates=_haveSetInitialStates;
@property(retain, nonatomic) NSDictionary *actions; // @synthesize actions=_actions;
@property(nonatomic) _Bool needsUpdateButtons; // @synthesize needsUpdateButtons=_needsUpdateButtons;
@property(copy, nonatomic) NSArray *layoutOrder; // @synthesize layoutOrder=_layoutOrder;
@property(nonatomic) _Bool usesSimpleAnimation; // @synthesize usesSimpleAnimation=_usesSimpleAnimation;
@property(nonatomic) _Bool hidesDisabledActions; // @synthesize hidesDisabledActions=_hidesDisabledActions;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)enumerateInlineActionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)viewForInlineActionWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) UIView *containerView;
- (id)generateAccessibilityCustomActionsForConsumptionElsewhere;
- (void)_updateAccessibilityForButton:(id)arg1 selected:(_Bool)arg2 selectedHint:(id)arg3 unselectedHint:(id)arg4;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)_animationForButton:(id)arg1;
- (void)_updateAnimatorForButton:(id)arg1;
- (void)_updateButtonAnimators;
- (void)_buttonWasTapped:(id)arg1;
- (id)calculatedLayoutMetrics;
- (void)_momentsLayoutForBounds:(struct CGRect)arg1;
- (void)_equalSpaceLayoutForBounds:(struct CGRect)arg1;
- (void)_equalDistanceLayoutForBounds:(struct CGRect)arg1;
- (void)_centerSingleButtonLayoutForBounds:(struct CGRect)arg1;
- (void)_legacyLayoutForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateButton:(id)arg1 selected:(_Bool)arg2 count:(long long)arg3 unselectedHint:(id)arg4 selectedHint:(id)arg5;
- (void)_updateButtonStates;
- (void)updateButtonsIfNeeded;
- (void)setNeedsUpdateButtons;
- (id)buttonOfType:(unsigned long long)arg1;
- (id)_createButtonOfType:(unsigned long long)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)setReplyBlock:(CDUnknownBlockType)arg1 retweetBlock:(CDUnknownBlockType)arg2 favoriteBlock:(CDUnknownBlockType)arg3 shareTweetBlock:(CDUnknownBlockType)arg4 moreBlock:(CDUnknownBlockType)arg5 forStatus:(id)arg6 account:(id)arg7;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

