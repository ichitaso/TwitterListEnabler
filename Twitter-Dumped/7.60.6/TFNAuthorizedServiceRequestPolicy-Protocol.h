//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray, NSDictionary;
@protocol TFNAuthorizationRequestItem;

@protocol TFNAuthorizedServiceRequestPolicy <NSObject>

@optional
- (_Bool)shouldExecuteRequest:(id <TFNAuthorizationRequestItem>)arg1 withRequestLogEntries:(NSArray *)arg2;
- (_Bool)shouldSkipPresentationIfInAppAuthorized;
- (_Bool)shouldExecuteRequest:(id <TFNAuthorizationRequestItem>)arg1 withCurrentInAppStatus:(long long)arg2 systemStatus:(long long)arg3 metadata:(NSDictionary *)arg4 authorized:(_Bool)arg5;
@end

