//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1PlayerSessionProducible-Protocol.h>

@class NSString, TFNTwitterBroadcast;
@protocol TFNTwitterCardDataSource;

@interface T1PlayerBroadcastSessionProducible : NSObject <T1PlayerSessionProducible>
{
    TFNTwitterBroadcast *_broadcast;
    id <TFNTwitterCardDataSource> _cardDataSource;
}

@property(readonly, nonatomic) id <TFNTwitterCardDataSource> cardDataSource; // @synthesize cardDataSource=_cardDataSource;
@property(readonly, nonatomic) TFNTwitterBroadcast *broadcast; // @synthesize broadcast=_broadcast;
- (void).cxx_destruct;
- (id)produceSessionForConfiguration:(id)arg1 account:(id)arg2 playbackObservers:(id)arg3 initialScribeContext:(id)arg4;
- (_Bool)canProducePlayerSessionWithAccount:(id)arg1;
- (id)init;
- (id)initWithBroadcast:(id)arg1 cardDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

