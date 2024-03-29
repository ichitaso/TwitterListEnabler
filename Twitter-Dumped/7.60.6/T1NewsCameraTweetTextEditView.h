//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/NSLayoutManagerDelegate-Protocol.h>
#import <T1Twitter/NSTextStorageDelegate-Protocol.h>
#import <T1Twitter/T1AutocompleteControllerDelegate-Protocol.h>
#import <T1Twitter/UITextViewDelegate-Protocol.h>

@class NSString, NSTextContainer, NSTextStorage, T1AutocompleteController, T1ComposeRTLTextViewDelegate, T1NewsCameraTweetTextView, TFNTwitterSearchTypeaheadStore, TFSMainThreadRunLoopDeferredTask, UIColor, UIFont, UIPanGestureRecognizer;
@protocol T1NewsCameraTweetTextEditViewDelegate;

@interface T1NewsCameraTweetTextEditView : UIView <T1AutocompleteControllerDelegate, NSLayoutManagerDelegate, NSTextStorageDelegate, UITextViewDelegate>
{
    _Bool _autocompleting;
    _Bool _borderHidden;
    _Bool _scrollEnabled;
    _Bool _hasTopHiddenContent;
    _Bool _hasBottomHiddenContent;
    id <T1NewsCameraTweetTextEditViewDelegate> _delegate;
    TFNTwitterSearchTypeaheadStore *_typeaheadStore;
    UIFont *_font;
    double _largeFontSize;
    UIColor *_borderColor;
    unsigned long long _maximumNumberOfLinesForLargeFont;
    NSString *_inputLocaleIdentifier;
    UIView *_inputAccessoryView;
    NSTextStorage *_fittingTextStorage;
    NSTextContainer *_fittingTextContainer;
    UIFont *_fittingFont;
    T1NewsCameraTweetTextView *_textView;
    UIView *_topBorderView;
    UIView *_bottomBorderView;
    T1ComposeRTLTextViewDelegate *_composeRTLTextViewDelegate;
    TFSMainThreadRunLoopDeferredTask *_currentScrollToCursorTask;
    T1AutocompleteController *_autocompleteController;
}

@property(nonatomic) _Bool hasBottomHiddenContent; // @synthesize hasBottomHiddenContent=_hasBottomHiddenContent;
@property(nonatomic) _Bool hasTopHiddenContent; // @synthesize hasTopHiddenContent=_hasTopHiddenContent;
@property(retain, nonatomic) T1AutocompleteController *autocompleteController; // @synthesize autocompleteController=_autocompleteController;
@property(retain, nonatomic) TFSMainThreadRunLoopDeferredTask *currentScrollToCursorTask; // @synthesize currentScrollToCursorTask=_currentScrollToCursorTask;
@property(readonly, nonatomic) T1ComposeRTLTextViewDelegate *composeRTLTextViewDelegate; // @synthesize composeRTLTextViewDelegate=_composeRTLTextViewDelegate;
@property(retain, nonatomic) UIView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(retain, nonatomic) UIView *topBorderView; // @synthesize topBorderView=_topBorderView;
@property(readonly, nonatomic) T1NewsCameraTweetTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIFont *fittingFont; // @synthesize fittingFont=_fittingFont;
@property(readonly, nonatomic) NSTextContainer *fittingTextContainer; // @synthesize fittingTextContainer=_fittingTextContainer;
@property(readonly, nonatomic) NSTextStorage *fittingTextStorage; // @synthesize fittingTextStorage=_fittingTextStorage;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(copy, nonatomic) NSString *inputLocaleIdentifier; // @synthesize inputLocaleIdentifier=_inputLocaleIdentifier;
@property(nonatomic) unsigned long long maximumNumberOfLinesForLargeFont; // @synthesize maximumNumberOfLinesForLargeFont=_maximumNumberOfLinesForLargeFont;
@property(nonatomic, getter=isBorderHidden) _Bool borderHidden; // @synthesize borderHidden=_borderHidden;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double largeFontSize; // @synthesize largeFontSize=_largeFontSize;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic, getter=isAutocompleting) _Bool autocompleting; // @synthesize autocompleting=_autocompleting;
@property(retain, nonatomic) TFNTwitterSearchTypeaheadStore *typeaheadStore; // @synthesize typeaheadStore=_typeaheadStore;
@property(nonatomic) __weak id <T1NewsCameraTweetTextEditViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)autocompleteController:(id)arg1 didReceiveResult:(id)arg2;
- (void)autocompleteControllerDidEnd:(id)arg1;
- (void)autocompleteControllerDidBegin:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)_t1_main_updateBorderHidden;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_t1_main_updateFittingTextContainer;
- (void)layoutManager:(id)arg1 textContainer:(id)arg2 didChangeGeometryFromSize:(struct CGSize)arg3;
- (void)_t1_main_updateFittingFont;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)didMoveToWindow;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)_t1_notification_textViewDidChangeInputMode:(id)arg1;
- (void)_t1_deferred_scrollToCursor;
- (void)scrollToCursor;
- (void)scrollToTop;
- (void)selectAutocompleteItem:(id)arg1;
- (void)endAutocompleting;
@property(nonatomic) double leadingContentInset;
@property(retain, nonatomic) UIView *textInputSupplementaryView;
@property(retain, nonatomic) UIView *leadingAccessoryView;
@property(readonly, nonatomic) struct CGSize textContentSize;
- (void)_t1_main_updateTextViewPanGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property(nonatomic, getter=isEditing) _Bool editing;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *placeholderText;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
- (void)_t1_main_updateBorderColor;
@property(retain, nonatomic) UIColor *tintColor;
@property(retain, nonatomic) UIColor *placeholderTextColor;
@property(retain, nonatomic) UIColor *textColor;
- (void)_t1_main_updateTextViewFont;
- (void)_t1_newsCameraTweetTextEditView_initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

