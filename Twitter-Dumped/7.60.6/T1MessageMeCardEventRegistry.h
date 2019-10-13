//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1CardView;
@protocol T1CardViewDelegate;

@interface T1MessageMeCardEventRegistry : NSObject
{
    T1CardView *_view;
    id <T1CardViewDelegate> _delegate;
    SEL _didTapDMButtonSEL;
}

@property(nonatomic) SEL didTapDMButtonSEL; // @synthesize didTapDMButtonSEL=_didTapDMButtonSEL;
@property(nonatomic) __weak id <T1CardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak T1CardView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_registerEventHandlers;
- (void)didTapDMPromptButton:(id)arg1 event:(id)arg2;
- (void)registerDMPromptButton:(id)arg1;
- (id)initWithView:(id)arg1;

@end

