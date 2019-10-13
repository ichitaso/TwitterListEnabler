//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, TAVScribeContext, TAVTwitterSessionConfiguration, TFNTwitterAccount;
@protocol TAVSession;

@protocol T1PlayerSessionProducible <NSObject>
- (id <TAVSession>)produceSessionForConfiguration:(TAVTwitterSessionConfiguration *)arg1 account:(TFNTwitterAccount *)arg2 playbackObservers:(NSArray *)arg3 initialScribeContext:(TAVScribeContext *)arg4;
- (_Bool)canProducePlayerSessionWithAccount:(TFNTwitterAccount *)arg1;
@end

