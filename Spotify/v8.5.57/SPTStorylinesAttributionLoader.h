//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GLUEImageLoader, SPTFollowModelFactory, SPTStorylinesAttributionLoaderDelegate;

@interface SPTStorylinesAttributionLoader : NSObject
{
    id <SPTStorylinesAttributionLoaderDelegate> _delegate;
    id <GLUEImageLoader> _imageLoader;
    id <SPTFollowModelFactory> _followModelFactory;
}

@property(readonly, nonatomic) __weak id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) __weak id <SPTStorylinesAttributionLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetchFollowModelForArtist:(id)arg1;
- (void)fetchStorylinesArtistImage:(id)arg1 forArtist:(id)arg2;
- (id)initWithImageLoader:(id)arg1 followModelFactory:(id)arg2;

@end

