//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter42DirectMessageConversationSlideshowBehavior : NSObject
{
    // Error parsing type: , name: conversationViewController
    // Error parsing type: , name: mediaAutoplayBehavior
    // Error parsing type: , name: presentedMediaAttachment
    // Error parsing type: , name: pendingSlideshowDataSource
}

- (void).cxx_destruct;
- (id)init;
- (void)slideshow:(id)arg1 status:(id)arg2 didSelectActiveRange:(id)arg3;
- (void)slideshow:(id)arg1 dismissAndPresentViewController:(id)arg2;
- (void)slideshow:(id)arg1 didSelectUser:(id)arg2;
- (void)slideshow:(id)arg1 didDeleteStatus:(id)arg2;
- (void)slideshow:(id)arg1 didSelectStatus:(id)arg2;
- (void)slideshow:(id)arg1 didSelectStatusReply:(id)arg2;
- (void)setPreviewImageHidden:(_Bool)arg1 forImageTransitionViewController:(id)arg2 object:(id)arg3;
- (void)imageTransitionViewController:(id)arg1 didTransition:(_Bool)arg2 object:(id)arg3;
- (void)imageTransitionViewController:(id)arg1 willTransition:(_Bool)arg2 object:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageHostViewFrameInWindow:(id)arg2 forObject:(id)arg3;
- (_Bool)imageTransitionViewController:(id)arg1 shouldDismissPresentingViewControllerForObject:(id)arg2;
- (long long)imageTransitionViewController:(id)arg1 contentModeForPreviewFrameOfObject:(id)arg2;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3;
- (id)slideshowWithMediaAttachment:(id)arg1 pagedInConversationEntries:(id)arg2;
- (void)presentGroupAvatarSlideshow:(id)arg1;
- (void)presentSlideshow:(id)arg1 pagedInConversationEntries:(id)arg2 onKeyboardHide:(_Bool)arg3;

@end

