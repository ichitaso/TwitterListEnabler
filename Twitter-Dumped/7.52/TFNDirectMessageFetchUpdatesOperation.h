//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAPICommandOperation.h>

@class NSNumber, NSString, TFNDirectMessageInbox;
@protocol TFNDirectMessageFetchUpdatesOperationDelegate, TFNDirectMessageUserCache;

@interface TFNDirectMessageFetchUpdatesOperation : TFNDirectMessageAPICommandOperation
{
    _Bool _keyRegistryServiceEnabled;
    TFNDirectMessageInbox *_inbox;
    long long _source;
    NSString *_activeConversationID;
    NSNumber *_filterLowQuality;
    id <TFNDirectMessageUserCache> _userCache;
    id <TFNDirectMessageFetchUpdatesOperationDelegate> _delegate;
    NSString *_accountID;
    NSString *_cursor;
}

@property(readonly, copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property __weak id <TFNDirectMessageFetchUpdatesOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <TFNDirectMessageUserCache> userCache; // @synthesize userCache=_userCache;
@property(readonly, nonatomic) NSNumber *filterLowQuality; // @synthesize filterLowQuality=_filterLowQuality;
@property(readonly, nonatomic) _Bool keyRegistryServiceEnabled; // @synthesize keyRegistryServiceEnabled=_keyRegistryServiceEnabled;
@property(readonly, copy, nonatomic) NSString *activeConversationID; // @synthesize activeConversationID=_activeConversationID;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) TFNDirectMessageInbox *inbox; // @synthesize inbox=_inbox;
- (void).cxx_destruct;
- (void)failedWithError:(id)arg1;
- (void)succeededWithObject:(id)arg1;
- (id)makeCommandWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithInbox:(id)arg1 userCache:(id)arg2 source:(long long)arg3 activeConversationID:(id)arg4 keyRegistryServiceEnabled:(_Bool)arg5 filterLowQuality:(id)arg6;
- (id)init;

@end

