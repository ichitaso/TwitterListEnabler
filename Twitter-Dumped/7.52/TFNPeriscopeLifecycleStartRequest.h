//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNPeriscopeLifecycleRequest.h>

@class NSString;

@interface TFNPeriscopeLifecycleStartRequest : TFNPeriscopeLifecycleRequest
{
    NSString *_broadcastLifecycleToken;
    NSString *_uniqueLifecycleToken;
    NSString *_component;
}

@property(readonly, copy, nonatomic) NSString *component; // @synthesize component=_component;
@property(readonly, copy, nonatomic) NSString *uniqueLifecycleToken; // @synthesize uniqueLifecycleToken=_uniqueLifecycleToken;
@property(readonly, copy, nonatomic) NSString *broadcastLifecycleToken; // @synthesize broadcastLifecycleToken=_broadcastLifecycleToken;
- (void).cxx_destruct;
- (_Bool)shouldCallAuthenticatedEndpoint;
- (id)authenticatedHTTPBodyDictionary;
- (id)publicHTTPBodyDictionary;
- (id)publicEndpoint;
- (id)authenticatedEndpoint;
- (id)initWithBroadcastID:(id)arg1 broadcastLifecycleToken:(id)arg2 periscopeAccount:(id)arg3 uniqueLifecycleToken:(id)arg4 component:(id)arg5;

@end

