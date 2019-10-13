//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSError, NSString, T1OneFactorAuthorizationRequest, T1SignInManager, TFNTwitterAccount, TFNTwitterXAuthOneFactorResponse;

@protocol T1SignInManagerDelegate <NSObject>
- (void)signInManager:(T1SignInManager *)arg1 didReceiveChallengeWithType:(long long)arg2 requestID:(NSString *)arg3 userName:(NSString *)arg4 userID:(long long)arg5 challengeURLString:(NSString *)arg6;
- (void)signInManager:(T1SignInManager *)arg1 didAttemptOneFactorAuthorizationRequest:(T1OneFactorAuthorizationRequest *)arg2 success:(_Bool)arg3 response:(TFNTwitterXAuthOneFactorResponse *)arg4 error:(NSError *)arg5;
- (void)signInManager:(T1SignInManager *)arg1 didAttemptLoginVerificationUnenrollWithSuccess:(_Bool)arg2;
- (void)signInManager:(T1SignInManager *)arg1 didAttemptAddingExistingAccount:(TFNTwitterAccount *)arg2;
- (void)signInManager:(T1SignInManager *)arg1 didReauthenticateAccount:(TFNTwitterAccount *)arg2;
- (void)signInManager:(T1SignInManager *)arg1 didAddAccount:(TFNTwitterAccount *)arg2;
- (void)signInManager:(T1SignInManager *)arg1 didEncounterError:(NSError *)arg2;
@end

