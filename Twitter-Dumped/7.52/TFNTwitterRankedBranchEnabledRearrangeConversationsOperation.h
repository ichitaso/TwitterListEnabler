//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterRichTimelineStreamOperation-Protocol.h>

@interface TFNTwitterRankedBranchEnabledRearrangeConversationsOperation : NSObject <TFNTwitterRichTimelineStreamOperation>
{
}

- (id)_nRepliesStatusItemForStatus:(id)arg1 focalStatusID:(long long)arg2 asTweetstorm:(_Bool)arg3;
- (void)_tfn_addNRepliesItemToStreamObjectsIfNeeded:(id)arg1 replyRenderCountForCurrentBranch:(long long *)arg2 status:(id)arg3 currentBranch:(id)arg4 lastBranch:(id *)arg5;
- (void)_tfn_prependStreamObject:(id)arg1 toStreamObjects:(id)arg2 lastBranchedStatus:(id *)arg3 currentBranch:(id)arg4 replyRenderCountForCurrentBranch:(long long *)arg5 lastBranch:(id *)arg6;
- (void)_willSkipStreamObjectLastBranchedStatus:(id *)arg1 streamObjects:(id)arg2 currentBranch:(id)arg3 replyRenderCountForCurrentBranch:(long long *)arg4 lastBranch:(id *)arg5;
- (void)_removeDanglingConvoModuleGaps:(id)arg1;
- (id)filteredStreamObjectsFromStreamObjects:(id)arg1 stream:(id)arg2;

@end

