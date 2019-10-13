//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/UIScrollViewDelegate-Protocol.h>

@class UIScrollView;

@protocol TFNProgrammaticScrollViewDelegate <UIScrollViewDelegate>

@optional
- (void)undoScrollToTopUsingScrollState:(id)arg1 animated:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (id)scrollStateForUndoScrollToTop;
- (void)scrollViewDidScrollProgrammatically:(UIScrollView *)arg1 animated:(_Bool)arg2;
- (void)scrollViewWillScrollProgrammatically:(UIScrollView *)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidProgrammaticallyScrollToBottom:(UIScrollView *)arg1;
- (void)scrollViewWillProgrammaticallyScrollToBottom:(UIScrollView *)arg1;
- (void)scrollViewWillProgrammaticallyScrollToTop:(UIScrollView *)arg1;
- (_Bool)scrollViewShouldProgrammaticallyScrollToTop:(UIScrollView *)arg1;
@end

