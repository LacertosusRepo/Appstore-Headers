//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUBContentOperation.h"

@class NSError, NSURL;

@protocol HUBContentOperationWithPaginatedContent <HUBContentOperation>
- (void)appendContentForPageIndex:(unsigned long long)arg1 toViewModelBuilder:(id <HUBViewModelBuilder>)arg2 viewURI:(NSURL *)arg3 featureInfo:(id <HUBFeatureInfo>)arg4 connectivityState:(unsigned long long)arg5 previousError:(NSError *)arg6;
@end

