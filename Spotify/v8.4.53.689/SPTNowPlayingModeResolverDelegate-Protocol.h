//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTNowPlayingModeResolver;

@protocol SPTNowPlayingModeResolverDelegate <NSObject>
- (void)modeResolver:(SPTNowPlayingModeResolver *)arg1 didChangeToMode:(id <SPTNowPlayingMode>)arg2 fromMode:(id <SPTNowPlayingMode>)arg3;
@end
