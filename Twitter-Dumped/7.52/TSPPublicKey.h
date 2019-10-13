//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>

@class NSData, NSString;

@interface TSPPublicKey : NSObject <NSCoding>
{
    NSData *_data;
    struct ec_public_key *_key;
}

+ (id)nullKey;
@property(readonly, nonatomic) struct ec_public_key *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *string;
- (void)dealloc;
- (id)init;
- (id)initWithKey:(struct ec_public_key *)arg1 data:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithKey:(struct ec_public_key *)arg1;

@end

