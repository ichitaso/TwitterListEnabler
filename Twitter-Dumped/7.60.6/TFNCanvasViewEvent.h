//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TFNCanvasViewEvent : NSObject
{
    NSString *_type;
    NSMutableDictionary *_state;
}

+ (id)eventWithCardType:(long long)arg1 state:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isStatusEngagementEvent) _Bool statusEngagementEvent;
- (id)initWithType:(id)arg1;

@end

