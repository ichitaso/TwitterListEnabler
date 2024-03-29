//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TFNExecutionContext-Protocol.h>

@class NSArray, NSString, UIResponder, UIWindow;

@interface TFNTestingExecutionContext : NSObject <TFNExecutionContext>
{
    _Bool statusBarHidden;
    UIResponder *currentFirstResponder;
    UIWindow *delegateWindow;
    long long applicationState;
    UIWindow *keyWindow;
    long long statusBarOrientation;
    long long statusBarStyle;
    NSArray *windows;
    long long userInterfaceLayoutDirection;
    NSString *preferredContentSizeCategory;
    struct CGRect statusBarFrame;
}

@property(readonly, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory;
@property(readonly, nonatomic) long long userInterfaceLayoutDirection; // @synthesize userInterfaceLayoutDirection;
@property(readonly, nonatomic) NSArray *windows; // @synthesize windows;
@property(readonly, nonatomic) long long statusBarStyle; // @synthesize statusBarStyle;
@property(readonly, nonatomic) long long statusBarOrientation; // @synthesize statusBarOrientation;
@property(readonly, nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden; // @synthesize statusBarHidden;
@property(readonly, nonatomic) struct CGRect statusBarFrame; // @synthesize statusBarFrame;
@property(readonly, nonatomic) UIWindow *keyWindow; // @synthesize keyWindow;
@property(readonly, nonatomic) long long applicationState; // @synthesize applicationState;
@property(readonly, nonatomic) UIWindow *delegateWindow; // @synthesize delegateWindow;
@property(readonly, nonatomic) UIResponder *currentFirstResponder; // @synthesize currentFirstResponder;
- (void).cxx_destruct;
- (void)savePreferredContentSizeCategory:(id)arg1;
@property(readonly, nonatomic) _Bool supportsHorizontalRegularSizeClass;
@property(readonly, nonatomic) _Bool supportsWindows;
@property(readonly, nonatomic, getter=isFullscreen) _Bool fullscreen;
- (void)endIgnoringInteractionEvents;
- (void)beginIgnoringInteractionEvents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

