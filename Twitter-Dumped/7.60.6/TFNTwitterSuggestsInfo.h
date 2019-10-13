//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSPlistSerialization-Protocol.h>
#import <T1Twitter/TFSTwitterTimelinePlistSerialization-Protocol.h>

@class NSString;

@interface TFNTwitterSuggestsInfo : NSObject <TFSTwitterTimelinePlistSerialization, TFSPlistSerialization>
{
    NSString *_controllerData;
    NSString *_scribeComponent;
    NSString *_scribeElement;
    NSString *_sourceData;
    NSString *_suggestionType;
}

@property(readonly, copy, nonatomic) NSString *suggestionType; // @synthesize suggestionType=_suggestionType;
@property(readonly, copy, nonatomic) NSString *sourceData; // @synthesize sourceData=_sourceData;
@property(readonly, copy, nonatomic) NSString *scribeElement; // @synthesize scribeElement=_scribeElement;
@property(readonly, copy, nonatomic) NSString *scribeComponent; // @synthesize scribeComponent=_scribeComponent;
@property(readonly, copy, nonatomic) NSString *controllerData; // @synthesize controllerData=_controllerData;
- (void).cxx_destruct;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isSuggestionTypeRanked;
@property(readonly, nonatomic) _Bool isSuggestionTypeRecommended;
- (id)scribeSuggestionDetails;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithControllerData:(id)arg1 scribeComponent:(id)arg2 scribeElement:(id)arg3 sourceData:(id)arg4 suggestionType:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

