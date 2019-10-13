//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

#import <T1Twitter/TFSOperationDependencyResult-Protocol.h>

@class NSError, NSString, TFNTwitterComposition, TFNTwitterCompositionUploadContext, TFNTwitterStatus;
@protocol TFSTwitterAPICommandCancellable;

@interface TFNTwitterCompositionUpdateStatusOperation : TFSDependentConcurrentOperation <TFSOperationDependencyResult>
{
    unsigned long long _resultState;
    NSError *_error;
    TFNTwitterStatus *_resultStatus;
    TFNTwitterComposition *_composition;
    TFNTwitterCompositionUploadContext *_context;
    id <TFSTwitterAPICommandCancellable> _commandOperation;
}

@property(retain) id <TFSTwitterAPICommandCancellable> commandOperation; // @synthesize commandOperation=_commandOperation;
@property(readonly, nonatomic) TFNTwitterCompositionUploadContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
@property(retain) TFNTwitterStatus *resultStatus; // @synthesize resultStatus=_resultStatus;
@property(retain) NSError *resultError; // @synthesize resultError=_error;
@property unsigned long long resultState; // @synthesize resultState=_resultState;
- (void).cxx_destruct;
- (void)_tfn_main_statusesUpdateCommandDidUpdateStatus:(id)arg1 error:(id)arg2;
- (void)cancel;
- (void)_tfn_main_run;
- (void)run;
- (id)initWithComposition:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

