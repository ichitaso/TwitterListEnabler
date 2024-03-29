//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNTwitterStatus, TFSTwitterUserReference;
@protocol TFNDirectMessageConversation, TFNDirectMessageEntry, TFNTwitterUserContext, TFSTwitterCanonicalUser;

@interface T1BlockOrReportActionContext : NSObject
{
    _Bool _shouldDismissModals;
    unsigned long long _blockOrReportSource;
    TFSTwitterUserReference *_targetUserReference;
    id <TFSTwitterCanonicalUser> _targetUser;
    id <TFNTwitterUserContext> _targetUserContext;
    TFNTwitterStatus *_targetStatus;
    NSString *_targetMomentID;
    id <TFNDirectMessageConversation> _targetDirectMessageConversation;
    id <TFNDirectMessageEntry> _targetDirectMessage;
    NSString *_scribePage;
    NSString *_scribeSection;
    NSString *_scribeComponent;
    NSString *_scribeElement;
    NSString *_sourcePage;
    unsigned long long _contextType;
    CDUnknownBlockType _completion;
}

+ (id)contextForReportingDirectMessageConversation:(id)arg1 directMessage:(id)arg2 scribePage:(id)arg3 scribeSection:(id)arg4 scribeComponent:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)contextForReportingMomentID:(id)arg1 status:(id)arg2 user:(id)arg3 scribePage:(id)arg4 scribeSection:(id)arg5 scribeComponent:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (id)contextForReportingStatus:(id)arg1 scribePage:(id)arg2 scribeSection:(id)arg3 scribeComponent:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)contextForReportingUserReference:(id)arg1 userContext:(id)arg2 scribePage:(id)arg3 scribeSection:(id)arg4 scribeComponent:(id)arg5 sourcePage:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (id)contextForBlockingStatus:(id)arg1 scribePage:(id)arg2 scribeSection:(id)arg3 scribeComponent:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)contextForUnblockingUserReference:(id)arg1 userContext:(id)arg2 scribePage:(id)arg3 scribeSection:(id)arg4 scribeComponent:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)contextForBlockingUserReference:(id)arg1 userContext:(id)arg2 scribePage:(id)arg3 scribeSection:(id)arg4 scribeComponent:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)contextForBlockingUser:(id)arg1 userContext:(id)arg2 scribePage:(id)arg3 scribeSection:(id)arg4 scribeComponent:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)_configureScribeElementForReportingContext:(id)arg1;
+ (id)contextForBlockingOrReportingWithTargetUserReference:(id)arg1 targetUser:(id)arg2 targetUserContext:(id)arg3 targetStatus:(id)arg4 targetMomentID:(id)arg5 targetDirectMessageConversation:(id)arg6 targetDirectMessage:(id)arg7 scribePage:(id)arg8 scribeSection:(id)arg9 scribeComponent:(id)arg10 sourcePage:(id)arg11 mode:(unsigned long long)arg12 contextType:(unsigned long long)arg13 completion:(CDUnknownBlockType)arg14;
@property(nonatomic) _Bool shouldDismissModals; // @synthesize shouldDismissModals=_shouldDismissModals;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long contextType; // @synthesize contextType=_contextType;
@property(copy, nonatomic) NSString *sourcePage; // @synthesize sourcePage=_sourcePage;
@property(copy, nonatomic) NSString *scribeElement; // @synthesize scribeElement=_scribeElement;
@property(copy, nonatomic) NSString *scribeComponent; // @synthesize scribeComponent=_scribeComponent;
@property(copy, nonatomic) NSString *scribeSection; // @synthesize scribeSection=_scribeSection;
@property(copy, nonatomic) NSString *scribePage; // @synthesize scribePage=_scribePage;
@property(retain, nonatomic) id <TFNDirectMessageEntry> targetDirectMessage; // @synthesize targetDirectMessage=_targetDirectMessage;
@property(retain, nonatomic) id <TFNDirectMessageConversation> targetDirectMessageConversation; // @synthesize targetDirectMessageConversation=_targetDirectMessageConversation;
@property(copy, nonatomic) NSString *targetMomentID; // @synthesize targetMomentID=_targetMomentID;
@property(retain, nonatomic) TFNTwitterStatus *targetStatus; // @synthesize targetStatus=_targetStatus;
@property(retain, nonatomic) id <TFNTwitterUserContext> targetUserContext; // @synthesize targetUserContext=_targetUserContext;
@property(retain, nonatomic) id <TFSTwitterCanonicalUser> targetUser; // @synthesize targetUser=_targetUser;
@property(retain, nonatomic) TFSTwitterUserReference *targetUserReference; // @synthesize targetUserReference=_targetUserReference;
@property(nonatomic) unsigned long long blockOrReportSource; // @synthesize blockOrReportSource=_blockOrReportSource;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *conversationSection;
- (id)clientLocation;

@end

