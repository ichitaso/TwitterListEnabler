//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

@class NSArray, TFNResponderSnapshot;

@interface UIResponder (TFNAdditions)
+ (void)tfn_clearLastRecordedFirstResponder;
+ (id)tfn_lastRecordedFirstResponder;
+ (_Bool)tfn_currentFirstResponderAcceptsKeyboardInput;
@property(readonly, nonatomic) _Bool tfn_dashGestureEnabled;
@property(readonly, nonatomic) TFNResponderSnapshot *tfn_snapshotOfResponder;
- (_Bool)tfn_becomeFirstResponderIfNotInResponderChain;
- (void)_tfn_constructResponderChain:(id)arg1;
@property(readonly, nonatomic) NSArray *tfn_responderChain;
- (void)tfn_recordAsFirstResponder;
@end

