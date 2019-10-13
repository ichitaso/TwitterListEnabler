//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSDictionary, NSString;
@protocol T1BasicStatusView;

@interface T1StatusViewScribableItem : NSObject <TFSTwitterScribableItem>
{
    id <T1BasicStatusView> _statusView;
}

@property(readonly, nonatomic) __weak id <T1BasicStatusView> statusView; // @synthesize statusView=_statusView;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property(nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(nonatomic) unsigned long long isDuplicateContentIDInstance;
- (id)scribeItemContentID;
- (id)scribeItemFirstImpressionID;
- (id)init;
- (id)initWithStatusView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *scribeComponent;
@property(readonly, nonatomic) NSString *scribeElement;
@property(readonly) Class superclass;

@end

