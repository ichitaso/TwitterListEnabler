//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (T1BaseWebViewController_WebKit)
+ (id)tfn_twitterMediaProcessingErrorWithCode:(long long)arg1 name:(id)arg2 message:(id)arg3;
+ (id)tfn_twitterMediaProcessingErrorWithDictionary:(id)arg1;
+ (id)tfn_errorForReason:(id)arg1 inJSONDictionary:(id)arg2 source:(id)arg3;
+ (id)tfn_errorForAttribute:(id)arg1 inJSONDictionary:(id)arg2 source:(id)arg3;
+ (_Bool)tfn_setError:(id)arg1 intoError:(id *)arg2;
- (_Bool)tfn_isWebKitErrorFrameLoadInterrupted;
- (_Bool)tfn_isWebKitErrorPluginHandledLoad;
- (id)tfn_twitterMediaProcessingErrorMessage;
- (id)tfn_twitterMediaProcessingErrorName;
- (_Bool)tfn_isTwitterMediaProcessingError;
- (id)tfn_streamCopyrightRestriction;
- (_Bool)tfn_isAutomaticCopyrightEnforcementError;
- (_Bool)tfn_isLiveGeoblockedError;
- (_Bool)tfn_isLiveStreamUnavailableError;
@end

