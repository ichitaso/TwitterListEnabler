//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNDirectMessageQuickReplyRequest-Protocol.h>

@class NSArray, NSString;

@interface TFNDirectMessageQuickReplyRequest : NSObject <TFNDirectMessageQuickReplyRequest>
{
    NSString *_quickReplyID;
    NSArray *_options;
}

@property(readonly, copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *quickReplyID; // @synthesize quickReplyID=_quickReplyID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)makeResponseMessageEntryWithSender:(id)arg1 selectedOption:(id)arg2;
- (id)initWithQuickReplyID:(id)arg1 options:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

