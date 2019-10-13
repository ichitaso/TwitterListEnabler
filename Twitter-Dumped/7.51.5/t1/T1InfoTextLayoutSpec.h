//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1InfoTextLayoutSpec-Protocol.h>

@class NSSet, NSString, UIColor, UIFont, UIImage;

@interface T1InfoTextLayoutSpec : NSObject <T1InfoTextLayoutSpec>
{
    _Bool _isTitleMultiline;
    _Bool _renderFromRight;
    _Bool _hasSponsorship;
    UIImage *_badge;
    NSString *_title;
    UIFont *_font;
    UIColor *_color;
    NSString *_details;
    NSSet *_titleHyperlinks;
    NSSet *_detailsHyperlinks;
    NSString *_sponsorshipScribeComponent;
    struct CGSize _badgeSize;
}

+ (id)_t1_defaultTextColor;
+ (id)_t1_badgeForOptions:(unsigned long long)arg1 fillColor:(id)arg2;
+ (id)_t1_badgeForOptions:(unsigned long long)arg1 account:(id)arg2;
+ (struct CGSize)_t1_badgeSizeForOptions:(unsigned long long)arg1;
+ (id)_t1_userTextColorForOptions:(unsigned long long)arg1 userColorScheme:(long long)arg2;
+ (_Bool)shouldShowInfoTextForViewModel:(id)arg1 options:(unsigned long long)arg2;
+ (id)layoutWithOriginalSpec:(id)arg1 replacedTitle:(id)arg2;
+ (id)layoutForUserViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 font:(id)arg4 userColorScheme:(long long)arg5 willLayout:(_Bool)arg6;
+ (id)layoutForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 willLayout:(_Bool)arg4;
@property(readonly, copy, nonatomic) NSString *sponsorshipScribeComponent; // @synthesize sponsorshipScribeComponent=_sponsorshipScribeComponent;
@property(readonly, nonatomic) _Bool hasSponsorship; // @synthesize hasSponsorship=_hasSponsorship;
@property(readonly, nonatomic) _Bool renderFromRight; // @synthesize renderFromRight=_renderFromRight;
@property(readonly, nonatomic) _Bool isTitleMultiline; // @synthesize isTitleMultiline=_isTitleMultiline;
@property(readonly, nonatomic) struct CGSize badgeSize; // @synthesize badgeSize=_badgeSize;
@property(readonly, copy, nonatomic) NSSet *detailsHyperlinks; // @synthesize detailsHyperlinks=_detailsHyperlinks;
@property(readonly, copy, nonatomic) NSSet *titleHyperlinks; // @synthesize titleHyperlinks=_titleHyperlinks;
@property(readonly, copy, nonatomic) NSString *details; // @synthesize details=_details;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIImage *badge; // @synthesize badge=_badge;
- (void).cxx_destruct;
- (_Bool)isEqualToLayoutSpec:(id)arg1;
- (id)initWithBadge:(id)arg1 title:(id)arg2 details:(id)arg3 titleHyperlinks:(id)arg4 detailsHyperlinks:(id)arg5 color:(id)arg6 font:(id)arg7 badgeSize:(struct CGSize)arg8 isTitleMultiline:(_Bool)arg9 renderFromRight:(_Bool)arg10 hasSponsorship:(_Bool)arg11 sponsorshipScribeComponent:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

