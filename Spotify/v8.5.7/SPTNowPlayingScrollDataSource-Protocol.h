//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTNowPlayingScrollProvider;

@protocol SPTNowPlayingScrollDataSource <NSObject>
- (void)unregisterProvider:(id <SPTNowPlayingScrollProvider>)arg1;
- (void)registerProvider:(id <SPTNowPlayingScrollProvider>)arg1;
@end

