//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1InfoTextView, TFNTappableHighlightView;

@interface T1TweetDetailsVideoMonetizationSettingsView : UIView
{
    T1InfoTextView *_infoTextView;
    TFNTappableHighlightView *_highlightView;
    CDUnknownBlockType _tapActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(readonly, nonatomic) TFNTappableHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(readonly, nonatomic) T1InfoTextView *infoTextView; // @synthesize infoTextView=_infoTextView;
- (void).cxx_destruct;
- (void)updateWithLayoutSpecIfNeeded:(id)arg1;
- (void)settingsTapped;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

