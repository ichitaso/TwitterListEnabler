//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString;

@protocol TSPKeyValueStore <NSObject>
- (_Bool)tsp_containsObjectForKey:(NSString *)arg1 result:(out _Bool *)arg2 error:(id *)arg3;
- (_Bool)tsp_removeAllObjectsWithError:(out id *)arg1;
- (_Bool)tsp_removeObjectForKey:(NSString *)arg1 error:(out id *)arg2;
- (_Bool)tsp_storeObject:(id)arg1 forKey:(NSString *)arg2 error:(out id *)arg3;
- (_Bool)tsp_loadObject:(out id *)arg1 forKey:(NSString *)arg2 error:(out id *)arg3;
@end

