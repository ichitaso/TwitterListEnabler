//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1BroadcastGeoblockingController, T1LiveEventControlBarViewModel, T1PlayerSessionProducer, TFNTwitterAccount, TFNTwitterLiveEvent, TFSTwitterBroadcast;
@protocol T1BroadcastContainerViewModelDelegate, TFNTwitterCardDataSource;

@interface T1BroadcastContainerViewModel : NSObject
{
    _Bool _displayedAsGuestView;
    _Bool _requestingLocationUpdate;
    TFSTwitterBroadcast *_broadcast;
    TFNTwitterAccount *_account;
    id <TFNTwitterCardDataSource> _cardDataSource;
    T1LiveEventControlBarViewModel *_liveEventControlBarViewModel;
    id <T1BroadcastContainerViewModelDelegate> _delegate;
    T1BroadcastGeoblockingController *_geoblockingController;
    TFNTwitterLiveEvent *_liveEvent;
}

@property(nonatomic) _Bool requestingLocationUpdate; // @synthesize requestingLocationUpdate=_requestingLocationUpdate;
@property(retain, nonatomic) TFNTwitterLiveEvent *liveEvent; // @synthesize liveEvent=_liveEvent;
@property(retain, nonatomic) T1BroadcastGeoblockingController *geoblockingController; // @synthesize geoblockingController=_geoblockingController;
@property(nonatomic, getter=isDisplayedAsGuestView) _Bool displayedAsGuestView; // @synthesize displayedAsGuestView=_displayedAsGuestView;
@property(nonatomic) __weak id <T1BroadcastContainerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) T1LiveEventControlBarViewModel *liveEventControlBarViewModel; // @synthesize liveEventControlBarViewModel=_liveEventControlBarViewModel;
@property(readonly, nonatomic) id <TFNTwitterCardDataSource> cardDataSource; // @synthesize cardDataSource=_cardDataSource;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) TFSTwitterBroadcast *broadcast; // @synthesize broadcast=_broadcast;
- (void).cxx_destruct;
- (void)_t1_postUpdate;
- (void)_t1_configureSSLPinningDelegate;
- (struct CGSize)imageOriginalDimensions;
- (id)imageTemplateURL;
- (double)shareTimecodeForPlaybackState:(id)arg1;
- (void)requestLocationUpdate;
@property(readonly, nonatomic) T1PlayerSessionProducer *playerSessionProducer;
- (id)playerWithInitialScribeContext:(id)arg1;
@property(readonly, nonatomic) long long state;
- (id)ptvBroadcast;
- (_Bool)isEqualToBroadcastContainerViewModel:(id)arg1;
@property(readonly, nonatomic, getter=isUserViewingOwnBroadcast) _Bool userViewingOwnBroadcast;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBroadcast:(id)arg1 account:(id)arg2 cardDataSource:(id)arg3 liveEvent:(id)arg4;
- (id)init;

@end

