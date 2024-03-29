//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1QuotedStatusViewLayoutDelegate.h>

@interface T1MediaForwardQuotedStatusViewLayoutDelegate : T1QuotedStatusViewLayoutDelegate
{
}

+ (id)sharedLayoutDelegate;
- (_Bool)layoutState:(id)arg1 isValidForViewModel:(id)arg2 account:(id)arg3 width:(double)arg4 layoutMetrics:(id)arg5;
- (unsigned long long)attachmentTypeForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (struct CGSize)layoutAttachmentAsPhotoVideoForward:(id)arg1 type:(unsigned long long)arg2 forViewModel:(id)arg3 options:(unsigned long long)arg4 account:(id)arg5 maxX:(double)arg6 contentX:(double)arg7 contentY:(double)arg8;
- (double)layoutMediaFirstAnatomy:(id)arg1 forViewModel:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 attachmentType:(unsigned long long)arg5 layoutMetrics:(id)arg6 contentX:(double)arg7 contentMaxX:(double)arg8 contentY:(double)arg9;
- (double)layoutTextFirstAnatomy:(id)arg1 forViewModel:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 attachmentType:(unsigned long long)arg5 layoutMetrics:(id)arg6 contentX:(double)arg7 contentY:(double)arg8 contentWidth:(double)arg9 maxContentHeight:(double)arg10 allowHorizontalPadding:(_Bool)arg11;
- (double)_t1_layoutMedia:(id)arg1 forViewModel:(id)arg2 options:(unsigned long long)arg3 account:(id)arg4 layoutMetrics:(id)arg5 attachmentType:(unsigned long long)arg6 contentX:(double)arg7 contentMaxX:(double)arg8 contentY:(double)arg9;
- (id)layoutStateForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 width:(double)arg4 layoutMetrics:(id)arg5 withPreviousLayoutState:(id)arg6;

@end

