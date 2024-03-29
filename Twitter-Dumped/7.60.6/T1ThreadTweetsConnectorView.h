//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ConversationConnectorView.h>

@class CAGradientLayer, T1ThreadTweetsConnectorSolidLineView, UIImageView, UIView;

@interface T1ThreadTweetsConnectorView : T1ConversationConnectorView
{
    _Bool _connected;
    UIView *_backgroundMask;
    T1ThreadTweetsConnectorSolidLineView *_solidLineView;
    UIImageView *_dashedImageView;
    CAGradientLayer *_gradient;
}

@property(readonly, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(readonly, nonatomic) UIImageView *dashedImageView; // @synthesize dashedImageView=_dashedImageView;
@property(readonly, nonatomic) T1ThreadTweetsConnectorSolidLineView *solidLineView; // @synthesize solidLineView=_solidLineView;
@property(readonly, nonatomic) UIView *backgroundMask; // @synthesize backgroundMask=_backgroundMask;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (void)setConnected:(_Bool)arg1 animate:(_Bool)arg2;
- (void)_t1_updateForConnectedAnimated:(_Bool)arg1;
- (id)_t1_connectorImageWithDashForHeight:(double)arg1;
- (struct CGPath *)_t1_connectedPath;
- (struct CGPath *)_t1_disconnectedPath;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 terminals:(long long)arg2;

@end

