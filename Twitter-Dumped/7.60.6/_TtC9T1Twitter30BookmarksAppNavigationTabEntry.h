//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1TabView;
@protocol T1AppNavigationTabEntryContentControllerFactory;

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter30BookmarksAppNavigationTabEntry : NSObject
{
    // Error parsing type: , name: panelID
    // Error parsing type: , name: tabView
    // Error parsing type: , name: account
}

- (void).cxx_destruct;
- (id)init;
- (id)createContentController;
@property(nonatomic, readonly) id <T1AppNavigationTabEntryContentControllerFactory> contentControllerFactory;
@property(nonatomic, readonly) T1TabView *tabView; // @synthesize tabView;
@property(nonatomic, readonly) long long panelID; // @synthesize panelID;

@end

