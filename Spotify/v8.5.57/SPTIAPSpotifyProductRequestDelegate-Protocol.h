//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, SPTIAPSpotifyProductRequest;

@protocol SPTIAPSpotifyProductRequestDelegate <NSObject>
- (void)spotifyProductRequest:(SPTIAPSpotifyProductRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)spotifyProductRequest:(SPTIAPSpotifyProductRequest *)arg1 didFinishWithProducts:(NSArray *)arg2;
- (void)spotifyProductRequestDidStart:(SPTIAPSpotifyProductRequest *)arg1;
@end

