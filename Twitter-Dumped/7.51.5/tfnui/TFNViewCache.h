//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TFSLRUDictionary;

@interface TFNViewCache : NSObject
{
    CDUnknownBlockType _didEvictViewBlock;
    TFSLRUDictionary *_viewCache;
    NSMutableDictionary *_viewMetadata;
}

@property(readonly, nonatomic) NSMutableDictionary *viewMetadata; // @synthesize viewMetadata=_viewMetadata;
@property(readonly, nonatomic) TFSLRUDictionary *viewCache; // @synthesize viewCache=_viewCache;
@property(copy, nonatomic) CDUnknownBlockType didEvictViewBlock; // @synthesize didEvictViewBlock=_didEvictViewBlock;
- (void).cxx_destruct;
- (void)_tfn_didReceiveMemoryWarning;
- (void)_tfn_viewCacheDidEvictView:(id)arg1 forKey:(id)arg2;
- (id)_tfn_existingViewMetadataForIdentifier:(id)arg1;
- (void)removeAllViews;
- (void)enqueueView:(id)arg1 forIdentifier:(id)arg2;
- (id)dequeueViewForIdentifier:(id)arg1;
@property(nonatomic) unsigned long long viewCountLimit;
- (id)initWithViewCountLimit:(long long)arg1;
- (id)init;

@end

