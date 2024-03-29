//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>

@class NSData, TFNTwitterContact;

@interface T1PeopleAddressBookSynchronizationContactCacheRecord : NSObject <NSCoding>
{
    NSData *_contactHash;
    long long _synchronizationState;
    TFNTwitterContact *_canonicalContact;
}

@property(readonly, nonatomic) TFNTwitterContact *canonicalContact; // @synthesize canonicalContact=_canonicalContact;
@property(readonly, nonatomic) long long synchronizationState; // @synthesize synchronizationState=_synchronizationState;
@property(readonly, copy, nonatomic) NSData *contactHash; // @synthesize contactHash=_contactHash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithContactHash:(id)arg1 canonicalContact:(id)arg2 synchronizationState:(long long)arg3;

@end

