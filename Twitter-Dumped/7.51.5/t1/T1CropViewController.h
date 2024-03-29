//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/T1CropContentViewDelegate-Protocol.h>
#import <T1Twitter/T1JumpBackToHomeTimelineBehavior-Protocol.h>
#import <T1Twitter/T1TwitterAuthenticated-Protocol.h>

@class NSString, T1CropContentView, T1StickerCanvas, TFNHUD, TFNTwitterAccount, TFNTwitterMediaAssetFilterParameters, TFSTimer, UIButton, UIImage;
@protocol T1CropViewControllerDelegate;

@interface T1CropViewController : UIViewController <T1CropContentViewDelegate, T1TwitterAuthenticated, T1JumpBackToHomeTimelineBehavior>
{
    UIImage *_image;
    TFNTwitterMediaAssetFilterParameters *_initialParameters;
    struct CGSize _minSize;
    UIButton *_selectedButton;
    long long _cropShape;
    long long _fixedCropShape;
    TFNHUD *_hud;
    TFSTimer *_hudTimer;
    T1CropContentView *_contentView;
    T1StickerCanvas *_stickerCanvas;
    TFNTwitterAccount *_account;
    id <T1CropViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <T1CropViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)cropContentViewBeganCustomCrop:(id)arg1;
- (void)_tapRotate:(id)arg1;
- (struct CGSize)_cropImageSize:(long long)arg1;
- (void)_selectCropShape:(long long)arg1;
- (void)_selectButton:(id)arg1;
- (void)_tapCropShapeSquare:(id)arg1;
- (void)_tapCropShapeWide:(id)arg1;
- (void)_tapCropShapeOriginal:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_hideHUD;
- (void)_hudTimerCallback:(id)arg1;
- (void)_showHUDWithDelay:(double)arg1;
- (void)_apply:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)_resetContentInset;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLoad;
@property(nonatomic) _Bool userInteractionEnabled;
- (id)initWithImage:(id)arg1 parameters:(id)arg2 minSize:(struct CGSize)arg3 fixedCropShape:(long long)arg4 account:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

