//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNDirectMessageEvent-Protocol.h>

@class NSDate, NSString;

@interface TFNDirectMessageMarkAllAsReadEvent : NSObject <TFNDirectMessageEvent>
{
    long long _eventID;
    NSDate *_time;
    NSString *_requestID;
    long long _lastReadEventID;
}

@property(readonly, nonatomic) long long lastReadEventID; // @synthesize lastReadEventID=_lastReadEventID;
@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) long long eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;
- (void)performUpdatesWithModel:(id)arg1;
- (id)initWithEventID:(long long)arg1 time:(id)arg2 requestID:(id)arg3 lastReadEventID:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

