//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1UnifiedCardComponentViewLayoutDelegate-Protocol.h>
#import <T1Twitter/TFNLayoutableViewLayoutDelegate-Protocol.h>

@class NSString;

@interface T1UnifiedCardButtonGroupComponentViewLayoutDelegate : NSObject <T1UnifiedCardComponentViewLayoutDelegate, TFNLayoutableViewLayoutDelegate>
{
}

- (void)layoutSubviewsForLayoutableView:(id)arg1;
- (_Bool)isLayoutState:(id)arg1 validForComponent:(id)arg2 isLastComponent:(_Bool)arg3 layoutMetrics:(id)arg4;
- (id)layoutStateForComponent:(id)arg1 isLastComponent:(_Bool)arg2 width:(double)arg3 layoutMetrics:(id)arg4 previousLayoutState:(id)arg5 account:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

