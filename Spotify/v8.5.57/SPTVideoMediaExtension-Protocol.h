//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol BMPlaybackIdentity, SPTVideoResourceLoaderInternal;

@protocol SPTVideoMediaExtension <NSObject>
- (id <SPTVideoResourceLoaderInternal>)resourceLoaderForIdentity:(id <BMPlaybackIdentity>)arg1;
- (_Bool)isPlayableForIdentity:(id <BMPlaybackIdentity>)arg1;
@end

