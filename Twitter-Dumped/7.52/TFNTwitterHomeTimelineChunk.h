//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterMutableTimelineChunk-Protocol.h>

@class NSArray, NSString, TFNTwitterTimelineCursor;

@interface TFNTwitterHomeTimelineChunk : NSObject <TFNTwitterMutableTimelineChunk>
{
    TFNTwitterTimelineCursor *_cursor;
    id _pinnedStreamObject;
    NSArray *_objects;
    long long _loadSource;
}

@property(nonatomic) long long loadSource; // @synthesize loadSource=_loadSource;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) id pinnedStreamObject; // @synthesize pinnedStreamObject=_pinnedStreamObject;
@property(retain, nonatomic) TFNTwitterTimelineCursor *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (void)_tfn_parseTimelineEntryJSON:(id)arg1 intoMutableObjectsArray:(id)arg2 usingDataFromStatusesDictionary:(id)arg3 momentsDictionary:(id)arg4 usersDictionary:(id)arg5 withStreamOptions:(unsigned long long)arg6 account:(id)arg7 scriber:(id)arg8;
- (_Bool)shouldTolerateMissingModelObjectsInTimelinePlistDictionaries;
- (_Bool)populateModelObjectsInTimelinePlistDictionaryWithStatuses:(id)arg1 users:(id)arg2;
- (id)allUserIDsInTimelinePlistDictionary;
- (id)allStatusIDsInTimelinePlistDictionary;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (void)prependStreamObjects:(id)arg1;
- (void)appendStreamObjects:(id)arg1;
- (_Bool)shouldBeSerialized;
- (void)filterAndReplaceStreamObjectsWithFilter:(CDUnknownBlockType)arg1;
- (void)filterStreamObjectsWithFilter:(CDUnknownBlockType)arg1;
- (id)streamObjects;
@property(readonly, copy) NSString *description;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (void)prependObjects:(id)arg1;
- (void)prependObject:(id)arg1;
- (_Bool)_checkRemovalOfTimelineObject:(id)arg1 matchingEntryIDs:(id)arg2 statusIDs:(id)arg3 conversationFocalStatusIDs:(id)arg4 scribe:(id)arg5 scribeAction:(id)arg6 scribeElement:(id)arg7 scribePage:(id)arg8;
- (void)removeItemsWithEntryIDs:(id)arg1 statusIDs:(id)arg2 minimumModuleSize:(long long)arg3 conversationFocalStatusIDs:(id)arg4 scribe:(id)arg5 scribeAction:(id)arg6 scribeElement:(id)arg7 scribePage:(id)arg8;
- (void)removeItemsSharingEntryIDsWithStreamObjects:(id)arg1 scribe:(id)arg2 scribeAction:(id)arg3 scribeElement:(id)arg4 scribePage:(id)arg5;
- (id)statuses;
- (_Bool)isEmpty;
- (id)initWithRichTimelineResponse:(id)arg1 account:(id)arg2 streamOptions:(unsigned long long)arg3 loadSource:(long long)arg4 scriber:(id)arg5;
- (id)initWithObjects:(id)arg1 pinnedObject:(id)arg2 cursor:(id)arg3 loadSource:(long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

