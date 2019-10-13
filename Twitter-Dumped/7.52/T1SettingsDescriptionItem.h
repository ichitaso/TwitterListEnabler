//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSString, TFNDataViewController;

@interface T1SettingsDescriptionItem : NSObject <TFNAttributedTextViewDelegate>
{
    NSString *_text;
    long long _textAlignment;
    CDUnknownBlockType _inactiveAreaTapAction;
    TFNDataViewController *_controller;
    NSArray *_callsToAction;
    NSArray *_ranges;
    NSAttributedString *_displayText;
}

+ (id)tfn_defaultDataViewAdapter;
+ (id)private_callsToActionsForEntities:(id)arg1 navigationLinkActionBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSAttributedString *displayText; // @synthesize displayText=_displayText;
@property(copy, nonatomic) NSArray *ranges; // @synthesize ranges=_ranges;
@property(copy, nonatomic) NSArray *callsToAction; // @synthesize callsToAction=_callsToAction;
@property(nonatomic) __weak TFNDataViewController *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) CDUnknownBlockType inactiveAreaTapAction; // @synthesize inactiveAreaTapAction=_inactiveAreaTapAction;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
- (void).cxx_destruct;
- (id)tfn_dataViewItem;
- (id)private_textViewDelegateForController:(id)arg1;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)attributedTextViewDidTapInactiveArea:(id)arg1;
- (id)private_nonBreakingString:(id)arg1;
- (void)tfn_fontSizeChanged;
- (id)attributedStyleDictionary;
- (void)_t1_setupAttributedText;
- (id)initForNoActionWithText:(id)arg1;
- (id)initWithText:(id)arg1 callsToAction:(id)arg2;
- (id)initWithFormatString:(id)arg1 callToActionText:(id)arg2 url:(id)arg3 scribeContext:(id)arg4 account:(id)arg5;
- (id)initForLearnMoreActionWithFormatString:(id)arg1 url:(id)arg2 scribeContext:(id)arg3 account:(id)arg4;
- (id)initWithText:(id)arg1 entities:(id)arg2 navigationLinkActionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

