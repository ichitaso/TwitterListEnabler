//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TFNDynamicColorSetterAdapter-Protocol.h>

@class NSString;

@interface TFNDynamicColorDefaultSetterAdapter : NSObject <TFNDynamicColorSetterAdapter>
{
}

+ (id)sharedSetterAdapter;
- (_Bool)dynamicColorSetterArguments:(id)arg1 haveDynamicColorsForObject:(id)arg2;
- (_Bool)dynamicColorSetterWithArguments:(id)arg1 shouldOverwriteSetterWithArguments:(id)arg2;
- (void)invokeDynamicColorSetter:(CDUnknownFunctionPointerType)arg1 forObject:(id)arg2 withSelector:(SEL)arg3 arguments:(id)arg4;
- (id)dynamicColorSetterArguments:(id)arg1 forObject:(id)arg2;
- (id)blockRecordingDynamicColorSetter:(SEL)arg1 withRecorder:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

