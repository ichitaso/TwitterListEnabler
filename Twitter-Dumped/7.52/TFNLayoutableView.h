//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol TFNLayoutableViewLayoutDelegate;

@interface TFNLayoutableView : UIView
{
    id <TFNLayoutableViewLayoutDelegate> _layoutDelegate;
    id _layoutState;
}

@property(retain, nonatomic) id layoutState; // @synthesize layoutState=_layoutState;
@property(nonatomic) __weak id <TFNLayoutableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

