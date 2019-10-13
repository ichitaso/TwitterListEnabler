//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSString;

@interface TFNTwitterOAuthAccessTokenResponse : NSObject <TFSModel>
{
    NSString *_token;
    NSString *_tokenSecret;
    NSString *_username;
    long long _userID;
}

+ (id)accessTokenResponseWithData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) long long userID; // @synthesize userID=_userID;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *tokenSecret; // @synthesize tokenSecret=_tokenSecret;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

