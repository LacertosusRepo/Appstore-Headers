//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSSet, NSString, NSURL, UIImage;
@protocol SPTSharingSDKUTMTag;

@protocol SPTSharingSDKEntityData <NSObject>
@property(readonly, nonatomic) id <SPTSharingSDKUTMTag> utmTag;
@property(readonly, nonatomic) NSURL *fallbackShareableURL;
@property(readonly, nonatomic) unsigned long long capability;
@property(readonly, nonatomic) NSSet *extraQueryItems;
@property(readonly, nonatomic) NSData *video;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, copy, nonatomic) NSString *spotifyURIString;
@end

