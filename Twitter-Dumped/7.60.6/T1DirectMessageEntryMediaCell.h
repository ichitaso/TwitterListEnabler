//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DirectMessageEntryBaseCell.h>

@class T1DirectMessageAbstractConversationEntryViewModel, T1InlineMediaView;
@protocol T1DirectMessageAbstractEntryCellDelegate;

@interface T1DirectMessageEntryMediaCell : T1DirectMessageEntryBaseCell
{
    // Error parsing type: , name: mediaDelegate
    // Error parsing type: , name: mediaPreviewView
    // Error parsing type: , name: mediaPreviewContainer
    // Error parsing type: , name: altTextBadge
    // Error parsing type: , name: mediaBubbleDimmingView
    // Error parsing type: , name: mediaBubbleView
    // Error parsing type: , name: mediaPreviewHeightConstraint
}

- (void).cxx_destruct;
- (void)mediaUploadProgress:(id)arg1;
@property(nonatomic, readonly) T1InlineMediaView *mediaPreviewView; // @synthesize mediaPreviewView;
- (void)updateConstraints;
@property(nonatomic, retain) T1DirectMessageAbstractConversationEntryViewModel *entryViewModel;
- (_Bool)accessibilityActivate;
@property(nonatomic) __weak id <T1DirectMessageAbstractEntryCellDelegate> delegate;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

