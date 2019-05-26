//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierCollectionPlaylistsModelDelegate.h"
#import "SPTFreeTierCollectionPlaylistsViewModel.h"

@class NSString, SPTFreeTierCollectionHeaderViewModelImplementation, SPTFreeTierCollectionLogger;

@interface SPTFreeTierCollectionPlaylistsViewModelImplementation : NSObject <SPTFreeTierCollectionPlaylistsViewModel, SPTFreeTierCollectionPlaylistsModelDelegate>
{
    _Bool _compactMode;
    id <SPTFreeTierCollectionPlaylistsViewModelDelegate> delegate;
    id <SPTFreeTierCollectionPlaylistsModel> _model;
    SPTFreeTierCollectionHeaderViewModelImplementation *_headerViewModel;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPlaylistPlatformPlaylistSynchroniser> _playlistSynchroniser;
    SPTFreeTierCollectionLogger *_logger;
    id <SPTFreeTierCollectionTestManager> _testManager;
    id <SPTFreeTierCollectionPlaylistsModelEntity> _modelEntity;
    id <SPTFreeTierCollectionFavoriteMixModelEntity> _favoriteMixEntity;
}

@property(retain, nonatomic) id <SPTFreeTierCollectionFavoriteMixModelEntity> favoriteMixEntity; // @synthesize favoriteMixEntity=_favoriteMixEntity;
@property(retain, nonatomic) id <SPTFreeTierCollectionPlaylistsModelEntity> modelEntity; // @synthesize modelEntity=_modelEntity;
@property(retain, nonatomic) id <SPTFreeTierCollectionTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTFreeTierCollectionLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistSynchroniser> playlistSynchroniser; // @synthesize playlistSynchroniser=_playlistSynchroniser;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTFreeTierCollectionHeaderViewModelImplementation *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(retain, nonatomic) id <SPTFreeTierCollectionPlaylistsModel> model; // @synthesize model=_model;
@property(readonly, nonatomic, getter=isCompactMode) _Bool compactMode; // @synthesize compactMode=_compactMode;
@property(nonatomic) __weak id <SPTFreeTierCollectionPlaylistsViewModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)playlistsModel:(id)arg1 error:(id)arg2;
- (void)playlistsModel:(id)arg1 didUnlockFavoriteEntity:(id)arg2;
- (void)playlistsModel:(id)arg1 didUpdateEntity:(id)arg2;
- (id)modelItemEntityAtIndexPath:(id)arg1;
- (_Bool)isPlaylistsSection:(unsigned long long)arg1;
- (_Bool)isHiddenContentSection:(unsigned long long)arg1;
- (_Bool)isFavoriteMixSection:(unsigned long long)arg1;
- (id)playlistEntityForRowAtIndexPath:(id)arg1;
- (void)endObservingRowAtIndexPath:(id)arg1;
- (void)beginObservingRowAtIndexPath:(id)arg1;
@property(readonly, nonatomic) unsigned long long countOfSections;
- (unsigned long long)countOfItemsInSection:(unsigned long long)arg1;
- (void)itemSelectedAtIndexPath:(id)arg1;
- (id)itemViewModelAtIndexPath:(id)arg1;
- (id)sectionViewModelForSection:(unsigned long long)arg1;
- (_Bool)hasMoreInSection:(unsigned long long)arg1;
- (void)loadMoreInSection:(unsigned long long)arg1;
- (void)loadViewModel;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)initWithModel:(id)arg1 linkDispatcher:(id)arg2 playlistSynchroniser:(id)arg3 createPlaylistController:(id)arg4 logger:(id)arg5 testManager:(id)arg6 compactMode:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
