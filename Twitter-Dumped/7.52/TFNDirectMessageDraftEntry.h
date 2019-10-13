//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageEntry.h>

@class NSOperation, NSString;
@protocol TFNDirectMessageQuickReplyResponse;

@interface TFNDirectMessageDraftEntry : TFNDirectMessageEntry
{
    id <TFNDirectMessageQuickReplyResponse> _quickReplyResponse;
    NSString *_impressionID;
    NSOperation *_currentSendOperation;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak NSOperation *currentSendOperation; // @synthesize currentSendOperation=_currentSendOperation;
@property(readonly, copy, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
- (void)setQuickReplyResponse:(id)arg1;
- (id)quickReplyResponse;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSent;
- (void)setFailed;
- (void)setSending;
- (_Bool)isEstablished;
@property(readonly, nonatomic, getter=isSent) _Bool sent;
- (_Bool)sendFailed;
- (_Bool)isSending;
- (id)displayTextRangesWithAttachmentLinks;
- (id)displayTextRanges;
- (id)displayTextWithAttachmentLinks;
- (id)displayText;
- (id)initWithSender:(id)arg1 quickReplyResponse:(id)arg2 attachment:(id)arg3;
- (id)initWithSender:(id)arg1 text:(id)arg2 attachment:(id)arg3 impressionID:(id)arg4;

// Remaining properties
@property(copy, nonatomic) NSString *encryptedText; // @dynamic encryptedText;

@end

