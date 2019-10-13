//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, TFNAttributedTextModel, UIColor;
@protocol T1StatusBodyTextDisplayableDelegate, TFSActiveTextRange;

@protocol T1StatusBodyTextDisplayable <NSObject>
@property(retain, nonatomic) UIColor *selectionColor;
@property(retain, nonatomic) TFNAttributedTextModel *textModel;
@property(nonatomic) _Bool selectionPaddingEnabled;
@property(retain, nonatomic) NSArray *activeRanges;
@property(nonatomic) __weak id <T1StatusBodyTextDisplayableDelegate> textViewDelegate;
- (NSArray *)rectsForRange:(struct _NSRange)arg1;
- (id <TFSActiveTextRange>)hitTestRanges:(NSArray *)arg1 forPoint:(struct CGPoint)arg2;
@end

