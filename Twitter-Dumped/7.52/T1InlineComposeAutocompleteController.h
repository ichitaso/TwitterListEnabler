//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1AutocompleteViewController, TFNViewController, UIButton, UIPopoverPresentationController, UIView;
@protocol T1InlineComposeAutocompleteControllerDelegate;

@interface T1InlineComposeAutocompleteController : NSObject
{
    _Bool _isAutocompleteVisible;
    id <T1InlineComposeAutocompleteControllerDelegate> _delegate;
    long long _displayMode;
    T1AutocompleteViewController *_autocompleteViewController;
    TFNViewController *_containerViewController;
    UIPopoverPresentationController *_autocompletePopoverController;
    UIView *_navigationBarView;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
@property(nonatomic) __weak UIPopoverPresentationController *autocompletePopoverController; // @synthesize autocompletePopoverController=_autocompletePopoverController;
@property(nonatomic) __weak TFNViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak T1AutocompleteViewController *autocompleteViewController; // @synthesize autocompleteViewController=_autocompleteViewController;
@property(nonatomic) _Bool isAutocompleteVisible; // @synthesize isAutocompleteVisible=_isAutocompleteVisible;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) __weak id <T1InlineComposeAutocompleteControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateAutocompleteFrameInContainerViewController:(id)arg1 withAvailableFrame:(struct CGRect)arg2;
- (void)removeAutocompleteForAutocompleteViewController:(id)arg1 fromContainerViewController:(id)arg2;
- (void)showAutocompleteForAutocompleteViewController:(id)arg1 inContainerViewController:(id)arg2 inFrame:(struct CGRect)arg3 belowSubview:(id)arg4;
- (long long)_t1_displayModeInContainerInFrame:(struct CGRect)arg1;
- (double)_t1_statusBarHeight;
- (void)_t1_closeButtonPressed:(id)arg1;
- (void)_t1_addNavigationBarInContainerView:(id)arg1;
- (void)_t1_initializeAutocompleteNavigationBar;

@end

