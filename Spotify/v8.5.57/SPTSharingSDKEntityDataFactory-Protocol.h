//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSSet, NSString, NSURL, UIImage;
@protocol SPTSharingSDKEntityData, SPTSharingSDKUTMTag;

@protocol SPTSharingSDKEntityDataFactory <NSObject>
- (id <SPTSharingSDKEntityData>)provideImageStoryEntityDataWithSpotifyURIString:(NSString *)arg1 image:(UIImage *)arg2 extraQueryItems:(NSSet *)arg3 fallbackShareableURL:(NSURL *)arg4 utmTag:(id <SPTSharingSDKUTMTag>)arg5;
- (id <SPTSharingSDKEntityData>)provideVideoStoryEntityDataWithSpotifyURIString:(NSString *)arg1 video:(NSData *)arg2 extraQueryItems:(NSSet *)arg3 fallbackShareableURL:(NSURL *)arg4 utmTag:(id <SPTSharingSDKUTMTag>)arg5;
@end
