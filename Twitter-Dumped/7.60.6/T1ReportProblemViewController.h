//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNFormViewController.h>

#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>

@class NSString, T1ReportProblem, T1ReportProblemForm, TFNTwitterAccount;

@interface T1ReportProblemViewController : TFNFormViewController <T1TwitterAuthenticated>
{
    T1ReportProblemForm *_reportProblemForm;
    T1ReportProblem *_reportProblemApi;
    TFNTwitterAccount *_account;
}

@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)formFieldShouldShowRequiredHint:(id)arg1;
- (id)submitButton;
- (void)submitForm;
- (void)_handleLogsGathered;
- (void)update:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

