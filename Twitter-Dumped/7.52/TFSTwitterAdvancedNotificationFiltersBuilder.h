//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModelBuilder-Protocol.h>

@class NSString;

@interface TFSTwitterAdvancedNotificationFiltersBuilder : NSObject <TFSModelBuilder>
{
    NSString *_accountID;
}

@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)modelObjectWithJSONData:(id)arg1 headerFields:(id)arg2 error:(out id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

