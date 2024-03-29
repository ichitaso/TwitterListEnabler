//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1UnifiedCardComponentViewLayoutState-Protocol.h>

@class TFNLayoutMetrics;
@protocol TFNTwitterUnifiedCardComponentModel;

@interface T1UnifiedCardDetailsComponentViewLayoutState : NSObject <T1UnifiedCardComponentViewLayoutState>
{
    _Bool _isLastComponent;
    id <TFNTwitterUnifiedCardComponentModel> _component;
    TFNLayoutMetrics *_layoutMetrics;
    struct CGSize _size;
    struct CGRect _titleFrame;
    struct CGRect _subtitleFrame;
}

@property(readonly, nonatomic) TFNLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(readonly, nonatomic) struct CGRect subtitleFrame; // @synthesize subtitleFrame=_subtitleFrame;
@property(readonly, nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(readonly, nonatomic) _Bool isLastComponent; // @synthesize isLastComponent=_isLastComponent;
@property(readonly, nonatomic) id <TFNTwitterUnifiedCardComponentModel> component; // @synthesize component=_component;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)initWithDetailsComponent:(id)arg1 isLastComponent:(_Bool)arg2 size:(struct CGSize)arg3 titleFrame:(struct CGRect)arg4 subtitleFrame:(struct CGRect)arg5 layoutMetrics:(id)arg6;

@end

