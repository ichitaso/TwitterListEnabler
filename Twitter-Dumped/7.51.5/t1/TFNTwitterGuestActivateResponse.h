//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNTwitterGuestActivateResponse : NSObject
{
    NSString *_guestToken;
}

+ (id)guestTokenResponseWithJSONData:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *guestToken; // @synthesize guestToken=_guestToken;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

