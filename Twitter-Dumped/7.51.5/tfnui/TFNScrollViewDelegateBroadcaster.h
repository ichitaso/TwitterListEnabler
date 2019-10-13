//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TFNProgrammaticScrollViewDelegate-Protocol.h>

@class NSArray, NSHashTable, NSSet, NSString;
@protocol UIScrollViewDelegate;

@interface TFNScrollViewDelegateBroadcaster : NSObject <TFNProgrammaticScrollViewDelegate>
{
    id <UIScrollViewDelegate> _primaryDelegate;
    NSHashTable *_weakObservers;
    NSSet *_broadcastSelectors;
}

@property(readonly, copy, nonatomic) NSSet *broadcastSelectors; // @synthesize broadcastSelectors=_broadcastSelectors;
@property(readonly, copy, nonatomic) NSHashTable *weakObservers; // @synthesize weakObservers=_weakObservers;
@property(readonly, nonatomic) __weak id <UIScrollViewDelegate> primaryDelegate; // @synthesize primaryDelegate=_primaryDelegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_invokeBlockForObservers:(CDUnknownBlockType)arg1 respondingToSelector:(SEL)arg2;
- (void)_invokeScrollViewDelegate:(SEL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)scrollViewDidScrollProgrammatically:(id)arg1 animated:(_Bool)arg2;
- (void)scrollViewWillScrollProgrammatically:(id)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)_isBroadcastSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(readonly, nonatomic) NSArray *observers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithPrimaryDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

