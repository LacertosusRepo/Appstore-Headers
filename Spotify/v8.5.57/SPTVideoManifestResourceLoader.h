//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTVideoManifestService, SPTVideoMediaURLConverter;
@protocol BMPlaybackIdentity;

@interface SPTVideoManifestResourceLoader : NSObject
{
    SPTVideoManifestService *_manifestService;
    SPTVideoMediaURLConverter *_mediaURLConverter;
    id <BMPlaybackIdentity> _identity;
}

@property(retain, nonatomic) id <BMPlaybackIdentity> identity; // @synthesize identity=_identity;
@property(retain, nonatomic) SPTVideoMediaURLConverter *mediaURLConverter; // @synthesize mediaURLConverter=_mediaURLConverter;
@property(retain, nonatomic) SPTVideoManifestService *manifestService; // @synthesize manifestService=_manifestService;
- (void).cxx_destruct;
- (void)loadManifestResource:(CDUnknownBlockType)arg1;
- (id)initWithIdentity:(id)arg1 manifestService:(id)arg2 mediaURLConverter:(id)arg3;

@end

