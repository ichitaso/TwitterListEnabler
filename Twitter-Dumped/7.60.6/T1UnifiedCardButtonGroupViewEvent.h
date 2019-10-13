//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UnifiedCardComponentViewEvent.h>

@class NSDictionary;

@interface T1UnifiedCardButtonGroupViewEvent : T1UnifiedCardComponentViewEvent
{
    unsigned long long _buttonIndex;
    NSDictionary *_buttonScribeParameters;
}

@property(copy, nonatomic) NSDictionary *buttonScribeParameters; // @synthesize buttonScribeParameters=_buttonScribeParameters;
@property(nonatomic) unsigned long long buttonIndex; // @synthesize buttonIndex=_buttonIndex;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)eventMetadataWithDestinationPresenterResult:(id)arg1;
- (id)initWithComponentView:(id)arg1 eventType:(unsigned long long)arg2 destination:(id)arg3;
- (id)initWithComponentView:(id)arg1 eventType:(unsigned long long)arg2;
- (id)initWithButtonGroupView:(id)arg1 eventType:(unsigned long long)arg2 buttonIndex:(unsigned long long)arg3 destination:(id)arg4;

@end

