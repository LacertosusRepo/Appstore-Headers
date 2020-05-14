//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTHomeViewModelProvider;
@protocol HUBViewModel;

@protocol SPTHomeViewModelProviderDelegate <NSObject>
- (void)viewModelProvider:(SPTHomeViewModelProvider *)arg1 didLoadRemoteViewModel:(id <HUBViewModel>)arg2 withError:(NSError *)arg3;
- (void)viewModelProviderWillLoadRemoteViewModel:(SPTHomeViewModelProvider *)arg1;
- (void)viewModelProvider:(SPTHomeViewModelProvider *)arg1 didLoadCachedViewModel:(id <HUBViewModel>)arg2 withError:(NSError *)arg3;
- (void)viewModelProviderWillLoadCachedViewModel:(SPTHomeViewModelProvider *)arg1;
@end

