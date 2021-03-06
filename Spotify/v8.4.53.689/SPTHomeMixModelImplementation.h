//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHomeMixModel.h"

@class NSString, NSURL;

@interface SPTHomeMixModelImplementation : NSObject <SPTHomeMixModel>
{
    id <SPTHomeMixModelDelegate> _delegate;
    NSURL *_URI;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _playlistTracksDataLoaderRequestToken;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _playlistMetadataDataLoaderRequestToken;
}

@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> playlistMetadataDataLoaderRequestToken; // @synthesize playlistMetadataDataLoaderRequestToken=_playlistMetadataDataLoaderRequestToken;
@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> playlistTracksDataLoaderRequestToken; // @synthesize playlistTracksDataLoaderRequestToken=_playlistTracksDataLoaderRequestToken;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(nonatomic) __weak id <SPTHomeMixModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleHomeMixTracksUpdate:(id)arg1 error:(id)arg2;
- (void)handleHomeMixMetadataUpdate:(id)arg1 error:(id)arg2;
- (void)load;
- (void)dealloc;
- (id)initWithURI:(id)arg1 playlistDataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

