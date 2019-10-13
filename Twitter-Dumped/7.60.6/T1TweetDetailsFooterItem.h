//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFSTwitterLocation, TFSTwitterPlace;

@interface T1TweetDetailsFooterItem : NSObject
{
    _Bool _isRankedTimelineTweet;
    _Bool _includesTopPadding;
    _Bool _showsHiddenRepliesButton;
    _Bool _showsConversationOwnerString;
    NSString *_timeAgo;
    NSString *_accessibilityTimestamp;
    TFSTwitterPlace *_place;
    TFSTwitterLocation *_location;
    NSString *_momentID;
    NSString *_source;
}

+ (id)t1_tweetDetailsFooterItemWithViewModel:(id)arg1;
@property(nonatomic) _Bool showsConversationOwnerString; // @synthesize showsConversationOwnerString=_showsConversationOwnerString;
@property(nonatomic) _Bool showsHiddenRepliesButton; // @synthesize showsHiddenRepliesButton=_showsHiddenRepliesButton;
@property(nonatomic) _Bool includesTopPadding; // @synthesize includesTopPadding=_includesTopPadding;
@property(nonatomic) _Bool isRankedTimelineTweet; // @synthesize isRankedTimelineTweet=_isRankedTimelineTweet;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *momentID; // @synthesize momentID=_momentID;
@property(retain, nonatomic) TFSTwitterLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) TFSTwitterPlace *place; // @synthesize place=_place;
@property(copy, nonatomic) NSString *accessibilityTimestamp; // @synthesize accessibilityTimestamp=_accessibilityTimestamp;
@property(copy, nonatomic) NSString *timeAgo; // @synthesize timeAgo=_timeAgo;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

