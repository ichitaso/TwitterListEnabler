//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSDate, NSString, TFSTwitterTrendsLocation;

@interface TFNTwitterSettings : NSObject <NSCopying, TFSPlistSerialization>
{
    _Bool _geoEnabled;
    _Bool _showSensitiveMedia;
    _Bool _discoverableByEmail;
    _Bool _discoverableByPhone;
    _Bool _abuseFilterEnabled;
    _Bool _automatedMuteEnabled;
    _Bool _emailFollowEnabled;
    _Bool _isProtectedUser;
    _Bool _protectedPasswordResetEnabled;
    _Bool _markMediaSensitiveUserEnabled;
    _Bool _markMediaSensitiveAdminEnabled;
    _Bool _addressBookLiveSyncEnabled;
    _Bool _altTextComposeEnabled;
    _Bool _universalQualityFilterEnabled;
    _Bool _adsPersonalizationEnabled;
    _Bool _allowAuthenticatedPeriscopeRequests;
    _Bool _cookiesPersonalizationEnabled;
    _Bool _locationHistoryPersonalizationEnabled;
    _Bool _loggedOutDevicesPersonalizationEnabled;
    _Bool _personalizedTrendsEnabled;
    _Bool _sharingDataWithPartnersPersonalizationEnabled;
    _Bool _userLocatedInEU;
    NSString *_screenName;
    NSString *_countryCode;
    NSDate *_lastUpdated;
    unsigned long long _allowMediaTagging;
    unsigned long long _dmReadReceiptsSetting;
    unsigned long long _acceptsDirectMessagesFrom;
    unsigned long long _dmLowQualityFilterSetting;
    unsigned long long _mentionFilterSetting;
    TFSTwitterTrendsLocation *_trendsLocation;
    NSDate *_extReuploadAddressBookTime;
}

+ (id)settingsWithJSONData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSDate *extReuploadAddressBookTime; // @synthesize extReuploadAddressBookTime=_extReuploadAddressBookTime;
@property(retain, nonatomic) TFSTwitterTrendsLocation *trendsLocation; // @synthesize trendsLocation=_trendsLocation;
@property(nonatomic) _Bool userLocatedInEU; // @synthesize userLocatedInEU=_userLocatedInEU;
@property(nonatomic) _Bool sharingDataWithPartnersPersonalizationEnabled; // @synthesize sharingDataWithPartnersPersonalizationEnabled=_sharingDataWithPartnersPersonalizationEnabled;
@property(nonatomic) _Bool personalizedTrendsEnabled; // @synthesize personalizedTrendsEnabled=_personalizedTrendsEnabled;
@property(nonatomic) _Bool loggedOutDevicesPersonalizationEnabled; // @synthesize loggedOutDevicesPersonalizationEnabled=_loggedOutDevicesPersonalizationEnabled;
@property(nonatomic) _Bool locationHistoryPersonalizationEnabled; // @synthesize locationHistoryPersonalizationEnabled=_locationHistoryPersonalizationEnabled;
@property(nonatomic) _Bool cookiesPersonalizationEnabled; // @synthesize cookiesPersonalizationEnabled=_cookiesPersonalizationEnabled;
@property(nonatomic) _Bool allowAuthenticatedPeriscopeRequests; // @synthesize allowAuthenticatedPeriscopeRequests=_allowAuthenticatedPeriscopeRequests;
@property(nonatomic) _Bool adsPersonalizationEnabled; // @synthesize adsPersonalizationEnabled=_adsPersonalizationEnabled;
@property(nonatomic) unsigned long long mentionFilterSetting; // @synthesize mentionFilterSetting=_mentionFilterSetting;
@property(nonatomic) _Bool universalQualityFilterEnabled; // @synthesize universalQualityFilterEnabled=_universalQualityFilterEnabled;
@property(nonatomic) _Bool altTextComposeEnabled; // @synthesize altTextComposeEnabled=_altTextComposeEnabled;
@property(nonatomic) _Bool addressBookLiveSyncEnabled; // @synthesize addressBookLiveSyncEnabled=_addressBookLiveSyncEnabled;
@property(nonatomic) unsigned long long dmLowQualityFilterSetting; // @synthesize dmLowQualityFilterSetting=_dmLowQualityFilterSetting;
@property(nonatomic) unsigned long long acceptsDirectMessagesFrom; // @synthesize acceptsDirectMessagesFrom=_acceptsDirectMessagesFrom;
@property(nonatomic) unsigned long long dmReadReceiptsSetting; // @synthesize dmReadReceiptsSetting=_dmReadReceiptsSetting;
@property(nonatomic) unsigned long long allowMediaTagging; // @synthesize allowMediaTagging=_allowMediaTagging;
@property(nonatomic) _Bool markMediaSensitiveAdminEnabled; // @synthesize markMediaSensitiveAdminEnabled=_markMediaSensitiveAdminEnabled;
@property(nonatomic) _Bool markMediaSensitiveUserEnabled; // @synthesize markMediaSensitiveUserEnabled=_markMediaSensitiveUserEnabled;
@property(nonatomic) _Bool protectedPasswordResetEnabled; // @synthesize protectedPasswordResetEnabled=_protectedPasswordResetEnabled;
@property(nonatomic) _Bool isProtectedUser; // @synthesize isProtectedUser=_isProtectedUser;
@property(nonatomic) _Bool emailFollowEnabled; // @synthesize emailFollowEnabled=_emailFollowEnabled;
@property(nonatomic) _Bool automatedMuteEnabled; // @synthesize automatedMuteEnabled=_automatedMuteEnabled;
@property(nonatomic) _Bool abuseFilterEnabled; // @synthesize abuseFilterEnabled=_abuseFilterEnabled;
@property(nonatomic) _Bool discoverableByPhone; // @synthesize discoverableByPhone=_discoverableByPhone;
@property(nonatomic) _Bool discoverableByEmail; // @synthesize discoverableByEmail=_discoverableByEmail;
@property(nonatomic) _Bool showSensitiveMedia; // @synthesize showSensitiveMedia=_showSensitiveMedia;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(nonatomic) _Bool geoEnabled; // @synthesize geoEnabled=_geoEnabled;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (unsigned long long)private_allowMediaTaggingFromString:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

