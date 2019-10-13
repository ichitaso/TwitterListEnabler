//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1ComposeTypeaheadViewControllerDelegate-Protocol.h>

@class NSString, T1ComposeTypeaheadViewController, TFNTwitterAccount, UITextView;
@protocol T1DirectMessageAutocompleteControllerDataSource, T1DirectMessageAutocompleteControllerDelegate;

@interface T1DirectMessageAutocompleteController : NSObject <T1ComposeTypeaheadViewControllerDelegate>
{
    _Bool _autocompleting;
    _Bool _forcedNameAutocomplete;
    _Bool _forcedHashtagAutocomplete;
    UITextView *_textView;
    long long _autocompleteType;
    id <T1DirectMessageAutocompleteControllerDataSource> _autocompleteDataSource;
    id <T1DirectMessageAutocompleteControllerDelegate> _autocompleteDelegate;
    unsigned long long _typeaheadSourceType;
    NSString *_typeaheadString;
    T1ComposeTypeaheadViewController *_autocompleteViewController;
    TFNTwitterAccount *_account;
    unsigned long long _autocompleteStartIndex;
}

@property(nonatomic) unsigned long long autocompleteStartIndex; // @synthesize autocompleteStartIndex=_autocompleteStartIndex;
@property(nonatomic) _Bool forcedHashtagAutocomplete; // @synthesize forcedHashtagAutocomplete=_forcedHashtagAutocomplete;
@property(nonatomic) _Bool forcedNameAutocomplete; // @synthesize forcedNameAutocomplete=_forcedNameAutocomplete;
@property(nonatomic) _Bool autocompleting; // @synthesize autocompleting=_autocompleting;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) T1ComposeTypeaheadViewController *autocompleteViewController; // @synthesize autocompleteViewController=_autocompleteViewController;
@property(retain, nonatomic) NSString *typeaheadString; // @synthesize typeaheadString=_typeaheadString;
@property(nonatomic) unsigned long long typeaheadSourceType; // @synthesize typeaheadSourceType=_typeaheadSourceType;
@property(nonatomic) __weak id <T1DirectMessageAutocompleteControllerDelegate> autocompleteDelegate; // @synthesize autocompleteDelegate=_autocompleteDelegate;
@property(nonatomic) __weak id <T1DirectMessageAutocompleteControllerDataSource> autocompleteDataSource; // @synthesize autocompleteDataSource=_autocompleteDataSource;
@property(nonatomic) long long autocompleteType; // @synthesize autocompleteType=_autocompleteType;
@property(readonly, nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)composeTypeaheadViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)composeTypeaheadViewController:(id)arg1 didSelectItem:(id)arg2;
- (struct _NSRange)insertAutocompleteString:(id)arg1 atRange:(struct _NSRange)arg2;
- (_Bool)_isCharacterAtIndex:(unsigned long long)arg1 preceededByWhitespaceInString:(id)arg2;
- (void)_textViewDidChangeSelection;
- (void)_textViewDidChange;
- (void)_updateAutocompleter:(id)arg1;
- (void)forceEnableHashtagAutocomplete;
- (void)forceEnableNameAutocomplete;
- (void)_forceAutoComplete;
- (void)_startOrUpdate;
- (void)_updateTypeaheadResults:(id)arg1;
- (void)_updateResults:(id)arg1;
- (void)_endAutocompleting;
- (void)_removeTextViewNotifications;
- (void)_registerForTextViewNotifications;
- (void)endAutocompleting;
- (id)init;
- (id)initWithTextView:(id)arg1 account:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

