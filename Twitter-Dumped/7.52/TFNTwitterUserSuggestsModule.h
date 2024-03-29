//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterSuggestsModule.h>

@class NSArray;

@interface TFNTwitterUserSuggestsModule : TFNTwitterSuggestsModule
{
    NSArray *_users;
    NSArray *_userTimelinePlistDictionaries;
}

@property(retain, nonatomic) NSArray *userTimelinePlistDictionaries; // @synthesize userTimelinePlistDictionaries=_userTimelinePlistDictionaries;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (void)replaceExistingUser:(id)arg1 withUser:(id)arg2;
- (void)removeObjectsWithFilter:(CDUnknownBlockType)arg1;
- (unsigned long long)dismissibleContentType;
- (id)allUserIDsInTimelinePlistDictionary;
- (id)timelinePlistDictionaryValue;
- (id)objects;
- (_Bool)populateModelObjectsInTimelinePlistDictionaryWithStatuses:(id)arg1 users:(id)arg2;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 statuses:(id)arg3 users:(id)arg4 headerString:(id)arg5 footer:(id)arg6 feedbackModule:(id)arg7 feedbackInfo:(id)arg8 isDismissing:(_Bool)arg9 suggestsInfo:(id)arg10 shouldLogImpression:(_Bool)arg11 comparableDate:(id)arg12 timelineSortIndex:(long long)arg13;
- (id)initWithJSONDictionary:(id)arg1 statusesDictionary:(id)arg2 usersDictionary:(id)arg3 comparableDate:(id)arg4 legacyIntegrationEnabled:(_Bool)arg5 scriber:(id)arg6;

@end

