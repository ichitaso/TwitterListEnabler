//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSArray, NSString;

@interface TFNTwitterLoginRequests : NSObject <TFSModel>
{
    NSArray *_loginRequests;
}

+ (id)loginRequestsFromJSONArray:(id)arg1;
+ (id)loginRequestsWithJSONData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSArray *loginRequests; // @synthesize loginRequests=_loginRequests;
- (void).cxx_destruct;
- (id)initWithLoginRequests:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

