//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>

@class NSDate, NSDictionary, NSString, TFSTwitterEntityMedia, TFSTwitterUserReference;

@interface TFNTwitterCompositionQuotedStatusInfo : NSObject <NSCoding>
{
    _Bool _fromUserIsVerified;
    _Bool _isEarned;
    long long _statusID;
    NSString *_originalText;
    NSDate *_date;
    TFSTwitterUserReference *_fromUserReference;
    TFSTwitterEntityMedia *_fromUserProfileImageMediaEntity;
    TFNTwitterCompositionQuotedStatusInfo *_retweetingStatusInfo;
    NSString *_accessibilityText;
    NSString *_promotedContentImpressionID;
    NSString *_limitedActionsPolicy;
    NSDictionary *_scribeItem;
    NSString *_text;
}

+ (id)quotedStatusInfoWithStatus:(id)arg1;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem; // @synthesize scribeItem=_scribeItem;
@property(readonly, nonatomic) _Bool isEarned; // @synthesize isEarned=_isEarned;
@property(readonly, copy, nonatomic) NSString *limitedActionsPolicy; // @synthesize limitedActionsPolicy=_limitedActionsPolicy;
@property(readonly, copy, nonatomic) NSString *promotedContentImpressionID; // @synthesize promotedContentImpressionID=_promotedContentImpressionID;
@property(readonly, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(readonly, nonatomic) TFNTwitterCompositionQuotedStatusInfo *retweetingStatusInfo; // @synthesize retweetingStatusInfo=_retweetingStatusInfo;
@property(readonly, nonatomic) _Bool fromUserIsVerified; // @synthesize fromUserIsVerified=_fromUserIsVerified;
@property(readonly, nonatomic) TFSTwitterEntityMedia *fromUserProfileImageMediaEntity; // @synthesize fromUserProfileImageMediaEntity=_fromUserProfileImageMediaEntity;
@property(readonly, nonatomic) TFSTwitterUserReference *fromUserReference; // @synthesize fromUserReference=_fromUserReference;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(readonly, nonatomic) long long statusID; // @synthesize statusID=_statusID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusID:(long long)arg1 originalText:(id)arg2 date:(id)arg3 fromUserReference:(id)arg4 fromUserProfileImageMediaEntity:(id)arg5 fromUserIsVerified:(_Bool)arg6 retweetingStatusInfo:(id)arg7 accessibilityText:(id)arg8 promotedContentImpressionID:(id)arg9 limitedActionsPolicy:(id)arg10 isEarned:(_Bool)arg11 scribeItem:(id)arg12 text:(id)arg13;
- (id)initWithStatus:(id)arg1;
@property(readonly, nonatomic) _Bool hasPromotedContent;
@property(readonly, nonatomic) NSString *twitterURL;

@end

