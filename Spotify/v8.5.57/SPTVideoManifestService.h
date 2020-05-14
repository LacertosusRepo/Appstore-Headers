//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTVideoManifestFactory;
@protocol BMDataLoader, BMPlayerConfiguration;

@interface SPTVideoManifestService : NSObject
{
    id <BMDataLoader> _videoDataLoader;
    id <BMPlayerConfiguration> _playerConfiguration;
    SPTVideoManifestFactory *_manifestFactory;
    unsigned long long _retryCount;
    unsigned long long _max500ErrorRetryCount;
}

@property(nonatomic) unsigned long long max500ErrorRetryCount; // @synthesize max500ErrorRetryCount=_max500ErrorRetryCount;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) SPTVideoManifestFactory *manifestFactory; // @synthesize manifestFactory=_manifestFactory;
@property(retain, nonatomic) id <BMPlayerConfiguration> playerConfiguration; // @synthesize playerConfiguration=_playerConfiguration;
@property(retain, nonatomic) id <BMDataLoader> videoDataLoader; // @synthesize videoDataLoader=_videoDataLoader;
- (void).cxx_destruct;
- (id)reasonFromErrorResponseJSON:(id)arg1;
- (id)responseJsonFromData:(id)arg1;
- (id)manifestErrorFromResponse:(unsigned long long)arg1 error:(id)arg2 body:(id)arg3;
- (void)fetchManifestWithManifestID:(id)arg1 initiatingPlaybackID:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)initWithVideoDataLoader:(id)arg1 playerConfiguration:(id)arg2 manifestFactory:(id)arg3;

@end

