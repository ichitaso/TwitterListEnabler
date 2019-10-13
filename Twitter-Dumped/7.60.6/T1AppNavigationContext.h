//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNTwitterUser, TFSTwitterPushNotificationPayload, TFSTwitterUserReference;

@interface T1AppNavigationContext : NSObject
{
    long long _navigationContextType;
    TFSTwitterUserReference *_relatedUserReference;
    TFNTwitterUser *_relatedUser;
    NSString *_relatedText;
    TFSTwitterPushNotificationPayload *_pushPayload;
}

@property(readonly, nonatomic) TFSTwitterPushNotificationPayload *pushPayload; // @synthesize pushPayload=_pushPayload;
@property(readonly, copy, nonatomic) NSString *relatedText; // @synthesize relatedText=_relatedText;
@property(readonly, nonatomic) TFNTwitterUser *relatedUser; // @synthesize relatedUser=_relatedUser;
@property(readonly, nonatomic) TFSTwitterUserReference *relatedUserReference; // @synthesize relatedUserReference=_relatedUserReference;
@property(readonly, nonatomic) long long navigationContextType; // @synthesize navigationContextType=_navigationContextType;
- (void).cxx_destruct;
- (id)initWithNavigationContextType:(long long)arg1 relatedUserReference:(id)arg2 relatedUser:(id)arg3 relatedStatusID:(long long)arg4 relatedText:(id)arg5 pushPayload:(id)arg6;
- (id)initWithNavigationContextType:(long long)arg1 relatedText:(id)arg2 pushPayload:(id)arg3;
- (id)initWithNavigationContextType:(long long)arg1 relatedStatusID:(long long)arg2 pushPayload:(id)arg3;
- (id)initWithNavigationContextType:(long long)arg1 relatedUserReference:(id)arg2 relatedUser:(id)arg3 pushPayload:(id)arg4;
- (id)initWithNavigationContextType:(long long)arg1 pushPayload:(id)arg2;
- (id)initWithNavigationContextType:(long long)arg1;
- (id)init;

@end

