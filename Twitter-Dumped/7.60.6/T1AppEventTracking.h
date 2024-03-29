//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface T1AppEventTracking : NSObject
{
}

+ (id)_t1_scribeForAccount:(id)arg1;
+ (id)_t1_standardUserDefaults;
+ (id)_t1_refSrcParametersFromUserDefaults;
+ (id)_t1_expandShortRefSrc:(id)arg1 forShortenedTrackingParameters:(id)arg2;
+ (id)refSrc:(id)arg1 bySubKey:(id)arg2;
+ (id)landingRefSrcForUserTimelineFromUserDefaults;
+ (id)landingRefSrcForWhoToFollowFromUserDefaults;
+ (id)refSrcParameters;
+ (void)storeLandingRefSrcInUserDefaults:(id)arg1;
+ (void)storeRefSrcInUserDefaultsFromDictionary:(id)arg1 timestamp:(double)arg2;
+ (id)scribeParametersForRefSrcString:(id)arg1;
+ (id)trackingUrlStringForReferedUrlParameters:(id)arg1;
+ (id)externalReferredScribeParametersDictForUrl:(id)arg1;
+ (void)trackReferredOpenWithUrl:(id)arg1 accountOrNil:(id)arg2;
+ (void)trackNonReferredOpenWithAccountOrNil:(id)arg1;
+ (void)trackFirstLaunchReferred:(_Bool)arg1;
+ (void)trackWithActionType:(id)arg1 integrationType:(id)arg2 account:(id)arg3;
+ (void)_t1_fetchAppleSearchAttributionParametersWithCompletion:(CDUnknownBlockType)arg1;
+ (void)_t1_fetchCarrierAndAdIDFAWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_t1_callAppEventTrackingWithAccount:(id)arg1 parameters:(id)arg2;
+ (id)_t1_parametersWithRefSrc:(id)arg1 matClickId:(id)arg2 actionType:(id)arg3 integrationType:(id)arg4;
+ (void)_t1_callAppEventTrackingForGuestWithParameters:(id)arg1;
+ (void)_t1_guestTrackWithRefSrc:(id)arg1 matClickId:(id)arg2 actionType:(id)arg3 integrationType:(id)arg4 extraParameters:(id)arg5;
+ (void)guestTrackWithRefSrc:(id)arg1 matClickId:(id)arg2 actionType:(id)arg3 integrationType:(id)arg4;
+ (void)_t1_trackWithRefSrc:(id)arg1 matClickId:(id)arg2 actionType:(id)arg3 integrationType:(id)arg4 account:(id)arg5 extraParameters:(id)arg6;

@end

