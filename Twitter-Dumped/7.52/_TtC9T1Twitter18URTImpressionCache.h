//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter18URTImpressionCache : NSObject
{
    // Error parsing type: , name: impressionCacheStore
    // Error parsing type: , name: cache
    // Error parsing type: , name: backgroundingObserver
}

- (void).cxx_destruct;
- (id)init;
- (id)entryWithEntryID:(id)arg1 contentID:(id)arg2 impressionDuration:(unsigned long long)arg3;
- (void)removeAllEntries;
- (id)seenIDsForContentIDPrefix:(id)arg1 sinceLastInvocation:(_Bool)arg2 maxCount:(unsigned long long)arg3;
- (long long)countForContentID:(id)arg1;
- (_Bool)containsEntry:(id)arg1 withMinImpressionDuration:(unsigned long long)arg2;
- (long long)countForContentIDAfterAddingOrUpdatingEntry:(id)arg1;
- (void)dealloc;

@end

