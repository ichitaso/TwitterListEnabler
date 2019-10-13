//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1StatusMediaHandler, T1TimelinesItemsCarouselViewController, TFNTwitterAccount;
@protocol T1StatusEmbeddedCarouselHost, T1StatusViewModel;

@protocol T1StatusEmbeddedCarouselCreator <NSObject>
@property(readonly, nonatomic) T1TimelinesItemsCarouselViewController *previousCarouselController;
@property(readonly, nonatomic) unsigned long long layoutMode;
@property(readonly, nonatomic) id <T1StatusViewModel> statusViewModel;
@property(readonly, nonatomic) T1StatusMediaHandler *mediaHandler;
@property(readonly, nonatomic) TFNTwitterAccount *account;
- (T1TimelinesItemsCarouselViewController *)embeddedCarouselViewControllerWithHost:(id <T1StatusEmbeddedCarouselHost>)arg1;
@end

