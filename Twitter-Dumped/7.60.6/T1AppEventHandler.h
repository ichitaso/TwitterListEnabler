//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <T1Twitter/CrashlyticsDelegate-Protocol.h>
#import <T1Twitter/TFNBugReporterDelegate-Protocol.h>
#import <T1Twitter/TFNFloatingButtonDelegate-Protocol.h>
#import <T1Twitter/TFNTooltipManagerDataSource-Protocol.h>
#import <T1Twitter/TFSAuthCredentialStateTransitionDelegate-Protocol.h>
#import <T1Twitter/TFSTwitterRecurringTaskServiceObserver-Protocol.h>
#import <T1Twitter/TGFLogger-Protocol.h>
#import <T1Twitter/TIPLogger-Protocol.h>
#import <T1Twitter/TNLLogger-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSOperation, NSString, T1AppBadging, T1AppLaunchOptionsInfo, T1AppServicesManager, T1ExternallyBlockedUserContentEradicationOperation, T1NotificationHandler, T1UserReviewPrompt, TFNFloatingButton, TFNTwitterLaunchWatchdog;

@interface T1AppEventHandler : UIResponder <TFSTwitterRecurringTaskServiceObserver, TFNBugReporterDelegate, TFNFloatingButtonDelegate, TNLLogger, TIPLogger, TGFLogger, CrashlyticsDelegate, TFSAuthCredentialStateTransitionDelegate, TFNTooltipManagerDataSource>
{
    TFNFloatingButton *_floatingButton;
    NSMutableDictionary *_passwordNotificationDates;
    NSMutableDictionary *_clockSkewNotificationDates;
    unsigned long long _saveStateBackgroundTaskIdentifier;
    long long _appState;
    T1AppServicesManager *_appServicesManager;
    T1AppBadging *_appBadging;
    T1NotificationHandler *_notificationHandler;
    T1AppLaunchOptionsInfo *_launchOptionsInfo;
    TFNTwitterLaunchWatchdog *_launchWatchdog;
    long long _initialPanelID;
    CDUnknownBlockType _shortcutActionCompletionBlock;
    NSMutableArray *_operationsToCancelOnAppTermination;
    NSOperation *_registerDeviceTokenOperation;
    NSOperation *_initialBadgeOperation;
    NSOperation *_deepLinkHandlerOperation;
    NSOperation *_redirectDeepLinkHandler;
    NSOperation *_scribeDeepLinkOperation;
    T1UserReviewPrompt *_userReviewPrompt;
    NSMutableArray *_nonFatalErrorsDuringStartup;
    struct {
        unsigned int handledURLOnForeground:1;
        unsigned int continuedUserActivity:1;
        unsigned int showedComposerOnLaunch:1;
        unsigned int shouldDeferTasksRequiringAccountsWhenApplicationDidLaunch:1;
        unsigned int shouldTryToRegisterDeviceToken:1;
        unsigned int disableWatchdog:1;
        unsigned int streamDidUpdate:1;
        unsigned int isUserReady:1;
        unsigned int didLogFirstDMRefresh:1;
    } _flags;
    T1ExternallyBlockedUserContentEradicationOperation *_blockedContentEradicationOperation;
}

