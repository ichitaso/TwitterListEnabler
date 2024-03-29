//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNForm.h>

@class NSString, T1SignUpFormField, T1SignUpFormFieldInfo, TFNActiveTextItem, TFNTwitterSignUpSuggestions;

@interface T1ChangeUsernameForm : TFNForm
{
    T1SignUpFormFieldInfo *_formFieldInfo;
    long long _options;
    T1SignUpFormField *_usernameField;
    TFNTwitterSignUpSuggestions *_usernameSuggestions;
    TFNActiveTextItem *_suggestions;
    NSString *_suggestionsString;
}

@property(retain, nonatomic) NSString *suggestionsString; // @synthesize suggestionsString=_suggestionsString;
@property(retain, nonatomic) TFNActiveTextItem *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) TFNTwitterSignUpSuggestions *usernameSuggestions; // @synthesize usernameSuggestions=_usernameSuggestions;
@property(retain, nonatomic) T1SignUpFormField *usernameField; // @synthesize usernameField=_usernameField;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) T1SignUpFormFieldInfo *formFieldInfo; // @synthesize formFieldInfo=_formFieldInfo;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *newValue;
- (_Bool)isSubmittable;
- (id)sections;
- (id)init;
- (id)initWithFormFieldInfo:(id)arg1 options:(long long)arg2;
- (id)initWithFormFieldInfo:(id)arg1 userInput:(id)arg2 options:(long long)arg3;

@end

