//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTHomeConsolidateViewModelProvider;

@protocol SPTHomeConsolidateViewModelProviderDelegate <NSObject>
- (void)viewModelProviderDidLoadRemoteViewModel:(SPTHomeConsolidateViewModelProvider *)arg1 withError:(NSError *)arg2;
- (void)viewModelProviderWillLoadRemoteViewModel:(SPTHomeConsolidateViewModelProvider *)arg1;
- (void)viewModelProviderDidLoadCachedViewModel:(SPTHomeConsolidateViewModelProvider *)arg1 withError:(NSError *)arg2;
- (void)viewModelProviderWillLoadCachedViewModel:(SPTHomeConsolidateViewModelProvider *)arg1;
@end