+ (id)_t1_clientAppIdentificationProvider;
+ (void)_t1_configureProtocolRoutingHandlers:(id)arg1;
+ (id)_t1_defaultProtocolHandlerContextWithURLSource:(long long)arg1 sourceAppBundleID:(id)arg2 externallyReferred:(_Bool)arg3;
+ (id)_t1_defaultProtocolHandlerContextWithURLSource:(long long)arg1 sourceAppBundleID:(id)arg2;
+ (id)_t1_defaultProtocolHandlerContextWithURLSource:(long long)arg1 externallyReferred:(_Bool)arg2;
+ (id)_t1_defaultProtocolHandlerContextWithURLSource:(long long)arg1;
+ (id)_t1_defaultRoutingProtocolHandler;
+ (id)currentAccountID;
+ (void)onApplicationDelegateLoad;
@property(retain, nonatomic) T1ExternallyBlockedUserContentEradicationOperation *blockedContentEradicationOperation; // @synthesize blockedContentEradicationOperation=_blockedContentEradicationOperation;
- (void).cxx_destruct;
- (void)tip_problemWasEncountered:(id)arg1 userInfo:(id)arg2;
- (void)_t1_dmDidRefresh:(id)arg1;
- (long long)_t1_initialPanelID;
- (void)_t1_promptUserToRateAppConditionally;
- (void)_t1_updateUserReviewPromptConsecutiveUsageCount;
- (void)_t1_userDidTweet:(id)arg1;
- (void)_t1_userDidFavorite:(id)arg1;
- (void)_t1_twitterAccountDidUpdate:(id)arg1;
- (void)_t1_appAccountsDidChange:(id)arg1;
- (void)_t1_accountDidBecomeInactive:(id)arg1;
- (void)_t1_activeAccountDidChange:(id)arg1;
- (void)_t1_updateLoggingAlertScribeOutputStreamWithAccount:(id)arg1;
- (void)_t1_appAccountsDidFinishLoading:(id)arg1;
- (void)_t1_fontSizeDidChange:(id)arg1;
- (void)_t1_updateLayoutMetricsContentFontForCurrentWindowSize;
- (void)_t1_resetLayoutMetricsTransitionDestinationContentFont;
- (void)_t1_updateLayoutMetricsTransitionDestinationContentFontForWindowSize:(struct CGSize)arg1;
- (void)onApplicationDidTransitionToSize:(struct CGSize)arg1;
- (void)onApplicationWillTransitionToSize:(struct CGSize)arg1;
- (void)_t1_endBackgroundTask;
- (void)_t1_saveBackgroundTimestampForHomeBackgroundFetch;
- (void)_t1_saveStateSavingStreamsAsynchronously:(_Bool)arg1;
- (void)_t1_saveViewControllerState;
- (void)saveCurrentComposeState;
- (void)saveApplicationGlobalState;
- (void)_t1_startWorkForApplicationUpgrade;
- (void)_t1_scribeApplicationLaunchAction;
- (void)_t1_enqueueHandleLaunchURL;
- (_Bool)_t1_didOpenFromURLOrPush;
- (_Bool)_t1_didOpenFromURL;
- (void)_t1_twitterFeatureSwitchesDidUpdate:(id)arg1;
- (void)_t1_currentLocaleDidChange:(id)arg1;
- (void)_t1_timelineDidDeserialize:(id)arg1;
- (void)_t1_networkExecutionsUpdated:(id)arg1;
- (void)_t1_tryToRegisterDeviceToken;
- (void)_t1_trackFirstLaunchWithOptions:(id)arg1;
- (id)_t1_scribe;
- (id)_t1_currentAccount;
- (id)defaultTooltipPresentationView;
- (void)onApplicationDidReceiveMemoryWarning;
- (void)onApplicationPerformActionForShortcutItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)onApplicationOpenURL:(id)arg1 options:(id)arg2;
- (void)onApplicationDidFailToRegisterForRemoteNotificationsWithError:(id)arg1;
- (void)onApplicationDidRegisterForRemoteNotificationsWithDeviceToken:(id)arg1;
- (void)onApplicationDidRegisterUserNotificationSettings:(id)arg1;
- (void)onApplicationHandleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 withResponseInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)onApplicationHandleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)onApplicationDidReceiveRemoteNotification:(id)arg1 fetchCompletionHandler:(CDUnknownBlockType)arg2;
- (void)onApplicationDidReceiveRemoteNotification:(id)arg1;
- (void)onApplicationDidReceiveLocalNotification:(id)arg1;
- (void)_t1_handleURLOnLaunch;
- (void)onBackgroundFetchManagerDidCompleteBackgroundFetchWithResult:(unsigned long long)arg1 reason:(long long)arg2;
- (void)onBackgroundFetchManagerWillCompleteBackgroundFetchWithResult:(unsigned long long)arg1 reason:(long long)arg2;
- (void)onBackgroundFetchManagerDidBeginBackgroundFetch;
- (void)onBackgroundFetchManagerWillBeginBackgroundFetch;
- (void)_t1_handleUniversalLink:(id)arg1 refererURL:(id)arg2 externallyReferred:(_Bool)arg3;
- (void)_t1_handleUniversalLink:(id)arg1 refererURL:(id)arg2;
- (_Bool)onApplicationContinueUserActivity:(id)arg1;
- (void)_t1_badgeCountDidUpdate:(id)arg1;
- (id)_t1_currentUserID;
- (id)_t1_userIDs;
- (void)onApplicationWillTerminate;
- (id)onApplicationDidEnterBackground;
- (void)_t1_scribeAppDidEnterForegroundBackgroundFetchDelta;
- (void)onApplicationWillEnterForegroundFromBackground;
- (void)onApplicationWillResignActive;
- (void)onApplicationDidBecomeActive;
- (_Bool)onApplicationStartWithOptions:(id)arg1;
- (void)onApplicationDidFinishLaunching;
- (void)_t1_configureFonts;
- (void)_t1_configureRightToLeftSupport;
- (void)_t1_configureColorPalette;
- (void)_t1_setUpAppLaunchTransition;
- (void)_t1_setUpTooltipManager;
- (void)_t1_setupMotionGraphicsContainer;
- (void)_t1_setupPeriscopeVectorGraphicsContainer;
- (void)_t1_scribeStartTimeSinceLastBackgroundWithScribe:(id)arg1;
- (void)onApplicationDidFinishStartingWithOptions:(id)arg1;
- (void)_t1_notifyLifecycleUserReadyStage;
- (void)_t1_unseenDMCountRecalculated:(id)arg1;
- (void)_t1_dmServiceDidReset:(id)arg1;
- (void)_t1_streamDidUpdate:(id)arg1;
- (void)promptToReviewNotificationSettingsIfNecessary;
- (void)onApplicationDidTransitionFromSignedOut;
- (void)_t1_twitterDidLaunchWithOptions:(id)arg1;
- (void)_t1_restoreComposerStateForAccount:(id)arg1;
- (_Bool)_t1_shouldUseCrashlyticsBetaButton;
- (void)_t1_scheduleFeatureSwitchesCrashlyticsLogger;
- (void)_t1_scheduleTvConnectionManager;
- (void)_t1_scheduleDeviceTokenRegistration;
- (id)_t1_accountForStartUpUsingPushAccount:(_Bool)arg1;
- (id)_t1_previousSessionAccount;
- (id)_t1_accountForStartUp;
- (void)_t1_configureUIOverrides;
- (void)_t1_startUI;
- (void)_t1_handleRootViewControllerSetupWithAccount:(id)arg1;
- (void)_t1_setupHostViewControllerWithAccount:(id)arg1;
- (void)_t1_startBackgroundFetchManager;
- (void)_t1_startScribingViewControllerLifecycleEvents;
- (void)onApplicationDelegateInit;
- (id)_t1_appCoreServicesConfiguration;
- (id)init;
- (void)recurringTaskService:(id)arg1 didEncounterProblem:(long long)arg2 userInfo:(id)arg3;
- (void)recurringTaskService:(id)arg1 didCompleteTask:(id)arg2 duration:(double)arg3;
- (void)recurringTaskService:(id)arg1 didTimeoutTask:(id)arg2 duration:(double)arg3;
- (void)recurringTaskService:(id)arg1 willBeginTask:(id)arg2;
- (void)recurringTaskService:(id)arg1 triggeredTask:(id)arg2 event:(id)arg3;
- (void)recurringTaskService:(id)arg1 unregisteredTask:(id)arg2;
- (void)recurringTaskService:(id)arg1 registeredTask:(id)arg2;
- (void)_t1_updateFloatingButtonVisibilityForAccount:(id)arg1;
- (void)_t1_accountDidBecomeActive:(id)arg1;
- (void)_t1_attachFloatingButton:(id)arg1;
- (void)_t1_subscribeToAccountChanges;
- (void)prepareBetaFeatures;
- (void)bugReporter:(id)arg1 didTriggerBugReport:(id)arg2;
- (void)floatingButtonWasHit:(id)arg1;
- (_Bool)tgf_canLogWithLevel:(long long)arg1;
- (void)tgf_logWithLevel:(long long)arg1 file:(id)arg2 function:(id)arg3 line:(int)arg4 message:(id)arg5;
- (_Bool)tip_canLogWithLevel:(long long)arg1;
- (void)tip_logWithLevel:(long long)arg1 file:(id)arg2 function:(id)arg3 line:(int)arg4 message:(id)arg5;
- (_Bool)tnl_shouldLogVerbosely;
- (_Bool)tnl_canLogWithLevel:(long long)arg1 context:(id)arg2;
- (void)tnl_logWithLevel:(long long)arg1 context:(id)arg2 file:(id)arg3 function:(id)arg4 line:(int)arg5 message:(id)arg6;
- (_Bool)tnl_shouldRedactHTTPHeaderField:(id)arg1;
- (void)bugReporter:(id)arg1 sendBugReport:(id)arg2 didCompleteWithResult:(long long)arg3;
- (id)contextForBugReporter:(id)arg1;
- (void)didFinishGatheringBugReportInfo;
- (void)willStartGatheringBugReportInfo;
- (void)crashlyticsDidDetectCrash:(id)arg1;
- (void)crashlyticsDidDetectReportForLastExecution:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_t1_scribeUserInfoItemsArrayForAccount:(id)arg1;
- (id)_t1_rootViewController;
- (void)_t1_presentErrorViewControllerWithMessage:(id)arg1 subtext:(id)arg2 cancelButtonTitle:(id)arg3 inputItem:(id)arg4;
- (void)_t1_notifyUserOfClockSkewAuthorizationFailure:(id)arg1;
- (void)_t1_dismissReauthViewController:(id)arg1;
- (void)_t1_notifyUserOfPasswordAuthorizationFailure:(id)arg1;
- (void)_t1_handleCredentialsStateChangeForAccountID:(id)arg1 fromState:(long long)arg2 toState:(long long)arg3 stateInfo:(id)arg4;
- (void)credentialStateDidChangeForAccountID:(id)arg1 fromState:(long long)arg2 toState:(long long)arg3 stateInfo:(id)arg4;
- (_Bool)isAuthenticationInProgress;
- (void)handleAccountRestrictedByBouncerFailureWithAccount:(id)arg1 info:(id)arg2;
- (void)handleClockSkewAuthorizationFailureWithAccount:(id)arg1;
- (void)reauthAccount:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

