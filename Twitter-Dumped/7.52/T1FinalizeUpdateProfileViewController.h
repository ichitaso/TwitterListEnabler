//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>
#import <T1Twitter/TFNLayoutMetricsEnvironment-Protocol.h>

@class NSArray, NSString, T1UserProfileExampleView, TFNButton, TFNTwitterAccount, UIButton, UILabel, UIView;

@interface T1FinalizeUpdateProfileViewController : TFNViewController <TFNLayoutMetricsEnvironment, T1TwitterAuthenticated>
{
    TFNTwitterAccount *_account;
    CDUnknownBlockType _dismissHandler;
    unsigned long long _orientationMask;
    UIButton *_closeButton;
    UIView *_containerView;
    UILabel *_explanationLabel;
    T1UserProfileExampleView *_exampleView;
    TFNButton *_doneButton;
    NSArray *_constraints;
}

@property(readonly, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) TFNButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) T1UserProfileExampleView *exampleView; // @synthesize exampleView=_exampleView;
@property(readonly, nonatomic) UILabel *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) unsigned long long orientationMask; // @synthesize orientationMask=_orientationMask;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_t1_dismissViewAndShowProfile;
- (void)_t1_dismissView;
- (void)_t1_dismissViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)layoutMetricsDidChange:(id)arg1;
- (void)setupConstraints;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

