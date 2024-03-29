//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1CameraContainerViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1MediaChooserCustomEditorDelegate-Protocol.h>
#import <T1Twitter/UIImagePickerControllerDelegate-Protocol.h>
#import <T1Twitter/UINavigationControllerDelegate-Protocol.h>

@class NSArray, NSError, NSString, TFNModalSheetViewController, TFNTwitterAccount, UIImage, UINavigationController, UIView, UIViewController;
@protocol T1MediaChooserCustomEditor, T1MediaChooserDelegate;

@interface T1MediaChooser : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, T1MediaChooserCustomEditorDelegate, T1CameraContainerViewControllerDelegate>
{
    struct {
        unsigned int presented:1;
        unsigned int shouldSaveToLibrary:1;
    } _flags;
    TFNModalSheetViewController *_modalSheetController;
    _Bool _removeImage;
    UIImage *_image;
    NSError *_error;
    long long _selectionType;
    id <T1MediaChooserDelegate> _delegate;
    UIViewController<T1MediaChooserCustomEditor> *_customEditingController;
    CDUnknownBlockType _block;
    CDUnknownBlockType _cancelBlock;
    NSString *_removePhotoLabel;
    NSArray *_extraActionItems;
    long long _choices;
    TFNTwitterAccount *_account;
    UINavigationController *_navigationViewController;
    UIView *_inView;
    struct CGRect _fromRect;
}

+ (long long)availableOptions:(long long)arg1;
@property(retain, nonatomic) UIView *inView; // @synthesize inView=_inView;
@property(nonatomic) struct CGRect fromRect; // @synthesize fromRect=_fromRect;
@property(retain, nonatomic) UINavigationController *navigationViewController; // @synthesize navigationViewController=_navigationViewController;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) long long choices; // @synthesize choices=_choices;
@property(copy, nonatomic) NSArray *extraActionItems; // @synthesize extraActionItems=_extraActionItems;
@property(copy, nonatomic) NSString *removePhotoLabel; // @synthesize removePhotoLabel=_removePhotoLabel;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIViewController<T1MediaChooserCustomEditor> *customEditingController; // @synthesize customEditingController=_customEditingController;
@property(nonatomic) __weak id <T1MediaChooserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectionType; // @synthesize selectionType=_selectionType;
@property(nonatomic) _Bool removeImage; // @synthesize removeImage=_removeImage;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)presentFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)showActionSheet;
- (void)chooseExistingPhoto;
- (void)_presentModalContentViewController:(id)arg1 fromViewController:(id)arg2;
- (void)_presentViewController:(id)arg1 alwaysInFullScreen:(_Bool)arg2;
- (void)_presentViewController:(id)arg1;
- (long long)_customCameraSource;
- (void)_showCustomCamera;
- (void)_showNativeCamera;
- (void)takePhoto;
- (void)cameraContainerViewControllerDidCancel:(id)arg1;
- (void)cameraContainerViewController:(id)arg1 didAttachPhotoAsset:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)customEditorDidCancel:(id)arg1;
- (void)customEditor:(id)arg1 didEditImage:(id)arg2;
- (void)addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)handleAssetsLibraryURL:(id)arg1 fallbackToImage:(id)arg2;
- (void)finish;
- (id)topViewController;
- (id)initWithOptions:(long long)arg1 account:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

