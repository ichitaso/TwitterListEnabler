//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <T1Twitter/TLTBackgroundFetchManagerDelegate-Protocol.h>
#import <T1Twitter/UIApplicationDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, T1AppEventHandler, T1ComposeState, TLTBackgroundFetchManager, UIViewController, UIWindow;

@interface T1AppDelegate : UIResponder <UIApplicationDelegate, TLTBackgroundFetchManagerDelegate>
{
    _Bool _startCalled;
    NSDictionary *_finishStartingOnForegroundWithOptions;
    NSArray *_didEnterBackgroundOperations;
    NSString *_bgFetchRestartSuppressionToken;
    UIWindow *_window;
    T1ComposeState *_currentComposeState;
    TLTBackgroundFetchManager *_backgroundFetchManager;
    T1AppEventHandler *_eventHandler;
}

+ (id)userAgentProvider;
+ (id)pushRegistration;
+ (id)signedOutViewControllerFactory;
+ (id)launchTransitionProvider;
+ (id)buildTime;
+ (id)willEnterForegroundStopwatch;
+ (void)load;
@property(readonly, nonatomic) T1AppEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) TLTBackgroundFetchManager *backgroundFetchManager; // @synthesize backgroundFetchManager=_backgroundFetchManager;
@property(readonly, nonatomic) T1ComposeState *currentComposeState; // @synthesize currentComposeState=_currentComposeState;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)_t1_hearingAidStatusChanged;
- (void)_t1_reduceTransparencyStatusChanged;
- (void)_t1_reduceMotionStatusChanged;
- (void)_t1_invertColorsStatusChanged;
- (void)_t1_guidedAccessStatusChanged;
- (void)_t1_grayscaleStatusChanged;
- (void)_t1_darkerSystemColorsStatusChanged;
- (void)_t1_boldTextStatusChanged;
- (void)_t1_switchControlStatusChanged;
- (void)_t1_voiceOverStatusChanged;
- (void)_t1_fontSizeDidChange;
- (void)_t1_dynamicColorsWillReloadNotification:(id)arg1;
- (void)_t1_updateAccessibilitySettingsIgnoreInvertColors:(_Bool)arg1;
- (void)_t1_addAccessibilityNotificationObservers;
- (void)_t1_performAccessibilityStatusChangeScribeForAction:(id)arg1;
- (void)_t1_cancelDidEnterBackgroundOperations;
- (void)_t1_unarchiveAppInactiveTimeStamp;
- (void)_t1_archiveAppInactiveTimeStamp;
- (void)_t1_scribeMemoryUsageBeforeSuspension;
- (void)_t1_scribeActionCompletedLastEnterBackgroundTask;
- (void)_t1_scribeActionBecomeInactive;
- (void)_t1_scribeTimeInCurrentOrientation;
- (void)_t1_scribeAppDidEnterForeground;
- (void)_t1_scribeLaunchPerformanceEventsFromPush:(_Bool)arg1;
- (id)_t1_scribe;
- (id)_t1_currentAccount;
- (void)_t1_updateBackgroundFetchInterval;
- (double)_t1_backgroundFetchInterval;
- (void)backgroundFetchManager:(id)arg1 didCompleteBackgroundFetchWithResult:(unsigned long long)arg2 reason:(long long)arg3;
- (void)backgroundFetchManager:(id)arg1 willCompleteBackgroundFetchWithResult:(unsigned long long)arg2 reason:(long long)arg3;
- (void)backgroundFetchManagerDidBeginBackgroundFetch:(id)arg1;
- (void)backgroundFetchManagerWillBeginBackgroundFetch:(id)arg1;
- (void)_t1_applicationDidEnterBackground:(id)arg1;
- (void)_t1_applicationWillResignActive:(id)arg1;
- (void)_t1_applicationDidBecomeActive:(id)arg1;
- (void)_t1_applicationWillEnterForeground:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_t1_openURL:(id)arg1 options:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_t1_continueUserActivity:(id)arg1;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)application:(id)arg1 didChangeStatusBarOrientation:(long long)arg2;
- (void)application:(id)arg1 willChangeStatusBarOrientation:(long long)arg2 duration:(double)arg3;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)_t1_didFinishStartingWithOptions:(id)arg1;
- (void)_t1_startWithOptions:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (id)appNavigationProviderFactory;
- (void)applicationDidTransitionToSize:(struct CGSize)arg1;
- (void)applicationWillTransitionToSize:(struct CGSize)arg1;
- (void)applicationDidTransitionFromSignedOut;
- (void)continueUserActivity:(id)arg1;
- (void)openURL:(id)arg1 options:(id)arg2;
- (void)startWithOptions:(id)arg1;
@property(readonly, nonatomic) UIViewController *topViewController;
- (id)nextResponder;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

