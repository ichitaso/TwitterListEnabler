//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString, TFSCallbackDispatcher, TFSModelContext, TFSTwitterAccountUserDetails, TFSTwitterEntityMedia, TFSTwitterEntitySet, TFSTwitterPlace, TFSTwitterRelationship, TFSTwitterUser, TFSTwitterUserDesignatorInfo, TFSTwitterUserExtendedProfile, TFSTwitterUserReference;

@interface TFNTwitterSharedUserData : NSObject
{
    _Bool _verified;
    _Bool _partial;
    _Bool _hasStructuredLocation;
    _Bool _protectedUser;
    TFSTwitterEntityMedia *_profileImageMediaEntity;
    TFSTwitterEntityMedia *_profileBannerMediaEntity;
    NSNumber *_pinnedTweetIDNumber;
    NSString *_bio;
    NSString *_location;
    TFSTwitterRelationship *_relationship;
    NSNumber *_numberOfFollowing;
    NSNumber *_numberOfFollowers;
    NSNumber *_numberOfFollowersNormal;
    long long _userID;
    NSString *_username;
    NSString *_fullName;
    NSString *_url;
    TFSTwitterEntitySet *_urlEntities;
    NSNumber *_suspended;
    NSNumber *_isLifelineInstitution;
    NSNumber *_numberOfFollowersFast;
    NSNumber *_statusesCountNumber;
    NSNumber *_mediaCountNumber;
    NSNumber *_favoritesCountNumber;
    NSDate *_createdDate;
    NSNumber *_nsfw;
    NSNumber *_translatorType;
    NSNumber *_profileInterstitialType;
    NSNumber *_profileLinkColorHexTriplet;
    TFSTwitterEntitySet *_bioEntities;
    NSString *_withheldBio;
    TFSTwitterEntitySet *_withheldBioEntities;
    NSArray *_withheldInCountries;
    TFSTwitterPlace *_structuredLocation;
    NSNumber *_usernameless;
    NSNumber *_hasExtendedProfileBirthday;
    TFSTwitterUserExtendedProfile *_extendedProfile;
    TFSTwitterUserDesignatorInfo *_highlightedDesignatorInfo;
    TFSTwitterAccountUserDetails *_accountUserDetails;
    TFSCallbackDispatcher *_updateEventDispatcher;
    NSString *_displayUsername;
    NSString *_displayFullName;
    TFSModelContext *_modelContext;
    id _userObserver;
    NSDate *_lastUpdated;
    TFSTwitterUser *_cs2User;
    TFSTwitterUser *_pureCS2User;
}

