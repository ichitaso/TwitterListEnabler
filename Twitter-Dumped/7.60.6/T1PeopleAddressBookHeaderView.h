//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewHeaderFooterView.h>

@class CALayer, UILabel;

@interface T1PeopleAddressBookHeaderView : TFNTableViewHeaderFooterView
{
    CALayer *_topBorderLayer;
    CALayer *_bottomBorderLayer;
    UILabel *_headingLabel;
}

+ (double)heightWithContentEdgeInsets:(struct UIEdgeInsets)arg1;
+ (id)font;
@property(readonly, nonatomic) UILabel *headingLabel; // @synthesize headingLabel=_headingLabel;
@property(readonly, nonatomic) CALayer *bottomBorderLayer; // @synthesize bottomBorderLayer=_bottomBorderLayer;
@property(readonly, nonatomic) CALayer *topBorderLayer; // @synthesize topBorderLayer=_topBorderLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

