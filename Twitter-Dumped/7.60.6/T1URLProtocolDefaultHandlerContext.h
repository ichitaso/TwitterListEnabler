//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1URLProtocolHandlerContext-Protocol.h>

@class NSString, T1AppNavigationContext, T1ExternalURLBehavior;

@interface T1URLProtocolDefaultHandlerContext : NSObject <T1URLProtocolHandlerContext>
{
    _Bool _externallyReferred;
    T1ExternalURLBehavior *_externalURLBehavior;
    NSString *_accountUsername;
    T1AppNavigationContext *_navigationContext;
    long long _URLSource;
    NSString *_sourceAppBundleID;
    NSString *_universalLinkURL;
}

+ (id)contextWithAccountUsername:(id)arg1 navigationContext:(id)arg2 source:(long long)arg3 externalURLBehavior:(id)arg4;
+ (id)contextWithExternalURLBehavior:(id)arg1;
+ (id)contextWithURLSource:(long long)arg1 sourceAppBundleID:(id)arg2 externallyReferred:(_Bool)arg3;
+ (id)contextWithURLSource:(long long)arg1 sourceAppBundleID:(id)arg2;
+ (id)contextWithURLSource:(long long)arg1 externallyReferred:(_Bool)arg2;
+ (id)contextWithURLSource:(long long)arg1;
+ (id)contextWithNavigationContext:(id)arg1;
+ (id)contextWithAccountUsername:(id)arg1;
@property(copy, nonatomic) NSString *universalLinkURL; // @synthesize universalLinkURL=_universalLinkURL;
@property(readonly, copy, nonatomic) NSString *sourceAppBundleID; // @synthesize sourceAppBundleID=_sourceAppBundleID;
@property(readonly, nonatomic) long long URLSource; // @synthesize URLSource=_URLSource;
@property(readonly, nonatomic) T1AppNavigationContext *navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, copy, nonatomic) NSString *accountUsername; // @synthesize accountUsername=_accountUsername;
@property(retain, nonatomic) T1ExternalURLBehavior *externalURLBehavior; // @synthesize externalURLBehavior=_externalURLBehavior;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isExternallyReferred) _Bool externallyReferred; // @synthesize externallyReferred=_externallyReferred;
- (id)initWithAccountUsername:(id)arg1 navigationContext:(id)arg2 source:(long long)arg3 sourceAppBundleID:(id)arg4 externalURLBehavior:(id)arg5 externallyReferred:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

