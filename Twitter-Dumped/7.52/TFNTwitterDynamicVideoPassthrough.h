//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface TFNTwitterDynamicVideoPassthrough : NSObject
{
    NSNumber *_statusId;
    NSString *_passthroughString;
    NSString *_impressionId;
    NSString *_liveEventId;
}

@property(readonly, copy, nonatomic) NSString *liveEventId; // @synthesize liveEventId=_liveEventId;
@property(readonly, copy, nonatomic) NSString *impressionId; // @synthesize impressionId=_impressionId;
@property(readonly, copy, nonatomic) NSString *passthroughString; // @synthesize passthroughString=_passthroughString;
@property(readonly, nonatomic) NSNumber *statusId; // @synthesize statusId=_statusId;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

