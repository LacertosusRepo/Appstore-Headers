//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol EXP_HUBViewModelBuilder, EXP_SPTHubPagedContentOperation;

@protocol EXP_SPTHubPagedContentOperationDelegate <NSObject>
- (void)pagedContentOperation:(id <EXP_SPTHubPagedContentOperation>)arg1 didFailWithError:(NSError *)arg2;
- (void)pagedContentOperation:(id <EXP_SPTHubPagedContentOperation>)arg1 didSucceedWithViewModelBuilder:(id <EXP_HUBViewModelBuilder>)arg2 morePagesAvailable:(_Bool)arg3;
@end

