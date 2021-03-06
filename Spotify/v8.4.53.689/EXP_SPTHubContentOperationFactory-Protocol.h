//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol EXP_SPTHubContentOperationFactory <NSObject>
- (id <EXP_HUBContentOperation>)createHubs2MigrationContentOperation;
- (id <EXP_HUBContentOperation><EXP_HUBViewContentOffsetObserver>)createContentOperationContainerWithPagedContentOperation:(id <EXP_SPTHubPagedContentOperation>)arg1;
- (id <EXP_HUBContentOperation>)createPlaybackHighlightingContentOperationWithComponentModelURIResolver:(id <EXP_SPTHubComponentModelURIResolver>)arg1;
- (id <EXP_HUBContentOperation>)createLocalJSONContentOperationWithContentURL:(NSURL *)arg1;
- (id <EXP_HUBContentOperation>)createRemoteContentOperationWithContentURL:(NSURL *)arg1 sourceIdentifier:(NSString *)arg2;
- (id <EXP_HUBContentOperation>)createRemoteContentOperationWithContentURLResolver:(id <EXP_SPTHubRemoteContentOperationURLResolver>)arg1 sourceIdentifier:(NSString *)arg2;
@end

