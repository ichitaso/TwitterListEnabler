//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModelBuilder-Protocol.h>

@class NSString, TFSTwitterUserBuilder;

@interface TFSTwitterSULCategoryBuilder : NSObject <TFSModelBuilder>
{
    TFSTwitterUserBuilder *_userBuilder;
}

@property(readonly, nonatomic) TFSTwitterUserBuilder *userBuilder; // @synthesize userBuilder=_userBuilder;
- (void).cxx_destruct;
- (id)categoryWithJSONDictionary:(id)arg1;
- (id)modelObjectWithJSONData:(id)arg1 headerFields:(id)arg2 error:(out id *)arg3;
- (id)initUsingCS2Builder:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

