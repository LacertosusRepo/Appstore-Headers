//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol GLUEImageLoader;

@protocol SPTFollowShelfItem <NSObject>
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader;
@property(nonatomic, getter=isFollowing) _Bool following;
@property(readonly, copy, nonatomic) NSString *dismissUri;
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, copy, nonatomic) NSString *followerCount;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSURL *uri;
@end