@property(retain, nonatomic) TFSTwitterUser *pureCS2User; // @synthesize pureCS2User=_pureCS2User;
@property(retain, nonatomic) TFSTwitterUser *cs2User; // @synthesize cs2User=_cs2User;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(retain, nonatomic) id userObserver; // @synthesize userObserver=_userObserver;
@property(retain, nonatomic) TFSModelContext *modelContext; // @synthesize modelContext=_modelContext;
@property(retain, nonatomic) NSString *displayFullName; // @synthesize displayFullName=_displayFullName;
@property(retain, nonatomic) NSString *displayUsername; // @synthesize displayUsername=_displayUsername;
@property(readonly, nonatomic) TFSCallbackDispatcher *updateEventDispatcher; // @synthesize updateEventDispatcher=_updateEventDispatcher;
@property(readonly, nonatomic) TFSTwitterAccountUserDetails *accountUserDetails; // @synthesize accountUserDetails=_accountUserDetails;
@property(readonly, nonatomic) TFSTwitterUserDesignatorInfo *highlightedDesignatorInfo; // @synthesize highlightedDesignatorInfo=_highlightedDesignatorInfo;
@property(readonly, nonatomic) TFSTwitterUserExtendedProfile *extendedProfile; // @synthesize extendedProfile=_extendedProfile;
@property(readonly, nonatomic) NSNumber *hasExtendedProfileBirthday; // @synthesize hasExtendedProfileBirthday=_hasExtendedProfileBirthday;
@property(readonly, nonatomic) NSNumber *usernameless; // @synthesize usernameless=_usernameless;
@property(readonly, nonatomic) TFSTwitterPlace *structuredLocation; // @synthesize structuredLocation=_structuredLocation;
@property(readonly, copy, nonatomic) NSArray *withheldInCountries; // @synthesize withheldInCountries=_withheldInCountries;
@property(readonly, nonatomic) TFSTwitterEntitySet *withheldBioEntities; // @synthesize withheldBioEntities=_withheldBioEntities;
@property(readonly, copy, nonatomic) NSString *withheldBio; // @synthesize withheldBio=_withheldBio;
@property(readonly, nonatomic) TFSTwitterEntitySet *bioEntities; // @synthesize bioEntities=_bioEntities;
@property(readonly, nonatomic) NSNumber *profileLinkColorHexTriplet; // @synthesize profileLinkColorHexTriplet=_profileLinkColorHexTriplet;
@property(readonly, nonatomic) NSNumber *profileInterstitialType; // @synthesize profileInterstitialType=_profileInterstitialType;
@property(readonly, nonatomic) NSNumber *translatorType; // @synthesize translatorType=_translatorType;
@property(readonly, nonatomic) NSNumber *nsfw; // @synthesize nsfw=_nsfw;
@property(readonly, copy, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(readonly, nonatomic) NSNumber *favoritesCountNumber; // @synthesize favoritesCountNumber=_favoritesCountNumber;
@property(readonly, nonatomic) NSNumber *mediaCountNumber; // @synthesize mediaCountNumber=_mediaCountNumber;
@property(readonly, nonatomic) NSNumber *statusesCountNumber; // @synthesize statusesCountNumber=_statusesCountNumber;
@property(readonly, nonatomic) NSNumber *numberOfFollowersFast; // @synthesize numberOfFollowersFast=_numberOfFollowersFast;
@property(readonly, nonatomic) NSNumber *isLifelineInstitution; // @synthesize isLifelineInstitution=_isLifelineInstitution;
@property(readonly, nonatomic) NSNumber *suspended; // @synthesize suspended=_suspended;
@property(readonly, nonatomic) TFSTwitterEntitySet *urlEntities; // @synthesize urlEntities=_urlEntities;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool protectedUser; // @synthesize protectedUser=_protectedUser;
@property(readonly, copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) long long userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (_Bool)_assimilateRelationship:(id)arg1 previousRepresentedRelationship:(id)arg2 attributes:(id)arg3;
- (void)_assimilateHighlightedDesignatorInfo:(id)arg1 attributes:(id)arg2;
- (void)_assimilateHasExtendedProfileBirthday:(id)arg1 extendedProfile:(id)arg2 attributes:(id)arg3;
- (void)_assimilateUsernameless:(id)arg1 attributes:(id)arg2;
- (void)_assimilateNumberOfFollowersFast:(id)arg1 attributes:(id)arg2;
- (_Bool)_assimilateNumberOfFollowersNormal:(id)arg1 previousRepresentedNumberOfFollowersNormal:(id)arg2 attributes:(id)arg3;
- (_Bool)_assimilateNumberOfFollowers:(id)arg1 previousRepresentedNumberOfFollowers:(id)arg2 attributes:(id)arg3;
- (_Bool)_assimilateNumberOfFollowing:(id)arg1 previousRepresentedNumberOfFollowing:(id)arg2 attributes:(id)arg3;
- (void)_assimilateCreatedDate:(id)arg1 attributes:(id)arg2;
- (_Bool)_assimilatePinnedTweetIDNumber:(id)arg1 previousRepresentedPinnedTweetIDNumber:(id)arg2 attributes:(id)arg3;
- (void)_assimilateHasStructuredLocation:(_Bool)arg1 structuredLocation:(id)arg2 attributes:(id)arg3;
- (void)_assimilateWithheldInCountries:(id)arg1 attributes:(id)arg2;
- (_Bool)_assimilateBio:(id)arg1 previousRepresentedBio:(id)arg2 bioEntities:(id)arg3 withheldBio:(id)arg4 withheldBioEntities:(id)arg5 attributes:(id)arg6;
- (_Bool)_assimilateLocation:(id)arg1 previousRepresentedLocation:(id)arg2 attributes:(id)arg3;
- (_Bool)_assimilateProfileImageMediaEntity:(id)arg1 previousRepresentedProfileImageMediaEntity:(id)arg2 attributes:(id)arg3;
- (_Bool)_assimilateProfileBannerMediaEntity:(id)arg1 previousRepresentedProfileBannerMediaEntity:(id)arg2 attributes:(id)arg3;
- (void)_assimilateProfileHexColorTriplet:(id)arg1 attributes:(id)arg2;
- (void)_assimilateProfileInterstitialType:(id)arg1 attributes:(id)arg2;
- (void)_assimilateTranslatorType:(id)arg1 attributes:(id)arg2;
- (void)_assimilateNSFW:(id)arg1 attributes:(id)arg2;
- (void)_assimilateFavoritesCountNumber:(id)arg1 attributes:(id)arg2;
- (void)_assimilateMediaCountNumber:(id)arg1 attributes:(id)arg2;
- (void)_assimilateStatusesCountNumber:(id)arg1 attributes:(id)arg2;
- (void)_assimilateURL:(id)arg1 urlEntities:(id)arg2 attributes:(id)arg3;
- (void)_assimilateSuspended:(id)arg1 attributes:(id)arg2;
- (void)_assimilateLifelineInstitution:(id)arg1 attributes:(id)arg2;
- (_Bool)_assimilateVerified:(_Bool)arg1 previousRepresentedVerified:(_Bool)arg2 attributes:(id)arg3;
- (void)_assimilateProtectedUser:(_Bool)arg1 attributes:(id)arg2;
- (void)_assimilateFullName:(id)arg1 attributes:(id)arg2;
- (void)_assimilateUserName:(id)arg1 attributes:(id)arg2;
- (void)asyncUpdateRelationship:(id)arg1;
- (void)asyncAddNumberOfFollowers:(long long)arg1;
- (void)asyncAddNumberOfFollowing:(long long)arg1;
- (id)stageChangeForPinnedTweetIDNumber:(id)arg1;
- (void)asyncSetPinnedTweetIDNumber:(id)arg1;
- (id)stageChangeForBio:(id)arg1 location:(id)arg2;
- (_Bool)shouldAssimilateSharedUserData:(id)arg1;
- (void)assimilateSharedUserData:(id)arg1 changedAttributes:(id *)arg2 assimilatable:(id *)arg3;
- (void)assumeOptionalPersistentAPIFieldsFromUser:(id)arg1;
- (id)pureNumberOfFollowersNormal;
@property(readonly, nonatomic) NSNumber *numberOfFollowersNormal; // @synthesize numberOfFollowersNormal=_numberOfFollowersNormal;
- (id)pureNumberOfFollowers;
@property(readonly, nonatomic) NSNumber *numberOfFollowers; // @synthesize numberOfFollowers=_numberOfFollowers;
- (id)pureNumberOfFollowing;
@property(readonly, nonatomic) NSNumber *numberOfFollowing; // @synthesize numberOfFollowing=_numberOfFollowing;
- (id)pureLocation;
@property(readonly, copy, nonatomic) NSString *location; // @synthesize location=_location;
- (id)pureBio;
@property(readonly, copy, nonatomic) NSString *bio; // @synthesize bio=_bio;
- (id)pureRelationship;
@property(readonly, nonatomic) TFSTwitterRelationship *relationship; // @synthesize relationship=_relationship;
- (id)purePinnedTweetIDNumber;
@property(readonly, nonatomic) NSNumber *pinnedTweetIDNumber; // @synthesize pinnedTweetIDNumber=_pinnedTweetIDNumber;
@property(readonly, nonatomic, getter=isPartial) _Bool partial; // @synthesize partial=_partial;
@property(readonly, nonatomic, getter=pureIsVerified) _Bool pureVerified;
@property(readonly, nonatomic, getter=isVerified) _Bool verified; // @synthesize verified=_verified;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference;
@property(readonly, nonatomic) long long profileImageState;
@property(readonly, nonatomic) _Bool hasStructuredLocation; // @synthesize hasStructuredLocation=_hasStructuredLocation;
- (id)pureProfileBannerMediaEntity;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileBannerMediaEntity; // @synthesize profileBannerMediaEntity=_profileBannerMediaEntity;
@property(readonly, nonatomic) TFSTwitterEntityMedia *pureProfileImageMediaEntity;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity; // @synthesize profileImageMediaEntity=_profileImageMediaEntity;
- (void)_assimilateMutation:(id)arg1;
- (id)assimilatable;
- (void)_assimilateTwitterUser:(id)arg1 pureTwitterUser:(id)arg2;
- (id)initWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3 profileImageMediaEntity:(id)arg4 verified:(_Bool)arg5 protected:(_Bool)arg6 partial:(_Bool)arg7 url:(id)arg8 urlEntities:(id)arg9 suspended:(id)arg10 isLifelineInstitution:(id)arg11 numberOfFollowing:(id)arg12 numberOfFollowers:(id)arg13 numberOfFollowersNormal:(id)arg14 numberOfFollowersFast:(id)arg15 statusesCountNumber:(id)arg16 mediaCountNumber:(id)arg17 favoritesCountNumber:(id)arg18 pinnedTweetIDNumber:(id)arg19 createdDate:(id)arg20 nsfw:(id)arg21 translatorType:(id)arg22 profileInterstitialType:(id)arg23 profileLinkColorHexTriplet:(id)arg24 profileBannerMediaEntity:(id)arg25 bio:(id)arg26 bioEntities:(id)arg27 location:(id)arg28 withheldBio:(id)arg29 withheldBioEntities:(id)arg30 withheldInCountries:(id)arg31 hasStructuredLocation:(_Bool)arg32 structuredLocation:(id)arg33 usernameless:(id)arg34 hasExtendedProfileBirthday:(id)arg35 extendedProfile:(id)arg36 highlightedDesignatorInfo:(id)arg37 relationship:(id)arg38 lastUpdated:(id)arg39 accountUserDetails:(id)arg40;
- (id)init;

@end

