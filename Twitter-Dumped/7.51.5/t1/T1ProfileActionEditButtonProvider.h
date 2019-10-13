//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ProfileActionDataSourceButtonProvider.h>

@class TFNButton;

@interface T1ProfileActionEditButtonProvider : T1ProfileActionDataSourceButtonProvider
{
    _Bool _visible;
    _Bool _edit;
    _Bool _enable;
    id _target;
    SEL _editAction;
    SEL _setupAction;
    SEL _disabledAction;
    TFNButton *_actionButton;
}

@property(retain, nonatomic) TFNButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) SEL disabledAction; // @synthesize disabledAction=_disabledAction;
@property(nonatomic) SEL setupAction; // @synthesize setupAction=_setupAction;
@property(nonatomic) SEL editAction; // @synthesize editAction=_editAction;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)_updateButtonProperties;
- (void)dataSourceDidInvalidateForReason:(long long)arg1;
- (id)buttonView;
- (unsigned long long)buttonState;
- (id)initWithAccount:(id)arg1 dataSource:(id)arg2;
- (id)initWithAccount:(id)arg1 dataSource:(id)arg2 target:(id)arg3 editAction:(SEL)arg4 setupAction:(SEL)arg5 disabledAction:(SEL)arg6;
- (id)initWithAccount:(id)arg1 dataSource:(id)arg2 target:(id)arg3 editAction:(SEL)arg4 setupAction:(SEL)arg5;

@end

