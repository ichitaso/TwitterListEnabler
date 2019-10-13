%hook TFNTwitterAccount
- (BOOL)isAutoImportListsToHomeEnabled {
    return YES;
}
- (double)latestTimelineProgressiveAutoSwitchMinimumTime {
    return DBL_MAX;
}
- (double)latestTimelineProgressiveAutoSwitchThresholdMultiplier {
    return DBL_MAX;
}
%end
