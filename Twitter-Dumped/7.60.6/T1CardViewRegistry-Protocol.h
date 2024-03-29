//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1CardView, T1CardViewLayoutDelegate, TFNTwitterAccount;

@protocol T1CardViewRegistry <NSObject>
- (T1CardViewLayoutDelegate *)layoutDelegateForCardName:(long long)arg1 displayMode:(long long)arg2;
- (T1CardView *)cardViewForCardName:(long long)arg1 displayMode:(long long)arg2;
- (_Bool)shouldForceRenderingCardName:(long long)arg1 displayMode:(long long)arg2;
- (_Bool)isCardRegisteredForCardName:(long long)arg1 displayMode:(long long)arg2;
- (id)initWithAccount:(TFNTwitterAccount *)arg1;
@end

