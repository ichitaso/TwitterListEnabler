//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TFNTwitterLiveBannerEntry, TFNTwitterLiveBannerItemAndIndexTuple;

@interface TFNTwitterSuggestsTimelineStreamDismissedLiveBannerItemInfo : NSObject
{
    TFNTwitterLiveBannerItemAndIndexTuple *_directlyDismissedItem;
    NSArray *_additionalDismissedItems;
    TFNTwitterLiveBannerEntry *_entry;
}

@property(readonly, nonatomic) TFNTwitterLiveBannerEntry *entry; // @synthesize entry=_entry;
@property(readonly, nonatomic) NSArray *additionalDismissedItems; // @synthesize additionalDismissedItems=_additionalDismissedItems;
@property(readonly, nonatomic) TFNTwitterLiveBannerItemAndIndexTuple *directlyDismissedItem; // @synthesize directlyDismissedItem=_directlyDismissedItem;
- (void).cxx_destruct;
- (id)initWithDirectlyDismissedItem:(id)arg1 additionalDismissedItems:(id)arg2 entry:(id)arg3;

@end

