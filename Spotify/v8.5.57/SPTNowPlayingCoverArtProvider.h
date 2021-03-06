//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingContentLayerProvider-Protocol.h"

@class NSString, SPTTheme;
@protocol SPTGLUEImageLoaderFactory, SPTNowPlayingContentLayerProviderDelegate;

@interface SPTNowPlayingCoverArtProvider : NSObject <SPTNowPlayingContentLayerProvider>
{
    SPTTheme *_theme;
    id <SPTGLUEImageLoaderFactory> _imageLoaderFactory;
}

@property(readonly, nonatomic) id <SPTGLUEImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (_Bool)displaysFullScreenContentForTrack:(id)arg1;
- (_Bool)requiresOverlayForTrack:(id)arg1;
- (_Bool)canHideControlsForTrack:(id)arg1;
- (_Bool)isActiveForTrack:(id)arg1 playerState:(id)arg2;
- (void)configurePlaceholderCell:(id)arg1 windowedContentInsets:(struct UIEdgeInsets)arg2;
- (void)configureCell:(id)arg1 withTrack:(id)arg2 windowedContentInsets:(struct UIEdgeInsets)arg3 peekingDisallowed:(_Bool)arg4;
- (Class)cellClass;
- (id)reuseIdentifier;
- (unsigned long long)contentType;
- (id)initWithTheme:(id)arg1 imageLoaderFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SPTNowPlayingContentLayerProviderDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

