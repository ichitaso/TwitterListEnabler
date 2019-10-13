//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSTwitterTimelinePlistSerialization-Protocol.h>

@class NSArray, NSString, NSURL;

@interface TFNTwitterFeedbackAction : NSObject <TFSTwitterTimelinePlistSerialization>
{
    _Bool _hasUndoAction;
    _Bool _dismiss;
    _Bool _shouldDismissReferencingEntries;
    NSString *_type;
    NSString *_URTActionKey;
    NSString *_prompt;
    NSString *_confirmation;
    NSURL *_actionURL;
    long long _icon;
    NSArray *_childActions;
}

@property(readonly, nonatomic) NSArray *childActions; // @synthesize childActions=_childActions;
@property(readonly, nonatomic) _Bool shouldDismissReferencingEntries; // @synthesize shouldDismissReferencingEntries=_shouldDismissReferencingEntries;
@property(readonly, nonatomic, getter=doDismiss) _Bool dismiss; // @synthesize dismiss=_dismiss;
@property(readonly, nonatomic) long long icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) _Bool hasUndoAction; // @synthesize hasUndoAction=_hasUndoAction;
@property(readonly, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(readonly, nonatomic) NSString *confirmation; // @synthesize confirmation=_confirmation;
@property(readonly, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(readonly, nonatomic) NSString *URTActionKey; // @synthesize URTActionKey=_URTActionKey;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *iconImageName;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithType:(id)arg1 URTActionKey:(id)arg2 prompt:(id)arg3 confirmation:(id)arg4 actionURLString:(id)arg5 hasUndoAction:(_Bool)arg6 icon:(long long)arg7 dismiss:(_Bool)arg8 shouldDismissReferencingEntries:(_Bool)arg9 childActions:(id)arg10;
- (id)init;

@end

