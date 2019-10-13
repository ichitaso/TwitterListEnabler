//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterTimelineObject-Protocol.h>
#import <T1Twitter/TFSTwitterTimelinePlistSerialization-Protocol.h>

@class NSString, TFNTwitterMoment, TFNTwitterSuggestsInfo;
@protocol TFNTwitterTimelineEntryContext;

@interface TFNTwitterMomentTimelineEntry : NSObject <TFSTwitterTimelinePlistSerialization, TFNTwitterTimelineObject>
{
    long long _entryType;
    TFNTwitterMoment *_moment;
    TFNTwitterSuggestsInfo *_suggestsInfo;
    id <TFNTwitterTimelineEntryContext> _timelineEntryContext;
}

@property(retain, nonatomic) id <TFNTwitterTimelineEntryContext> timelineEntryContext; // @synthesize timelineEntryContext=_timelineEntryContext;
@property(retain, nonatomic) TFNTwitterSuggestsInfo *suggestsInfo; // @synthesize suggestsInfo=_suggestsInfo;
@property(retain, nonatomic) TFNTwitterMoment *moment; // @synthesize moment=_moment;
@property(nonatomic) long long entryType; // @synthesize entryType=_entryType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *timeString;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *momentID;
- (id)initWithJSONDictionary:(id)arg1 moments:(id)arg2;
- (id)initWithEntryType:(long long)arg1 moment:(id)arg2 suggestsInfo:(id)arg3 timelineEntryContext:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

