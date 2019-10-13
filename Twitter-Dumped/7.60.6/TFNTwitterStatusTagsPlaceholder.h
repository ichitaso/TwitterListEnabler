//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSDictionary, NSString, TFSTwitterPlace, TFSTwitterTagSet;

@interface TFNTwitterStatusTagsPlaceholder : NSObject
{
    _Bool _showLocation;
    _Bool _hasLocation;
    _Bool _hasPOI;
    TFSTwitterTagSet *_tagSet;
    TFSTwitterPlace *_place;
    NSString *_text;
    long long _authenticatedUserID;
    NSAttributedString *_attributedPlaceholder;
    NSDictionary *_substitutions;
}

@property(nonatomic) _Bool hasPOI; // @synthesize hasPOI=_hasPOI;
@property(nonatomic) _Bool hasLocation; // @synthesize hasLocation=_hasLocation;
@property(nonatomic) _Bool showLocation; // @synthesize showLocation=_showLocation;
@property(retain, nonatomic) NSDictionary *substitutions; // @synthesize substitutions=_substitutions;
@property(retain, nonatomic) NSAttributedString *attributedPlaceholder; // @synthesize attributedPlaceholder=_attributedPlaceholder;
@property(nonatomic) long long authenticatedUserID; // @synthesize authenticatedUserID=_authenticatedUserID;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) TFSTwitterPlace *place; // @synthesize place=_place;
@property(readonly, nonatomic) TFSTwitterTagSet *tagSet; // @synthesize tagSet=_tagSet;
- (void).cxx_destruct;
- (id)_localizedLocationPlaceholder;
- (id)_attributedStringForUserTag:(id)arg1;
- (id)init;
- (id)initWithText:(id)arg1 tagSet:(id)arg2 place:(id)arg3 authenticatedUserID:(long long)arg4 options:(unsigned long long)arg5;
- (id)initWithText:(id)arg1 tagSet:(id)arg2 place:(id)arg3 authenticatedUserID:(long long)arg4 showLocation:(_Bool)arg5;

@end

