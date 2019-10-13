//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class NSString, UIImage;

@interface TFNTwitterCallToAction : NSObject <NSCopying>
{
    UIImage *_image;
    NSString *_titleText;
    NSString *_detailText;
    NSString *_callToActionText;
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _activeRangeBlock;
    struct _NSRange _activeRange;
}

@property(copy, nonatomic) CDUnknownBlockType activeRangeBlock; // @synthesize activeRangeBlock=_activeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) struct _NSRange activeRange; // @synthesize activeRange=_activeRange;
@property(copy, nonatomic) NSString *callToActionText; // @synthesize callToActionText=_callToActionText;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

