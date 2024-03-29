//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, TDTViewControllerInfoAttachmentProvider, TFNBugReport;

@interface TFNBugReporter : NSObject <MFMailComposeViewControllerDelegate>
{
    TDTViewControllerInfoAttachmentProvider *_viewControllerInfoAttachmentProvider;
    NSMutableArray *_providers;
    NSMutableArray *_providerIDs;
    _Bool _busy;
    TFNBugReport *_bugReportTemplate;
}

+ (_Bool)canSendBugReport;
+ (id)sharedReporter;
@property(readonly, nonatomic) TFNBugReport *bugReportTemplate; // @synthesize bugReportTemplate=_bugReportTemplate;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_tfn_removeProviderAtIndex:(unsigned long long)arg1;
- (void)removeAttachmentProviderWithID:(id)arg1;
- (void)removeAttachmentProvider:(id)arg1;
- (id)addAttachmentProvider:(id)arg1;
- (void)_tfn_processProvider:(id)arg1 withContext:(id)arg2 intoSeperateAttachments:(id)arg3 orZipper:(id)arg4 pumpUIBetweenAttachments:(_Bool)arg5;
- (id)_tfn_generateBugReport:(id)arg1 withAttachments:(id)arg2 delegate:(id)arg3;
- (void)sendBugReport:(id)arg1 withPresentingViewController:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)triggerBugReport:(long long)arg1 fromViewController:(id)arg2 withAttachments:(id)arg3 delegate:(id)arg4;
- (void)_tfn_attachDefaultProviders;
- (id)init;
- (void)t1_prepareDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

