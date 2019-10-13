//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterUnifiedCardBaseComponentModel.h>

@class NSString, TFNTwitterUser, TFSTwitterUserReference;

@interface TFNTwitterUnifiedCardTwitterListDetailsComponentModel : TFNTwitterUnifiedCardBaseComponentModel
{
    _Bool _nameRTL;
    NSString *_name;
    NSString *_subscriberCount;
    NSString *_memberCount;
    TFNTwitterUser *_user;
}

+ (id)componentWithJSON:(id)arg1 destinationDict:(id)arg2 mediaEntitiesDict:(id)arg3 appStoreData:(id)arg4 promotedContent:(id)arg5 usersDict:(id)arg6;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *memberCount; // @synthesize memberCount=_memberCount;
@property(copy, nonatomic) NSString *subscriberCount; // @synthesize subscriberCount=_subscriberCount;
@property(nonatomic, getter=isNameRTL) _Bool nameRTL; // @synthesize nameRTL=_nameRTL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *membersTitle;
@property(readonly, nonatomic) NSString *subscribersTitle;
@property(readonly, nonatomic) NSString *displayFullName;
@property(readonly, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic, getter=isUserVerified) _Bool userVerified;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference;
@property(readonly, nonatomic) NSString *title;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithComponentJSON:(id)arg1 destinationDict:(id)arg2 name:(id)arg3 isNameRTL:(_Bool)arg4 subscriberCount:(id)arg5 memberCount:(id)arg6 user:(id)arg7;
- (id)allUsers;

@end

