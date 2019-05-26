//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;

@protocol SPTVideoPlaybackIdentity <NSObject>
- (NSDictionary *)metadata;
- (NSURL *)mediaURL;
- (NSString *)manifestID;
- (_Bool)isRoyaltyVideo;
- (_Bool)isBackgroundable;
- (NSString *)sessionID;
@end
