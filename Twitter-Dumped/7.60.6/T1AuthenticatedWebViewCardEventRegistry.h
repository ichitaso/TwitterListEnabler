//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1AuthenticatedWebViewCardModel, T1CardView;
@protocol T1CardViewDelegate;

@interface T1AuthenticatedWebViewCardEventRegistry : NSObject
{
    T1CardView *_view;
    id <T1CardViewDelegate> _delegate;
    T1AuthenticatedWebViewCardModel *_viewModel;
    SEL _didTapTitleSEL;
    SEL _didTapCallToActionSEL;
    SEL _didTapImageSEL;
    SEL _didTapContainerSEL;
}

@property(nonatomic) SEL didTapContainerSEL; // @synthesize didTapContainerSEL=_didTapContainerSEL;
@property(nonatomic) SEL didTapImageSEL; // @synthesize didTapImageSEL=_didTapImageSEL;
@property(nonatomic) SEL didTapCallToActionSEL; // @synthesize didTapCallToActionSEL=_didTapCallToActionSEL;
@property(nonatomic) SEL didTapTitleSEL; // @synthesize didTapTitleSEL=_didTapTitleSEL;
@property(retain, nonatomic) T1AuthenticatedWebViewCardModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <T1CardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak T1CardView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_registerEventHandlers;
- (void)didTapImage:(id)arg1;
- (void)didTapCallToAction:(id)arg1 event:(id)arg2;
- (void)didTapTitle:(id)arg1;
- (void)didTapContainer:(id)arg1;
- (void)_didTap:(id)arg1 eventType:(id)arg2;
- (void)registerImageHighlightView:(id)arg1;
- (void)registerCallToActionButton:(id)arg1;
- (void)registerContainerHighlightView:(id)arg1;
- (void)registerTitleHighlightView:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)init;

@end

