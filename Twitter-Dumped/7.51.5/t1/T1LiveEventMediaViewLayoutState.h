//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1BroadcastContainerViewLayoutState;

@interface T1LiveEventMediaViewLayoutState : NSObject
{
    T1BroadcastContainerViewLayoutState *_broadcastContainerViewLayoutState;
    struct CGRect _broadcastContainerViewFrame;
    struct CGRect _videoContainerViewFrame;
}

@property(retain, nonatomic) T1BroadcastContainerViewLayoutState *broadcastContainerViewLayoutState; // @synthesize broadcastContainerViewLayoutState=_broadcastContainerViewLayoutState;
@property(nonatomic) struct CGRect videoContainerViewFrame; // @synthesize videoContainerViewFrame=_videoContainerViewFrame;
@property(nonatomic) struct CGRect broadcastContainerViewFrame; // @synthesize broadcastContainerViewFrame=_broadcastContainerViewFrame;
- (void).cxx_destruct;

@end

