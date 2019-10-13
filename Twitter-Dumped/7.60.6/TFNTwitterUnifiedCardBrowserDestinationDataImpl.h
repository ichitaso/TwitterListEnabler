//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterUnifiedCardBrowserDestinationData-Protocol.h>

@class NSString, NSURL;

@interface TFNTwitterUnifiedCardBrowserDestinationDataImpl : NSObject <TFNTwitterUnifiedCardBrowserDestinationData>
{
    NSString *_vanityURLString;
    NSURL *_url;
    NSURL *_tcoUrl;
}

@property(readonly, nonatomic) NSURL *tcoUrl; // @synthesize tcoUrl=_tcoUrl;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *vanityURLString; // @synthesize vanityURLString=_vanityURLString;
- (void).cxx_destruct;
- (id)initWithVanityURLString:(id)arg1 url:(id)arg2 tcoURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

