//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/TFNTwitterCoreServicesConfiguration-Protocol.h>

@class NSNumber, NSSet, NSString;

@interface TFNTwitterCoreServicesConfiguration : NSObject <TFNTwitterCoreServicesConfiguration, NSCopying>
{
    _Bool _disableInlinePhotosInstagram;
    long long _shortenedURLLengthSecure;
    long long _mediaURLLength;
    NSSet *_blackListedEmailDomains;
    double _typeaheadUserPrefetchRateInSeconds;
    unsigned long long _typeaheadUserPrefetchSize;
    long long _antispamQueryFrequency;
    NSSet *_nonUsernamePaths;
    long long _scribeAPISampleSize;
    long long _scribeAPIErrorSampleSize;
    NSSet *_blackListedWebViewDomains;
    NSNumber *_coreServices2TNLForegroundIdleTimeout;
    NSNumber *_coreServices2TNLBackgroundIdleTimeout;
    unsigned long long _maxNumberDiscountedURLs;
}

+ (id)_queue;
+ (void)updateConfiguration:(id)arg1;
+ (id)currentConfiguration;
@property(nonatomic) unsigned long long maxNumberDiscountedURLs; // @synthesize maxNumberDiscountedURLs=_maxNumberDiscountedURLs;
@property(retain, nonatomic) NSNumber *coreServices2TNLBackgroundIdleTimeout; // @synthesize coreServices2TNLBackgroundIdleTimeout=_coreServices2TNLBackgroundIdleTimeout;
@property(retain, nonatomic) NSNumber *coreServices2TNLForegroundIdleTimeout; // @synthesize coreServices2TNLForegroundIdleTimeout=_coreServices2TNLForegroundIdleTimeout;
@property(copy, nonatomic) NSSet *blackListedWebViewDomains; // @synthesize blackListedWebViewDomains=_blackListedWebViewDomains;
@property(nonatomic) long long scribeAPIErrorSampleSize; // @synthesize scribeAPIErrorSampleSize=_scribeAPIErrorSampleSize;
@property(nonatomic) long long scribeAPISampleSize; // @synthesize scribeAPISampleSize=_scribeAPISampleSize;
@property(copy, nonatomic) NSSet *nonUsernamePaths; // @synthesize nonUsernamePaths=_nonUsernamePaths;
@property(nonatomic) long long antispamQueryFrequency; // @synthesize antispamQueryFrequency=_antispamQueryFrequency;
@property(nonatomic) unsigned long long typeaheadUserPrefetchSize; // @synthesize typeaheadUserPrefetchSize=_typeaheadUserPrefetchSize;
@property(nonatomic) double typeaheadUserPrefetchRateInSeconds; // @synthesize typeaheadUserPrefetchRateInSeconds=_typeaheadUserPrefetchRateInSeconds;
@property(copy, nonatomic) NSSet *blackListedEmailDomains; // @synthesize blackListedEmailDomains=_blackListedEmailDomains;
@property(nonatomic) _Bool disableInlinePhotosInstagram; // @synthesize disableInlinePhotosInstagram=_disableInlinePhotosInstagram;
@property(nonatomic) long long mediaURLLength; // @synthesize mediaURLLength=_mediaURLLength;
@property(nonatomic) long long shortenedURLLengthSecure; // @synthesize shortenedURLLengthSecure=_shortenedURLLengthSecure;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

