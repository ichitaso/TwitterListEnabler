//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNScrollBumpCell.h>

#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSDictionary, NSMutableSet, NSString, T1PeopleDiscoveryCarouselTableRowAdapter, TFSTwitterScribeContext;

@interface T1PeopleDiscoveryCarouselScrollBumpCell : TFNScrollBumpCell <TFNLayoutMetricsEnvironment>
{
    T1PeopleDiscoveryCarouselTableRowAdapter *_tableRowAdapter;
    TFSTwitterScribeContext *_baseScribeContext;
    NSDictionary *_options;
    NSMutableSet *_keysForEventsScribed;
}

@property(retain, nonatomic) NSMutableSet *keysForEventsScribed; // @synthesize keysForEventsScribed=_keysForEventsScribed;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) TFSTwitterScribeContext *baseScribeContext; // @synthesize baseScribeContext=_baseScribeContext;
@property(nonatomic) __weak T1PeopleDiscoveryCarouselTableRowAdapter *tableRowAdapter; // @synthesize tableRowAdapter=_tableRowAdapter;
- (void).cxx_destruct;
- (id)scribeContextForPageIndex:(unsigned long long)arg1;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)updatePageInsetsForLayoutMetrics:(id)arg1 controller:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

