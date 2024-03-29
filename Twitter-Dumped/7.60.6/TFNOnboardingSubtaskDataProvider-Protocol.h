//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSString, T1PhotoSelection, UIImage;

@protocol TFNOnboardingSubtaskDataProvider
- (T1PhotoSelection *)photoSelectionForKey:(NSString *)arg1 inSubtaskWithID:(NSString *)arg2;
- (_Bool)boolForKey:(NSString *)arg1 inSubtaskWithID:(NSString *)arg2 defaultValue:(_Bool)arg3;
- (UIImage *)imageForKey:(NSString *)arg1 inSubtaskWithID:(NSString *)arg2;
- (long long)integerForKey:(NSString *)arg1 inSubtaskWithID:(NSString *)arg2 defaultValue:(long long)arg3;
- (NSDate *)dateForKey:(NSString *)arg1 inSubtaskWithID:(NSString *)arg2;
- (NSString *)stringForKey:(NSString *)arg1 inSubtaskWithID:(NSString *)arg2;
@end

