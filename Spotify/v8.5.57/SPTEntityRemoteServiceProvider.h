//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEntityRemoteProviderProtocol-Protocol.h"

@class NSString;

@interface SPTEntityRemoteServiceProvider : NSObject <SPTEntityRemoteProviderProtocol>
{
    struct MetadataHandler *_metadataHandler;
}

- (shared_ptr_6008c08c)lookupTracksWithLinks:(const span_60459498 *)arg1 callback:(const struct function<void (const std::__1::error_code &, spotify::tl::span<const spotify::uri::SpotifyLink>, spotify::tl::span<std::__1::shared_ptr<const spotify::metadata::TrackInfo>>)> *)arg2;
- (shared_ptr_6008c08c)lookupAlbumsWithLinks:(const span_60459498 *)arg1 callback:(const struct function<void (const std::__1::error_code &, spotify::tl::span<const spotify::uri::SpotifyLink>, spotify::tl::span<std::__1::shared_ptr<const spotify::metadata::AlbumMetadata>>)> *)arg2;
- (shared_ptr_6008c08c)lookupArtistsWithLinks:(const span_60459498 *)arg1 callback:(const struct function<void (const std::__1::error_code &, spotify::tl::span<const spotify::uri::SpotifyLink>, spotify::tl::span<std::__1::shared_ptr<const spotify::metadata::ArtistMetadata>>)> *)arg2;
- (shared_ptr_6008c08c)lookupTrackWithLink:(const struct SpotifyLink *)arg1 callback:(const struct function<void (const std::__1::error_code &, const spotify::uri::SpotifyLink &, const std::__1::shared_ptr<const spotify::metadata::TrackInfo>&)> *)arg2;
- (shared_ptr_6008c08c)lookupAlbumWithLink:(const struct SpotifyLink *)arg1 callback:(const struct function<void (const std::__1::error_code &, const spotify::uri::SpotifyLink &, const std::__1::shared_ptr<const spotify::metadata::AlbumMetadata>&)> *)arg2;
- (shared_ptr_6008c08c)lookupArtistWithLink:(const struct SpotifyLink *)arg1 callback:(const struct function<void (const std::__1::error_code &, const spotify::uri::SpotifyLink &, const std::__1::shared_ptr<const spotify::metadata::ArtistMetadata>&)> *)arg2;
- (id)initWithMetadataHandler:(struct MetadataHandler *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

