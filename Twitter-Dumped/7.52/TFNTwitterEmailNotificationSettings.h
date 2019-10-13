//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class NSString;

@interface TFNTwitterEmailNotificationSettings : NSObject <NSCopying>
{
    _Bool _sendNewDirectTextEmailEnabled;
    _Bool _sendEmailNewsletterEnabled;
    _Bool _sendAccountUpdatesEmailEnabled;
    _Bool _sendResurrectionEmailEnabled;
    _Bool _sendFollowRecsEmailEnabled;
    _Bool _sendActivationEmailEnabled;
    _Bool _sendSurveyEmailEnabled;
    _Bool _sendNetworkActivityEmailEnabled;
    _Bool _sendPartnerEmailEnabled;
    _Bool _sendEmailVitWeeklyEnabled;
    _Bool _sendSmbSalesMarketingEmailEnabled;
    _Bool _sendAddressBookNotificationEmailEnabled;
    _Bool _sendSimilarPeopleEmailEnabled;
    _Bool _sendSharedTweetEmailEnabled;
    _Bool _sendTwitterEmailsEnabled;
    _Bool _sendLoginNotificationEmailEnabled;
    _Bool _sendPerformanceDigestEmailEnabled;
    NSString *_sendNetworkDigestFrequency;
}

+ (id)emailNotificationSettingsWithJSONData:(id)arg1 error:(out id *)arg2;
@property(nonatomic, getter=isSendPerformanceDigestEmailEnabled) _Bool sendPerformanceDigestEmailEnabled; // @synthesize sendPerformanceDigestEmailEnabled=_sendPerformanceDigestEmailEnabled;
@property(copy, nonatomic) NSString *sendNetworkDigestFrequency; // @synthesize sendNetworkDigestFrequency=_sendNetworkDigestFrequency;
@property(nonatomic, getter=isSendLoginNotificationEmailEnabled) _Bool sendLoginNotificationEmailEnabled; // @synthesize sendLoginNotificationEmailEnabled=_sendLoginNotificationEmailEnabled;
@property(nonatomic, getter=isSendTwitterEmailsEnabled) _Bool sendTwitterEmailsEnabled; // @synthesize sendTwitterEmailsEnabled=_sendTwitterEmailsEnabled;
@property(nonatomic, getter=isSendSharedTweetEmailEnabled) _Bool sendSharedTweetEmailEnabled; // @synthesize sendSharedTweetEmailEnabled=_sendSharedTweetEmailEnabled;
@property(nonatomic, getter=isSendSimilarPeopleEmailEnabled) _Bool sendSimilarPeopleEmailEnabled; // @synthesize sendSimilarPeopleEmailEnabled=_sendSimilarPeopleEmailEnabled;
@property(nonatomic, getter=isSendAddressBookNotificationEmailEnabled) _Bool sendAddressBookNotificationEmailEnabled; // @synthesize sendAddressBookNotificationEmailEnabled=_sendAddressBookNotificationEmailEnabled;
@property(nonatomic, getter=isSendSmbSalesMarketingEmailEnabled) _Bool sendSmbSalesMarketingEmailEnabled; // @synthesize sendSmbSalesMarketingEmailEnabled=_sendSmbSalesMarketingEmailEnabled;
@property(nonatomic, getter=isSendEmailVitWeeklyEnabled) _Bool sendEmailVitWeeklyEnabled; // @synthesize sendEmailVitWeeklyEnabled=_sendEmailVitWeeklyEnabled;
@property(nonatomic, getter=isSendPartnerEmailEnabled) _Bool sendPartnerEmailEnabled; // @synthesize sendPartnerEmailEnabled=_sendPartnerEmailEnabled;
@property(nonatomic, getter=isSendNetworkActivityEmailEnabled) _Bool sendNetworkActivityEmailEnabled; // @synthesize sendNetworkActivityEmailEnabled=_sendNetworkActivityEmailEnabled;
@property(nonatomic, getter=isSendSurveyEmailEnabled) _Bool sendSurveyEmailEnabled; // @synthesize sendSurveyEmailEnabled=_sendSurveyEmailEnabled;
@property(nonatomic, getter=isSendActivationEmailEnabled) _Bool sendActivationEmailEnabled; // @synthesize sendActivationEmailEnabled=_sendActivationEmailEnabled;
@property(nonatomic, getter=isSendFollowRecsEmailEnabled) _Bool sendFollowRecsEmailEnabled; // @synthesize sendFollowRecsEmailEnabled=_sendFollowRecsEmailEnabled;
@property(nonatomic, getter=isSendResurrectionEmailEnabled) _Bool sendResurrectionEmailEnabled; // @synthesize sendResurrectionEmailEnabled=_sendResurrectionEmailEnabled;
@property(nonatomic, getter=isSendAccountUpdatesEmailEnabled) _Bool sendAccountUpdatesEmailEnabled; // @synthesize sendAccountUpdatesEmailEnabled=_sendAccountUpdatesEmailEnabled;
@property(nonatomic, getter=isSendEmailNewsletterEnabled) _Bool sendEmailNewsletterEnabled; // @synthesize sendEmailNewsletterEnabled=_sendEmailNewsletterEnabled;
@property(nonatomic, getter=isSendNewDirectTextEmailEnabled) _Bool sendNewDirectTextEmailEnabled; // @synthesize sendNewDirectTextEmailEnabled=_sendNewDirectTextEmailEnabled;
- (void).cxx_destruct;
- (id)_tfn_networkPerformanceDigestNumberFromJSONDict:(id)arg1;
- (id)_tfn_networkDigestStringFromJSONDict:(id)arg1;
- (id)_tfn_frequencyFromJSONDict:(id)arg1 key:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)parameterDictionary;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

