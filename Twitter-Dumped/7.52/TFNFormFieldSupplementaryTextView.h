//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNFormAppearance, UILabel;

@interface TFNFormFieldSupplementaryTextView : UIView
{
    UILabel *_textLabel;
    TFNFormAppearance *_appearance;
}

+ (double)heightForText:(id)arg1 withFormFieldWidth:(double)arg2 appearance:(id)arg3 layoutMetrics:(id)arg4;
@property(retain, nonatomic) TFNFormAppearance *appearance; // @synthesize appearance=_appearance;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

