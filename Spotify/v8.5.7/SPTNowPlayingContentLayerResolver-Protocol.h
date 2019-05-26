//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SPTPlayerTrack;
@protocol SPTNowPlayingContentLayerProvider, SPTNowPlayingContentLayerResolverDelegate;

@protocol SPTNowPlayingContentLayerResolver <NSObject>
@property(nonatomic) __weak id <SPTNowPlayingContentLayerResolverDelegate> delegate;
- (NSArray *)allProviders;
- (id <SPTNowPlayingContentLayerProvider>)providerForTrack:(SPTPlayerTrack *)arg1;
- (void)unregisterProvider:(id <SPTNowPlayingContentLayerProvider>)arg1;
- (void)registerProvider:(id <SPTNowPlayingContentLayerProvider>)arg1;
@end
