//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSDictionary, NSString;

@interface TFNTwitterConConBundle : NSObject <TFSModel>
{
    NSString *_dtabs;
    NSDictionary *_featureSwitches;
}

+ (id)bundleResponseWithJSONData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSDictionary *featureSwitches; // @synthesize featureSwitches=_featureSwitches;
@property(readonly, nonatomic) NSString *dtabs; // @synthesize dtabs=_dtabs;
- (void).cxx_destruct;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

