//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTCollectionPlatformConfiguration, SPTExternalIntegrationTestManager;

@interface SPTExternalIntegrationCollectionContentFactory : NSObject
{
    id <SPTCollectionPlatformConfiguration> _configuration;
    id <SPTExternalIntegrationTestManager> _testManager;
}

@property(readonly, nonatomic) id <SPTExternalIntegrationTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)createOfflineLibraryContent;
- (id)createCollectionArtistChildContentFromMetadata:(id)arg1 collectionURI:(id)arg2 requestOptions:(id)arg3;
- (id)createCollectionArtistContentFromMetadata:(id)arg1 requestOptions:(id)arg2;
- (id)createCollectionPodcastsChildContentFromMetadata:(id)arg1 collectionURI:(id)arg2 requestOptions:(id)arg3;
- (id)createCollectionPodcastContentFromMetadata:(id)arg1 requestOptions:(id)arg2;
- (id)createCollectionAlbumChildContentFromMetadata:(id)arg1 collectionURI:(id)arg2 requestOptions:(id)arg3;
- (id)createCollectionAlbumContentFromMetadata:(id)arg1 requestOptions:(id)arg2;
- (id)createYourLibraryArtistsChildContentFromMetadata:(id)arg1 requestOptions:(id)arg2;
- (id)createYourLibraryArtistsContentOfflineOnly:(_Bool)arg1;
- (id)createYourLibraryPodcastsChildContentFromMetadata:(id)arg1 requestOptions:(id)arg2;
- (id)createYourLibraryPodcastsContentOfflineOnly:(_Bool)arg1;
- (id)createYourLibraryAlbumsChildContentFromMetadata:(id)arg1 requestOptions:(id)arg2;
- (id)createYourLibraryAlbumsContentOfflineOnly:(_Bool)arg1;
- (id)createSongContentWithMetadata:(id)arg1 contextURI:(id)arg2 indexInContext:(unsigned long long)arg3 requestOptions:(id)arg4;
- (id)createYourLibrarySongsChildContentFromMetadata:(id)arg1 requestOptions:(id)arg2;
- (id)createUserCollectionSongsContentWithUsername:(id)arg1 offlineOnly:(_Bool)arg2;
- (id)createUserPlaylistFolderContentWithTitle:(id)arg1 contextURI:(id)arg2 offlineOnly:(_Bool)arg3;
- (id)createYourLibrarySongsContentOfflineOnly:(_Bool)arg1;
- (id)createYourLibraryPlaylistsContentOfflineOnly:(_Bool)arg1;
- (id)createYourLibraryChildContentOfflineOnly:(_Bool)arg1;
- (id)createYourLibraryContent;
- (id)initWithCollectionConfiguration:(id)arg1 withTestManager:(id)arg2;

@end

