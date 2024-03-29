//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/T1AppLaunchTransitionDelegate-Protocol.h>
#import <T1Twitter/T1OnboardingFlowControllerDelegate-Protocol.h>
#import <T1Twitter/T1SignedOutNavigation-Protocol.h>
#import <T1Twitter/TFNPresentationInterceptor-Protocol.h>

@class NSString, T1OnboardingFlowAssistant, T1OnboardingFlowController, T1OnboardingFlowMonitor, T1URLProtocolDefaultHandlerEvent, TFNTwitterAdsTPMIdSyncManager;
@protocol T1AppNavigationProvider, T1AppNavigationProviderFactory, T1LaunchTransitionProvider, T1OnboardingFlow, T1SignedOutViewControllerFactory;

@interface T1HostViewController : UIViewController <T1OnboardingFlowControllerDelegate, T1AppLaunchTransitionDelegate, TFNPresentationInterceptor, T1SignedOutNavigation>
{
    _Bool _showedSignedOutScreen;
    _Bool _performingLaunchTransition;
    UIViewController *_currentViewController;
    id <T1LaunchTransitionProvider> _launchTransitionProvider;
    T1URLProtocolDefaultHandlerEvent *_pendingLoggedInURLEvent;
    CDUnknownBlockType _launchTransitionCompletion;
    CDUnknownBlockType _onboardingFlowCompletion;
    id <T1AppNavigationProviderFactory> _appNavigationProviderFactory;
    id <T1SignedOutViewControllerFactory> _signedOutViewControllerFactory;
    T1OnboardingFlowAssistant *_signUpFlowAssistant;
    T1OnboardingFlowController *_onboardingFlowController;
    T1OnboardingFlowMonitor *_signedInOnboardingFlowMonitor;
    T1OnboardingFlowMonitor *_signedOutOnboardingFlowMonitor;
    TFNTwitterAdsTPMIdSyncManager *_tpmIdSyncManager;
    UIViewController<T1AppNavigationProvider> *_appNavigationController;
}

