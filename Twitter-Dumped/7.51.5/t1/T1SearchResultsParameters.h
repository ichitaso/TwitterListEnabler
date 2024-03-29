//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFSTwitterLocation;

@interface T1SearchResultsParameters : NSObject
{
    _Bool _allowPromotedContent;
    _Bool _allowSpellingCorrection;
    NSString *_query;
    NSString *_dataLookupID;
    NSString *_queryRewriteId;
    long long _safetyLevel;
    long long _socialFilter;
    long long _locationFilter;
    TFSTwitterLocation *_location;
    NSString *_searchSource;
    long long _vertical;
}

+ (id)searchURLForQuery:(id)arg1 source:(id)arg2;
+ (id)tweetDetailQuoteTweetSearchParamsWithQuoteTweetID:(long long)arg1;
@property(readonly, nonatomic) long long vertical; // @synthesize vertical=_vertical;
@property(readonly, nonatomic) _Bool allowSpellingCorrection; // @synthesize allowSpellingCorrection=_allowSpellingCorrection;
@property(readonly, copy, nonatomic) NSString *searchSource; // @synthesize searchSource=_searchSource;
@property(readonly, nonatomic) TFSTwitterLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long locationFilter; // @synthesize locationFilter=_locationFilter;
@property(readonly, nonatomic) long long socialFilter; // @synthesize socialFilter=_socialFilter;
@property(readonly, nonatomic) long long safetyLevel; // @synthesize safetyLevel=_safetyLevel;
@property(readonly, copy, nonatomic) NSString *queryRewriteId; // @synthesize queryRewriteId=_queryRewriteId;
@property(readonly, copy, nonatomic) NSString *dataLookupID; // @synthesize dataLookupID=_dataLookupID;
@property(readonly, nonatomic) _Bool allowPromotedContent; // @synthesize allowPromotedContent=_allowPromotedContent;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)parameterCollectionWithPromotedContentAllowed:(_Bool)arg1 locationProvider:(id)arg2 resultFilter:(long long)arg3 searchMode:(long long)arg4 qualityFilter:(long long)arg5;
- (id)searchResultsParametersWithSocialFilter:(long long)arg1 location:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqualToSearchResultsParameters:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithQuery:(id)arg1 pinnedTweets:(id)arg2 via:(id)arg3;
- (id)initWithQuery:(id)arg1 via:(id)arg2;
- (id)initWithQuery:(id)arg1 allowPromotedContent:(_Bool)arg2 dataLookupID:(id)arg3 queryRewriteId:(id)arg4 safetyLevel:(long long)arg5 socialFilter:(long long)arg6 locationFilter:(long long)arg7 location:(id)arg8 searchSource:(id)arg9;
- (id)initWithQuery:(id)arg1 allowPromotedContent:(_Bool)arg2 dataLookupID:(id)arg3 queryRewriteId:(id)arg4 safetyLevel:(long long)arg5 socialFilter:(long long)arg6 locationFilter:(long long)arg7 location:(id)arg8 searchSource:(id)arg9 allowSpellingCorrection:(_Bool)arg10 vertical:(long long)arg11;
- (id)init;

@end

