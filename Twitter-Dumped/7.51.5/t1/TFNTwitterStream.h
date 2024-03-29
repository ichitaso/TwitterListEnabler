//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterBasicStreamSupport-Protocol.h>

@class NSString, TFNTwitterTimelineErrorTranslator;

@interface TFNTwitterStream : NSObject <TFNTwitterBasicStreamSupport>
{
    TFNTwitterTimelineErrorTranslator *_errorTranslator;
}

@property(retain, nonatomic) TFNTwitterTimelineErrorTranslator *errorTranslator; // @synthesize errorTranslator=_errorTranslator;
- (void).cxx_destruct;
- (_Bool)canRetryForError:(id)arg1;
- (id)displayName;
- (id)subtextForError:(id)arg1;
- (id)mainTextForError:(id)arg1;
- (id)loadingFailedMessage;
- (id)emptyStreamMessageSubtextLearnMoreURL;
- (id)emptyStreamMessageSubtext;
- (id)emptyStreamMessage;
- (_Bool)isEmpty;
- (id)loadGapError;
- (id)loadBottomError;
- (id)loadTopError;
- (_Bool)isAtEnd;
- (_Bool)canLoadGap;
- (_Bool)canLoadBottom;
- (_Bool)canLoadTop;
- (_Bool)isLoadingGap;
- (_Bool)isLoadingBottom;
- (_Bool)isLoadingTop;
- (_Bool)retryForError:(id)arg1 withSource:(long long)arg2;
- (_Bool)loadGap:(id)arg1 withSource:(long long)arg2;
- (_Bool)loadBottomWithSource:(long long)arg1;
- (_Bool)loadTopWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)streamObjects;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

