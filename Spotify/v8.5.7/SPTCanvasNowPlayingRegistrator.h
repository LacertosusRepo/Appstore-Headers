//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTNowPlayingCarouselContentProviderFactory, SPTNowPlayingContentProviderRegistries, SPTNowPlayingShowsFormatOverrider, SPTNowPlayingShowsFormatOverriderRegistry;

@interface SPTCanvasNowPlayingRegistrator : NSObject
{
    _Bool _hasRegistered;
    id <SPTNowPlayingContentProviderRegistries> _nowPlayingContentProviderRegistries;
    id <SPTNowPlayingShowsFormatOverriderRegistry> _nowPlayingShowsFormatOverriderRegistry;
    id <SPTNowPlayingCarouselContentProviderFactory> _carouselContentProviderFactory;
    id <SPTNowPlayingShowsFormatOverrider> _showsFormatOverrider;
}

@property(readonly, nonatomic) __weak id <SPTNowPlayingShowsFormatOverrider> showsFormatOverrider; // @synthesize showsFormatOverrider=_showsFormatOverrider;
@property(readonly, nonatomic) __weak id <SPTNowPlayingCarouselContentProviderFactory> carouselContentProviderFactory; // @synthesize carouselContentProviderFactory=_carouselContentProviderFactory;
@property(readonly, nonatomic) id <SPTNowPlayingShowsFormatOverriderRegistry> nowPlayingShowsFormatOverriderRegistry; // @synthesize nowPlayingShowsFormatOverriderRegistry=_nowPlayingShowsFormatOverriderRegistry;
@property(readonly, nonatomic) id <SPTNowPlayingContentProviderRegistries> nowPlayingContentProviderRegistries; // @synthesize nowPlayingContentProviderRegistries=_nowPlayingContentProviderRegistries;
@property _Bool hasRegistered; // @synthesize hasRegistered=_hasRegistered;
- (void).cxx_destruct;
- (void)unregister;
- (void)registerIfNeeded;
- (id)initWithNowPlayingContentProviderRegistries:(id)arg1 nowPlayingShowsFormatOverriderRegistry:(id)arg2 carouselContentProviderFactory:(id)arg3 showsFormatOverrider:(id)arg4;

@end