+ (id)sharedHostViewController;
+ (void)createSharedHostViewControllerForAppEventHandler:(id)arg1 fromSelector:(SEL)arg2 appNavigationProviderFactory:(id)arg3 signedOutViewControllerFactory:(id)arg4;
@property(retain, nonatomic) UIViewController<T1AppNavigationProvider> *appNavigationController; // @synthesize appNavigationController=_appNavigationController;
@property(retain, nonatomic) TFNTwitterAdsTPMIdSyncManager *tpmIdSyncManager; // @synthesize tpmIdSyncManager=_tpmIdSyncManager;
@property(retain, nonatomic) T1OnboardingFlowMonitor *signedOutOnboardingFlowMonitor; // @synthesize signedOutOnboardingFlowMonitor=_signedOutOnboardingFlowMonitor;
@property(retain, nonatomic) T1OnboardingFlowMonitor *signedInOnboardingFlowMonitor; // @synthesize signedInOnboardingFlowMonitor=_signedInOnboardingFlowMonitor;
@property(retain, nonatomic) T1OnboardingFlowController *onboardingFlowController; // @synthesize onboardingFlowController=_onboardingFlowController;
@property(retain, nonatomic) T1OnboardingFlowAssistant *signUpFlowAssistant; // @synthesize signUpFlowAssistant=_signUpFlowAssistant;
@property(retain, nonatomic) id <T1SignedOutViewControllerFactory> signedOutViewControllerFactory; // @synthesize signedOutViewControllerFactory=_signedOutViewControllerFactory;
@property(retain, nonatomic) id <T1AppNavigationProviderFactory> appNavigationProviderFactory; // @synthesize appNavigationProviderFactory=_appNavigationProviderFactory;
@property(copy, nonatomic) CDUnknownBlockType onboardingFlowCompletion; // @synthesize onboardingFlowCompletion=_onboardingFlowCompletion;
@property(copy, nonatomic) CDUnknownBlockType launchTransitionCompletion; // @synthesize launchTransitionCompletion=_launchTransitionCompletion;
@property(nonatomic, getter=isPerformingLaunchTransition) _Bool performingLaunchTransition; // @synthesize performingLaunchTransition=_performingLaunchTransition;
@property(retain, nonatomic) T1URLProtocolDefaultHandlerEvent *pendingLoggedInURLEvent; // @synthesize pendingLoggedInURLEvent=_pendingLoggedInURLEvent;
@property(retain, nonatomic) id <T1LaunchTransitionProvider> launchTransitionProvider; // @synthesize launchTransitionProvider=_launchTransitionProvider;
@property(readonly, nonatomic) _Bool showedSignedOutScreen; // @synthesize showedSignedOutScreen=_showedSignedOutScreen;
@property(readonly, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void).cxx_destruct;
- (id)scribeSection;
- (id)scribe;
- (void)_t1_configureSharedViewCacheForAccount:(id)arg1;
- (_Bool)_t1_canHandleDecreaseTextSizeKeyCommand;
- (void)handleDecreaseTextSizeKeyCommand;
- (_Bool)_t1_canHandleIncreaseTextSizeKeyCommand;
- (void)handleIncreaseTextSizeKeyCommand;
- (_Bool)_t1_canHandleDefaultTextSizeKeyCommand;
- (void)handleDefaultTextSizeKeyCommand;
- (void)handleDarkModeKeyCommand;
- (id)keyCommands;
- (_Bool)_t1_canPerformActionForKeyCommand:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)applicationDidEnterBackground;
- (void)processPendingLoggedInEvent;
- (_Bool)handleURL:(id)arg1 context:(id)arg2;
- (void)_didDismissViewController:(id)arg1;
- (id)viewController:(id)arg1 willPresentWithPresentationInfo:(id)arg2;
- (id)tfs_debugStrings;
- (void)flowController:(id)arg1 stateDidChange:(long long)arg2 withAccount:(id)arg3 flowStatus:(long long)arg4;
- (void)_signInToAccountWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_signUpWithCompletion:(CDUnknownBlockType)arg1;
- (void)showOnboardingFlowWithArguments:(id)arg1 source:(long long)arg2 cancellable:(_Bool)arg3 completion:(CDUnknownBlockType)arg4 flowCompletion:(CDUnknownBlockType)arg5;
- (void)showLoginFlowWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showSignupFlowWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)showLoginPrefilledWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleRootViewControllerSetupWithAccount:(id)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)saveViewControllerState;
- (long long)currentPanelID;
- (void)appLaunchTransition:(id)arg1 logoWillBeVisibleForDuration:(double)arg2;
- (void)appLaunchTransitionDidFinish:(id)arg1;
- (void)_runAppLaunchTransitionForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerOnboardingFlow:(id)arg1 keepAlive:(_Bool)arg2 signedIn:(_Bool)arg3;
@property(readonly, nonatomic) id <T1OnboardingFlow> signedOutOnboardingFlow;
@property(readonly, nonatomic) id <T1OnboardingFlow> signedInOnboardingFlow;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupWithAccount:(id)arg1;
- (void)viewSignedOut;
- (void)viewAccount:(id)arg1 withPanelID:(long long)arg2 preserveModals:(_Bool)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)viewAccount:(id)arg1 withPanelID:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)viewAccount:(id)arg1 withPanelID:(long long)arg2 animated:(_Bool)arg3;
- (void)viewAccount:(id)arg1 animated:(_Bool)arg2;
- (void)_requestAnalyticsIdBlobsIfNecessaryForAccount:(id)arg1;
- (void)_registerCardsForAccount:(id)arg1;
- (void)_t1_accountFeatureSwitchesDidUpdate:(id)arg1;
- (id)appNavigationDocking;
- (id)appNavigation;
- (id)currentAccount;
- (void)_useViewController:(id)arg1 forAccount:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

