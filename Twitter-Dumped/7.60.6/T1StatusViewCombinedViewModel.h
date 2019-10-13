//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ConversationTreeConnectorsViewModel-Protocol.h>
#import <T1Twitter/T1StatusExternalUpdateObserver-Protocol.h>

@class NSNumber, NSString, TFNTwitterAccount, TFSTwitterScribeContext;
@protocol T1StatusViewModel;

@interface T1StatusViewCombinedViewModel : NSObject <T1ConversationTreeConnectorsViewModel, T1StatusExternalUpdateObserver>
{
    NSNumber *_cachedLimitedActionTypes;
    long long _cachedAttachmentType;
    long long _cachedSecondaryAttachmentType;
    _Bool _isListeningForNotifications;
    _Bool _isListeningForExternalNotifications;
    id <T1StatusViewModel> _statusViewModel;
    unsigned long long _options;
    TFNTwitterAccount *_account;
    TFSTwitterScribeContext *_scribeContext;
    CDUnknownBlockType _onUpdate;
    CDUnknownBlockType _onExternalUpdate;
}

@property(copy, nonatomic) CDUnknownBlockType onExternalUpdate; // @synthesize onExternalUpdate=_onExternalUpdate;
@property(copy, nonatomic) CDUnknownBlockType onUpdate; // @synthesize onUpdate=_onUpdate;
@property(readonly, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <T1StatusViewModel> statusViewModel; // @synthesize statusViewModel=_statusViewModel;
- (void).cxx_destruct;
- (_Bool)_t1_shouldOmitMediaLinkForAttachmentType:(unsigned long long)arg1;
- (unsigned long long)_t1_calculateDisplayTextOptionsForAttachmentType:(unsigned long long)arg1;
- (unsigned long long)_t1_forwardCardConsistencyCheckerResult;
- (unsigned long long)_t1_attachmentTypeForMediaType;
- (_Bool)_t1_mediaSupportsPhotoVideoForwardPlayer;
- (_Bool)_t1_hasPhotoVideo;
- (_Bool)_t1_hasCard;
- (_Bool)_t1_hasQuotedTweet;
- (_Bool)_t1_hasTombstonedQuotedTweet;
- (_Bool)_t1_hasUserRecommendation;
- (unsigned long long)_t1_calculateSecondaryAttachmentType;
- (unsigned long long)_t1_calculateAttachmentType;
- (void)didReceiveStatusExternalUpdateNotification:(id)arg1 ofType:(long long)arg2;
- (void)_t1_statusViewModelDidUpdate:(id)arg1;
- (void)_t1_userDidUpdate:(id)arg1;
- (void)_t1_statusDidUpdateWithUserInfo:(id)arg1;
- (void)_t1_statusReported:(id)arg1;
- (void)_t1_statusDidUpdate:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool hasUserRecommendation;
@property(readonly, nonatomic) _Bool isPossiblySensitive;
@property(readonly, nonatomic) _Bool isNonPolicyCompliant;
@property(readonly, nonatomic) _Bool isWithheldInCountry;
- (_Bool)areAnyActionsAvailable:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long limitedActionTypes;
- (unsigned long long)displayTextOptionsForAttachmentType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long secondaryAttachmentType;
@property(readonly, nonatomic) unsigned long long attachmentType;
- (id)init;
- (id)initWithStatusViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 scribeContext:(id)arg4;
- (id)bottomAvatarUser;
- (id)accountID;
- (id)conversationTreeContext;
- (_Bool)isTweetStormContext;
- (_Bool)shouldShowAncestorConnectorAtLevel:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool shouldShowElbowParentConnectorView;
@property(readonly, nonatomic) _Bool shouldShowVerticalParentConnectorView;
@property(readonly, nonatomic) long long indentationLevel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

