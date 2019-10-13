//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterStatusCardDataSource-Protocol.h>

@class NSDictionary, NSString, TFNTwitterCardData, TFNTwitterPromotedContent;
@protocol TFNTwitterCanonicalTimelineStatus, TFNTwitterCardDataSourceObject;

@interface TFNTwitterStatusCardDataSource : NSObject <TFNTwitterStatusCardDataSource>
{
    // Error parsing type: {?="lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"predicate"{atomic_flag="_Value"AB}}, name: _scribeItemToken
    TFNTwitterCardData *_cardData;
    NSDictionary *_cardEvent;
    TFNTwitterPromotedContent *_promotedContent;
    NSDictionary *_scribeItem;
    id <TFNTwitterCanonicalTimelineStatus> _status;
    CDUnknownBlockType _buildScribeItem;
}

+ (id)cardDataForStatus:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType buildScribeItem; // @synthesize buildScribeItem=_buildScribeItem;
@property(readonly, nonatomic) id <TFNTwitterCanonicalTimelineStatus> status; // @synthesize status=_status;
@property(readonly, nonatomic) TFNTwitterPromotedContent *promotedContent; // @synthesize promotedContent=_promotedContent;
@property(readonly, nonatomic) TFNTwitterCardData *cardData; // @synthesize cardData=_cardData;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <TFNTwitterCardDataSourceObject> sourceObject;
- (id)entityForURL:(id)arg1;
@property(readonly, nonatomic) NSDictionary *cardEvent; // @synthesize cardEvent=_cardEvent;
- (long long)sourceID;
@property(readonly, nonatomic) NSDictionary *scribeItem; // @synthesize scribeItem=_scribeItem;
- (id)initWithStatus:(id)arg1 promotedContent:(id)arg2 cardData:(id)arg3 buildScribeItem:(CDUnknownBlockType)arg4;
- (id)initWithStatus:(id)arg1 promotedContent:(id)arg2 buildScribeItem:(CDUnknownBlockType)arg3;
- (id)initWithStatus:(id)arg1 promotedContent:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

