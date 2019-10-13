//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class T1UnifiedCardView, TFNTwitterPromotedContent, TFNTwitterStatus, TFNTwitterUnifiedCard;

@interface T1UnifiedCardItem : NSObject
{
    TFNTwitterStatus *_status;
    TFNTwitterUnifiedCard *_unifiedCard;
    TFNTwitterPromotedContent *_promotedContent;
    T1UnifiedCardView *_unifiedCardView;
}

@property(nonatomic) __weak T1UnifiedCardView *unifiedCardView; // @synthesize unifiedCardView=_unifiedCardView;
@property(readonly, nonatomic) TFNTwitterPromotedContent *promotedContent; // @synthesize promotedContent=_promotedContent;
@property(readonly, nonatomic) TFNTwitterUnifiedCard *unifiedCard; // @synthesize unifiedCard=_unifiedCard;
@property(readonly, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithUnifiedCard:(id)arg1 inStatus:(id)arg2 promotedContent:(id)arg3;
- (id)init;

@end

