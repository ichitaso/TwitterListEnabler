//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TAVPlaylistItemProvider-Protocol.h>
#import <T1Twitter/TFNPlayerDownloadItemDelegate-Protocol.h>

@class NSString, NSURL, TAVAnalyticsPlaylistItemMetadata, TAVVideoContext;
@protocol TAVPlayerOutputViewFactory, TFNPlayerDownloadItem;

@interface TAVTwitterDownloadPlaylistItemProvider : NSObject <TFNPlayerDownloadItemDelegate, TAVPlaylistItemProvider>
{
    _Bool _prefersLooping;
    NSURL *_sourceURL;
    id <TFNPlayerDownloadItem> _downloadItem;
    TAVVideoContext *_videoContext;
    TAVAnalyticsPlaylistItemMetadata *_analyticsMetadata;
    CDUnknownBlockType _completionBlock;
    id <TAVPlayerOutputViewFactory> _outputViewFactory;
    unsigned long long _maximumRetries;
    NSString *_errorHint;
}

@property(readonly, copy, nonatomic) NSString *errorHint; // @synthesize errorHint=_errorHint;
@property(readonly, nonatomic) unsigned long long maximumRetries; // @synthesize maximumRetries=_maximumRetries;
@property(readonly, nonatomic) id <TAVPlayerOutputViewFactory> outputViewFactory; // @synthesize outputViewFactory=_outputViewFactory;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) _Bool prefersLooping; // @synthesize prefersLooping=_prefersLooping;
@property(readonly, copy, nonatomic) TAVAnalyticsPlaylistItemMetadata *analyticsMetadata; // @synthesize analyticsMetadata=_analyticsMetadata;
@property(readonly, nonatomic) TAVVideoContext *videoContext; // @synthesize videoContext=_videoContext;
@property(readonly, nonatomic) id <TFNPlayerDownloadItem> downloadItem; // @synthesize downloadItem=_downloadItem;
@property(readonly, copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;
- (id)_tfn_playlistItemWithDownloadedURL:(id)arg1;
- (void)_tfn_completeWithURL:(id)arg1 error:(id)arg2;
- (void)playerDownloadItemDidFinish:(id)arg1;
- (void)providePlaylistItemWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithSourceURL:(id)arg1 alternativeURLs:(id)arg2 videoContext:(id)arg3 analyticsMetadata:(id)arg4 prefersLooping:(_Bool)arg5 outputViewFactory:(id)arg6 maximumRetries:(unsigned long long)arg7 errorHint:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

