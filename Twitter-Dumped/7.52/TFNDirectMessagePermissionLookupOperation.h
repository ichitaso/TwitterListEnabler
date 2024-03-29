//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAPICommandOperation.h>

@class NSString, TFNDirectMessageModel;

@interface TFNDirectMessagePermissionLookupOperation : TFNDirectMessageAPICommandOperation
{
    _Bool _encryptedDM;
    NSString *_accountID;
    long long _userID;
    NSString *_username;
    TFNDirectMessageModel *_model;
    CDUnknownBlockType _lookupCompletionBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType lookupCompletionBlock; // @synthesize lookupCompletionBlock=_lookupCompletionBlock;
@property(readonly, nonatomic) TFNDirectMessageModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) _Bool encryptedDM; // @synthesize encryptedDM=_encryptedDM;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) long long userID; // @synthesize userID=_userID;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)failedWithError:(id)arg1;
- (void)succeededWithObject:(id)arg1;
- (id)makeCommandWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccountID:(id)arg1 userID:(long long)arg2 username:(id)arg3 encryptedDM:(_Bool)arg4 model:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;

@end

