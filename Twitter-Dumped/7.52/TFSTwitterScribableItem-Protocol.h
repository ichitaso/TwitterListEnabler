//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol TFSTwitterScribableItem <NSObject>
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;

@optional
@property(readonly, nonatomic) NSString *scribeElement;
@property(readonly, nonatomic) NSString *scribeComponent;
@property(nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(nonatomic) unsigned long long isDuplicateContentIDInstance;
- (NSString *)scribeItemContentID;
- (NSString *)scribeItemFirstImpressionID;
@end

