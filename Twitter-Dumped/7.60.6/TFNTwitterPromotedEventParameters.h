//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TFNTwitterPromotedEventParameters : NSObject
{
    NSMutableDictionary *_jsonDictionary;
    NSString *_impressionID;
    long long _event;
    long long _eventTag;
}

+ (id)updateParameters:(id)arg1 forStatus:(id)arg2;
@property(readonly, nonatomic) long long eventTag; // @synthesize eventTag=_eventTag;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
@property(readonly, copy, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
- (void).cxx_destruct;
- (id)_tfn_eventTagStringForEventTag:(long long)arg1;
- (id)_tfn_logTypeKey:(long long)arg1;
- (void)_tfn_setObject:(id)arg1 forKey:(id)arg2;
- (id)JSONDictionary;
- (id)initWithImpressionID:(id)arg1 event:(long long)arg2 eventTag:(long long)arg3 logType:(long long)arg4 isEarned:(_Bool)arg5 extraParameters:(id)arg6;
- (id)initWithImpressionID:(id)arg1 event:(long long)arg2 logType:(long long)arg3 isEarned:(_Bool)arg4 extraParameters:(id)arg5;
- (id)init;

@end

