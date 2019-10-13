//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage, UIView;

@interface T1AmbientNotification : NSObject
{
    _Bool _shownUntilReplacement;
    unsigned long long _displayType;
    UIColor *_backgroundColor;
    UIView *_secondaryActionView;
    double _displayDuration;
    NSString *_storedMessage;
    CDUnknownBlockType _lazyMessageBlock;
    UIImage *_storedIcon;
    CDUnknownBlockType _lazyIconBlock;
}

@property(copy, nonatomic) CDUnknownBlockType lazyIconBlock; // @synthesize lazyIconBlock=_lazyIconBlock;
@property(retain, nonatomic) UIImage *storedIcon; // @synthesize storedIcon=_storedIcon;
@property(copy, nonatomic) CDUnknownBlockType lazyMessageBlock; // @synthesize lazyMessageBlock=_lazyMessageBlock;
@property(retain, nonatomic) NSString *storedMessage; // @synthesize storedMessage=_storedMessage;
@property(readonly, nonatomic) double displayDuration; // @synthesize displayDuration=_displayDuration;
@property(readonly, nonatomic) _Bool shownUntilReplacement; // @synthesize shownUntilReplacement=_shownUntilReplacement;
@property(readonly, nonatomic) UIView *secondaryActionView; // @synthesize secondaryActionView=_secondaryActionView;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) UIImage *icon;
- (id)initWithDisplayType:(unsigned long long)arg1 icon:(id)arg2 message:(id)arg3 secondaryActionView:(id)arg4 backgroundColor:(id)arg5 displayDuration:(double)arg6;
- (id)initWithDisplayType:(unsigned long long)arg1 icon:(id)arg2 message:(id)arg3 secondaryActionView:(id)arg4 backgroundColor:(id)arg5 shownUntilReplacement:(_Bool)arg6;
- (id)initWithDisplayType:(unsigned long long)arg1 lazyIcon:(CDUnknownBlockType)arg2 lazyMessage:(CDUnknownBlockType)arg3 secondaryActionView:(id)arg4 backgroundColor:(id)arg5;
- (id)initWithDisplayType:(unsigned long long)arg1 icon:(id)arg2 message:(id)arg3 secondaryActionView:(id)arg4 backgroundColor:(id)arg5;

@end

