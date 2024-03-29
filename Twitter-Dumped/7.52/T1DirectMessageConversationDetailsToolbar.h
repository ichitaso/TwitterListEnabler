//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNToolbar.h>

#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSString, TFNBarButtonItem, UILabel, UIView;
@protocol T1DirectMessageConversationDetailsToolbarControllerDelegate;

@interface T1DirectMessageConversationDetailsToolbar : TFNToolbar <TFNLayoutMetricsEnvironment>
{
    id <T1DirectMessageConversationDetailsToolbarControllerDelegate> controllerDelegate;
    NSString *_conversationName;
    UILabel *_conversationNameLabel;
    TFNBarButtonItem *_conversationNameBarButtonItem;
    TFNBarButtonItem *_settingsBarButtonItem;
    UIView *_bottomBorder;
}

+ (struct CGSize)_settingsButtonSize;
+ (double)defaultHeight;
@property(retain, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) TFNBarButtonItem *settingsBarButtonItem; // @synthesize settingsBarButtonItem=_settingsBarButtonItem;
@property(retain, nonatomic) TFNBarButtonItem *conversationNameBarButtonItem; // @synthesize conversationNameBarButtonItem=_conversationNameBarButtonItem;
@property(retain, nonatomic) UILabel *conversationNameLabel; // @synthesize conversationNameLabel=_conversationNameLabel;
@property(copy, nonatomic) NSString *conversationName; // @synthesize conversationName=_conversationName;
@property(nonatomic) __weak id <T1DirectMessageConversationDetailsToolbarControllerDelegate> controllerDelegate; // @synthesize controllerDelegate;
- (void).cxx_destruct;
- (void)_didTapSettingsButton:(id)arg1;
- (void)_updateToolbarItems;
- (void)layoutMetricsDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

