//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNViewCache;

@interface TFNPrefetchingViewCache : NSObject
{
    CDUnknownBlockType _didEvictReservedViewBlock;
    TFNViewCache *_genericViews;
    TFNViewCache *_reservedViews;
}

@property(readonly, nonatomic) TFNViewCache *reservedViews; // @synthesize reservedViews=_reservedViews;
@property(readonly, nonatomic) TFNViewCache *genericViews; // @synthesize genericViews=_genericViews;
@property(copy, nonatomic) CDUnknownBlockType didEvictReservedViewBlock; // @synthesize didEvictReservedViewBlock=_didEvictReservedViewBlock;
- (void).cxx_destruct;
- (void)_tfn_didEvictReservedView:(id)arg1 forIdentifier:(id)arg2;
- (void)removeAllViews;
- (void)putView:(id)arg1 withIdentifier:(id)arg2;
- (void)putView:(id)arg1 withIdentifier:(id)arg2 forModelIdentifier:(id)arg3;
- (id)entryForViewWithIdentifier:(id)arg1 modelIdentifier:(id)arg2;
@property(nonatomic) unsigned long long modelBoundViewCountLimit;
@property(nonatomic) unsigned long long generalViewCountLimit;
- (id)init;

@end

