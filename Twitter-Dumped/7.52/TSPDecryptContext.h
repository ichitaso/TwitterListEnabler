//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPAddress;

@interface TSPDecryptContext : NSObject
{
    long long _messageID;
    TSPAddress *_address;
}

@property(readonly, nonatomic) TSPAddress *address; // @synthesize address=_address;
@property(readonly, nonatomic) long long messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (id)initWithMessageID:(long long)arg1 address:(id)arg2;

@end

