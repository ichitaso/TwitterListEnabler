//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSString, TFNTwitterMediaRenderLayout, TFNTwitterMomentRenderTheme;

@interface TFNTwitterMomentRender : NSObject <TFSPlistSerialization>
{
    TFNTwitterMediaRenderLayout *_renderLayout;
    TFNTwitterMomentRenderTheme *_renderTheme;
}

+ (id)momentRenderWithJSONData:(id)arg1;
@property(readonly, nonatomic) TFNTwitterMomentRenderTheme *renderTheme; // @synthesize renderTheme=_renderTheme;
@property(readonly, nonatomic) TFNTwitterMediaRenderLayout *renderLayout; // @synthesize renderLayout=_renderLayout;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)init;
- (id)initWithRenderLayout:(id)arg1;
- (id)initWithRenderTheme:(id)arg1;
- (id)initWithRenderLayout:(id)arg1 renderTheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

