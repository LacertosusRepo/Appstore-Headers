//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTBMWListScreen, SPTExternalIntegrationContent;

@protocol SPTBMWListScreenDelegate <NSObject>
- (void)screenDidInvalidate:(id <SPTBMWListScreen>)arg1;
- (void)screen:(id <SPTBMWListScreen>)arg1 didInvalidateRow:(long long)arg2 ofGroup:(long long)arg3;
- (void)willNavigateToScreenIndex:(long long)arg1 showingContent:(id <SPTExternalIntegrationContent>)arg2;
- (void)screen:(id <SPTBMWListScreen>)arg1 requestedPlaybackOfContent:(id <SPTExternalIntegrationContent>)arg2 overrideShuffle:(_Bool)arg3;
- (_Bool)screen:(id <SPTBMWListScreen>)arg1 canPlayContent:(id <SPTExternalIntegrationContent>)arg2;
@end
