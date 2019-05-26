//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTVideoEventObserver, SPTVideoPlaybackIdentity, SPTVideoResourceLoaderInternal;

@protocol SPTVideoResourceLoaderFactory <NSObject>
- (id <SPTVideoResourceLoaderInternal>)createResourceLoaderWithIdentity:(id <SPTVideoPlaybackIdentity>)arg1 notifierProxy:(id <SPTVideoEventObserver>)arg2;
@end

