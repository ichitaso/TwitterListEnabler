//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNTwitterAccount, TFNTwitterRelatedArticlesReaction;
@protocol TFNTwitterInjectableHomeTimelineStream, TFNTwitterTimelineItemsHydrationScriber;

@interface TFNTwitterTimelineReactiveArticleStreamBlender : NSObject
{
    id <TFNTwitterInjectableHomeTimelineStream> _stream;
    TFNTwitterAccount *_account;
    TFNTwitterRelatedArticlesReaction *_latestReaction;
    id <TFNTwitterTimelineItemsHydrationScriber> _scriber;
}

@property(retain, nonatomic) id <TFNTwitterTimelineItemsHydrationScriber> scriber; // @synthesize scriber=_scriber;
@property(retain, nonatomic) TFNTwitterRelatedArticlesReaction *latestReaction; // @synthesize latestReaction=_latestReaction;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <TFNTwitterInjectableHomeTimelineStream> stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (void)_tfn_blendingLogForStatus:(id)arg1 message:(id)arg2;
- (void)_tfn_cleanupPotentialLingeringReaction;
- (id)_tfn_fetchArticlesCommandWithCommandService:(id)arg1 URL:(id)arg2 statusID:(long long)arg3 statusSortIndex:(long long)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_tfn_fetchArticlesForURL:(id)arg1 inStatus:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_tfn_didReceiveAppDidBecomeActiveNotification:(id)arg1;
- (void)_tfn_didReceiveAppDidResignActiveNotification:(id)arg1;
- (void)userWillReturnToTimelineNow;
- (void)userWillReturnToTimelineAt:(id)arg1;
- (void)reactToOpeningURL:(id)arg1 inStatus:(id)arg2;
- (void)dealloc;
- (id)initWithStream:(id)arg1 account:(id)arg2 scriber:(id)arg3;

@end

