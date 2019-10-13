//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNTwitterUnifiedCardAppStoreDataEntry : NSObject
{
    _Bool _isTitleRTL;
    _Bool _isCategoryRTL;
    NSString *_identifier;
    NSString *_type;
    NSString *_platformIdentifier;
    NSString *_title;
    NSString *_urlString;
    NSString *_urlResolvedString;
    NSString *_category;
}

@property(readonly, nonatomic) _Bool isCategoryRTL; // @synthesize isCategoryRTL=_isCategoryRTL;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *urlResolvedString; // @synthesize urlResolvedString=_urlResolvedString;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) _Bool isTitleRTL; // @synthesize isTitleRTL=_isTitleRTL;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 identifier:(id)arg2;

@end

