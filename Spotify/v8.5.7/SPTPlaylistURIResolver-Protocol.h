//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;

@protocol SPTPlaylistURIResolver <NSObject>
- (void)resolvePlaylistV1URIForPlaylistURI:(NSURL *)arg1 completion:(void (^)(NSURL *))arg2;
@end
