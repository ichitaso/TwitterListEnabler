//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface T1TVConnectionManager : NSObject
{
    // Error parsing type: , name: account
    // Error parsing type: , name: settings
    // Error parsing type: , name: connection
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)tnl_communicationAgent:(id)arg1 didUpdateReachabilityFromPreviousFlags:(unsigned int)arg2 previousStatus:(long long)arg3 toCurrentFlags:(unsigned int)arg4 currentStatus:(long long)arg5;
- (void)settingsDidChange:(id)arg1;
- (void)accountDidBecomeInactive:(id)arg1;
- (void)accountDidBecomeActive:(id)arg1;
- (void)startWithAccount:(id)arg1;
- (id)init;

@end

