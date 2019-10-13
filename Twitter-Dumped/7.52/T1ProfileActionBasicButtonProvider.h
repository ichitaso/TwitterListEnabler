//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ProfileActionButtonProvider-Protocol.h>

@class NSString, TFNButton, UIImageView, UIView;
@protocol T1ProfileActionButtonProviderDelegate, T1ProfileDataSource;

@interface T1ProfileActionBasicButtonProvider : NSObject <T1ProfileActionButtonProvider>
{
    _Bool _showsNewContentIndicator;
    id <T1ProfileDataSource> _dataSource;
    id <T1ProfileActionButtonProviderDelegate> _delegate;
    NSString *_accessibilityIdentifier;
    NSString *_accessibilityLabel;
    NSString *_imageName;
    NSString *_title;
    SEL _action;
    unsigned long long _state;
    TFNButton *_actionButton;
    UIImageView *_unreadIndicatorImageView;
    unsigned long long _variant;
    id _target;
}

+ (id)textButtonProviderWithTitle:(id)arg1 accessibilityLabel:(id)arg2 accessibilityIdentifier:(id)arg3 target:(id)arg4 action:(SEL)arg5 state:(unsigned long long)arg6;
+ (id)borderlessIconButtonProviderWithImageName:(id)arg1 accessibilityLabel:(id)arg2 accessibilityIdentifier:(id)arg3 target:(id)arg4 action:(SEL)arg5 state:(unsigned long long)arg6;
+ (id)iconButtonProviderWithImageName:(id)arg1 accessibilityLabel:(id)arg2 accessibilityIdentifier:(id)arg3 target:(id)arg4 action:(SEL)arg5 state:(unsigned long long)arg6;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) unsigned long long variant; // @synthesize variant=_variant;
@property(retain, nonatomic) UIImageView *unreadIndicatorImageView; // @synthesize unreadIndicatorImageView=_unreadIndicatorImageView;
@property(retain, nonatomic) TFNButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(nonatomic) _Bool showsNewContentIndicator; // @synthesize showsNewContentIndicator=_showsNewContentIndicator;
@property(nonatomic) __weak id <T1ProfileActionButtonProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <T1ProfileDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *buttonView;
@property(readonly, nonatomic) unsigned long long buttonState;
- (id)initWithImageName:(id)arg1 title:(id)arg2 variant:(unsigned long long)arg3 accessibilityLabel:(id)arg4 accessibilityIdentifier:(id)arg5 target:(id)arg6 action:(SEL)arg7 state:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

