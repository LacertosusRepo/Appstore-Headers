//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@protocol SPTVideoPlaybackRequest <NSCopying, NSObject>
@property(copy, nonatomic) NSDictionary *metadata;
@property(nonatomic) _Bool playWhenReady;
@property(nonatomic) double initialPosition;
@property(copy, nonatomic, getter=audioTrackURI) NSURL *syncWithAudioTrackURI;
@property(copy, nonatomic) NSString *mediaManifest;
@property(retain, nonatomic) NSString *manifestID;
@property(nonatomic) _Bool isAd;
- (_Bool)isRoyaltyVideo;
- (_Bool)isBackgroundable;
@end
