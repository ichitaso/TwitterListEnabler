//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNLayoutableViewLayoutDelegate-Protocol.h>

@class NSString;

@interface T1StatusAuthorViewLayoutDelegate : NSObject <TFNLayoutableViewLayoutDelegate>
{
}

+ (id)sharedLayoutDelegate;
- (_Bool)_t1_shouldShowUsernameLabelForViewModel:(id)arg1;
- (_Bool)shouldShowForwardDismissForViewModel:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)shouldShowDesignatorBadgeForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (_Bool)_t1_shouldShowCaretForViewModel:(id)arg1 options:(unsigned long long)arg2 hasSocialText:(_Bool)arg3;
- (_Bool)_t1_shouldShowTimestampForViewModel:(id)arg1 options:(unsigned long long)arg2 displayType:(unsigned long long)arg3;
- (_Bool)shouldMoveTimestamp:(unsigned long long)arg1;
- (id)_t1_timestampColorForOptions:(unsigned long long)arg1 status:(id)arg2;
- (_Bool)_t1_isMultilineLayoutViewModel:(id)arg1 displayType:(unsigned long long)arg2;
- (id)nameFontForOptions:(unsigned long long)arg1 displayType:(unsigned long long)arg2;
- (id)boltBadgeImage;
- (id)_t1_badgeImageForViewModel:(id)arg1 options:(unsigned long long)arg2;
- (id)timestampTextForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (id)detailFontForDisplayType:(unsigned long long)arg1;
- (id)detailFontForMultiLineLayout:(_Bool)arg1;
- (_Bool)_adjustLayoutState:(id)arg1 forUpdatedTimestampInView:(id)arg2;
- (struct CGSize)layoutableView:(id)arg1 sizeThatFits:(struct CGSize)arg2;
- (void)layoutSubviewsForLayoutableView:(id)arg1;
- (_Bool)_t1_showOnlyAuthorForOptions:(unsigned long long)arg1 account:(id)arg2;
- (void)_layoutDesignatorBadge:(id)arg1 maxWidth:(double)arg2;
- (struct CGRect)_authorBadgeFrame:(struct CGRect)arg1 withImage:(id)arg2;
- (void)_layoutBadge:(id)arg1 withImage:(id)arg2 moveTimestamp:(_Bool)arg3;
- (void)_performLayout:(id)arg1 hasSocialText:(_Bool)arg2 avatarSize:(struct CGSize)arg3 timestamp:(id)arg4 width:(double)arg5;
- (_Bool)layoutState:(id)arg1 isValidForViewModel:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 displayType:(unsigned long long)arg5 width:(double)arg6 layoutMetrics:(id)arg7;
- (_Bool)layoutState:(id)arg1 isValidForViewModel:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 width:(double)arg5 layoutMetrics:(id)arg6;
- (struct UIEdgeInsets)baselineEdgeInsetsForLayoutState:(id)arg1;
- (struct CGSize)sizeForLayoutState:(id)arg1;
- (id)layoutStateForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 hasSocialText:(_Bool)arg4 displayType:(unsigned long long)arg5 width:(double)arg6 layoutMetrics:(id)arg7 withPreviousLayoutState:(id)arg8;
- (id)layoutStateForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 width:(double)arg4 layoutMetrics:(id)arg5 withPreviousLayoutState:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

