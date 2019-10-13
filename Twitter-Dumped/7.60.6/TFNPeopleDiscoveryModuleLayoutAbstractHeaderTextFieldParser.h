//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNPeopleDiscoveryResponseParser-Protocol.h>

@class NSDictionary, NSString, TFNPeopleDiscoveryModuleLayoutHeaderTextField;

@interface TFNPeopleDiscoveryModuleLayoutAbstractHeaderTextFieldParser : NSObject <TFNPeopleDiscoveryResponseParser>
{
    NSDictionary *_jsonDictionary;
}

+ (id)textFieldKey;
+ (_Bool)acceptsJSONDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
- (void).cxx_destruct;
- (unsigned long long)_iconTypeForIconTypeValue:(id)arg1;
@property(readonly, nonatomic) TFNPeopleDiscoveryModuleLayoutHeaderTextField *textField;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

