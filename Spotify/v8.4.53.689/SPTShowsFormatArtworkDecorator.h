//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingInfoCenterArtworkDecorator.h"

@class NSString, NSURL, SPTShowsFormatBrandedImageGenerator, UIImage;

@interface SPTShowsFormatArtworkDecorator : NSObject <SPTNowPlayingInfoCenterArtworkDecorator>
{
    SPTShowsFormatBrandedImageGenerator *_imageGenerator;
    NSURL *_lastBrandedAlbumURI;
    UIImage *_lastBrandedImage;
}

@property(retain, nonatomic) UIImage *lastBrandedImage; // @synthesize lastBrandedImage=_lastBrandedImage;
@property(retain, nonatomic) NSURL *lastBrandedAlbumURI; // @synthesize lastBrandedAlbumURI=_lastBrandedAlbumURI;
@property(readonly, nonatomic) SPTShowsFormatBrandedImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
- (void).cxx_destruct;
- (id)decoratedArtwork:(id)arg1 forTrack:(id)arg2 state:(id)arg3;
- (_Bool)shouldDecorateArtworkForTrack:(id)arg1 state:(id)arg2;
- (id)initWithImageGenerator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

