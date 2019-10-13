//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UILongPressGestureRecognizer, UIView;
@protocol T1PhotoGalleryViewCellDelegate;

@interface T1PhotoGalleryViewCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    _Bool _enabled;
    id <T1PhotoGalleryViewCellDelegate> _delegate;
    UIView *_containerView;
    UIView *_tappableContentView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) UIView *tappableContentView; // @synthesize tappableContentView=_tappableContentView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <T1PhotoGalleryViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)animateAlongsideSelectionAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateSelection;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

