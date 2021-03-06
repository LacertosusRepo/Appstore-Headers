//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;
@protocol BMPlaybackRequest;

@protocol BMPlaybackRequestFactory <NSObject>
- (id <BMPlaybackRequest>)createPlaybackRequestWithMediaURL:(NSURL *)arg1 metadata:(NSDictionary *)arg2 royaltyMedia:(_Bool)arg3 audioOnlyAllowed:(_Bool)arg4;
- (id <BMPlaybackRequest>)createPlaybackRequestWithManifestID:(NSString *)arg1 metadata:(NSDictionary *)arg2 royaltyMedia:(_Bool)arg3 audioOnlyAllowed:(_Bool)arg4;
@end

