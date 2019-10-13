//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSFlavoredRange.h>

@class TFSTwitterTagSet;

@interface TFNMediaTagTextActiveRange : TFSFlavoredRange
{
    TFSTwitterTagSet *_tagSet;
}

@property(readonly, nonatomic) TFSTwitterTagSet *tagSet; // @synthesize tagSet=_tagSet;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTagSet:(id)arg1 displayString:(id)arg2 displayRange:(struct _NSRange)arg3;
- (id)initWithRangeValue:(struct _NSRange)arg1 rangeFlavor:(long long)arg2 displayString:(id)arg3;

@end

