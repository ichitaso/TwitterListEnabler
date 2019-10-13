//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterCardContextModel-Protocol.h>

@class NSAttributedString, NSString, T1LiveEventMediaViewModel, T1LiveEventRemindMeViewModel, TFNTwitterCardContext, TFNTwitterCardData, TFNTwitterCardImageSpec, TFNTwitterLiveEvent, TFNTwitterStatus, TFNTwitterUser, TFSTwitterBroadcast;
@protocol T1LiveEventCardViewModelDelegate, T1LiveEventCardViewTheme, TFNTwitterAccountFetchCancellable;

@interface T1LiveEventCardViewModel : NSObject <TFNTwitterCardContextModel>
{
    _Bool _refreshing;
    _Bool _refreshingFromCAPIEndpoint;
    TFNTwitterCardContext *_cardContext;
    TFNTwitterLiveEvent *_event;
    TFSTwitterBroadcast *_broadcast;
    TFNTwitterStatus *_mediaStatus;
    T1LiveEventMediaViewModel *_mediaViewModel;
    T1LiveEventRemindMeViewModel *_remindMeViewModel;
    id <T1LiveEventCardViewModelDelegate> _delegate;
    NSString *_ubsRefreshIdentifier;
    id <TFNTwitterAccountFetchCancellable> _mediaStatusFetchRequest;
    long long _mediaStatusFetchRequestStatusID;
    id <T1LiveEventCardViewTheme> _theme;
    TFNTwitterCardData *_latestCardData;
}

@property(retain, nonatomic) TFNTwitterCardData *latestCardData; // @synthesize latestCardData=_latestCardData;
@property(retain, nonatomic) id <T1LiveEventCardViewTheme> theme; // @synthesize theme=_theme;
@property(nonatomic) long long mediaStatusFetchRequestStatusID; // @synthesize mediaStatusFetchRequestStatusID=_mediaStatusFetchRequestStatusID;
@property(retain, nonatomic) id <TFNTwitterAccountFetchCancellable> mediaStatusFetchRequest; // @synthesize mediaStatusFetchRequest=_mediaStatusFetchRequest;
@property(retain, nonatomic) NSString *ubsRefreshIdentifier; // @synthesize ubsRefreshIdentifier=_ubsRefreshIdentifier;
@property(nonatomic, getter=isRefreshingFromCAPIEndpoint) _Bool refreshingFromCAPIEndpoint; // @synthesize refreshingFromCAPIEndpoint=_refreshingFromCAPIEndpoint;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) __weak id <T1LiveEventCardViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) T1LiveEventRemindMeViewModel *remindMeViewModel; // @synthesize remindMeViewModel=_remindMeViewModel;
@property(readonly, nonatomic) T1LiveEventMediaViewModel *mediaViewModel; // @synthesize mediaViewModel=_mediaViewModel;
@property(retain, nonatomic) TFNTwitterStatus *mediaStatus; // @synthesize mediaStatus=_mediaStatus;
@property(retain, nonatomic) TFSTwitterBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(retain, nonatomic) TFNTwitterLiveEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
- (void).cxx_destruct;
- (void)_t1_fetchMediaStatusWithStatusID:(long long)arg1;
- (void)_t1_processUBSResponse:(id)arg1;
- (void)_t1_stopPeriodicalUBSUpdates;
- (void)_t1_startPeriodicalUBSUpdates;
- (void)_t1_didReceiveCAPIResponse:(id)arg1;
- (void)_t1_stopPeriodicalCAPIUpdates;
- (void)_t1_startPeriodicalCAPIUpdates;
- (void)_t1_updateMediaViewModel;
@property(readonly, nonatomic) TFNTwitterCardImageSpec *imageSpec;
@property(readonly, nonatomic) TFNTwitterStatus *status;
- (void)stopPeriodicalUpdates;
- (void)startPeriodicalUpdates;
- (_Bool)isEqualToCardViewModel:(id)arg1;
@property(readonly, nonatomic) TFNTwitterUser *authorUser;
@property(readonly, copy, nonatomic) NSAttributedString *attributedEventTitleString;
@property(readonly, copy, nonatomic) NSAttributedString *attributedEventCategoryString;
@property(readonly, copy, nonatomic) NSAttributedString *attributedEventBadgeString;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCardContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

