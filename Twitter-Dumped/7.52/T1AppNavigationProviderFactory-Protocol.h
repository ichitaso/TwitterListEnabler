//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNTwitterAccount, UIViewController;
@protocol T1AppNavigationProvider;

@protocol T1AppNavigationProviderFactory <NSObject>
- (UIViewController<T1AppNavigationProvider> *)appNavigationProviderControllerForAccount:(TFNTwitterAccount *)arg1;
@end

