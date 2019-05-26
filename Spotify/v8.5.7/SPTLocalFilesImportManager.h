//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNUXModifying-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"

@class NSDate, NSString, NSURL, SPTFilePickerViewController, SPTLocalFilesLogger;
@protocol SPTCollectionPlatform, SPTCollectionPlatformTestManager, SPTContainerUIService, SPTImageLoaderFactory, SPTLinkDispatcher, SPTLocalFilesPlaylistsDataSource, SPTLocalFilesTracksDataSource, SPTLocalSettings, SPTNavigationRouter, SPTPlaylistModel, SPTProductState;

@interface SPTLocalFilesImportManager : NSObject <SPTProductStateObserver, SPTNUXModifying>
{
    _Bool _enabled;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    id <SPTLocalFilesTracksDataSource> _tracksDataSource;
    id <SPTLocalFilesPlaylistsDataSource> _playlistsDataSource;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTContainerUIService> _containerUIService;
    id <SPTPlaylistModel> _playlistModel;
    NSString *_productStateFlagValue;
    SPTFilePickerViewController *_currentFilePicker;
    NSURL *_currentImportSourceURL;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    NSURL *_targetViewURL;
    NSURL *_sourceViewURL;
    id <SPTNavigationRouter> _navigationRouter;
    SPTLocalFilesLogger *_logger;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSDate *_importStartedTimestamp;
}

@property(retain, nonatomic) NSDate *importStartedTimestamp; // @synthesize importStartedTimestamp=_importStartedTimestamp;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTLocalFilesLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(retain, nonatomic) NSURL *sourceViewURL; // @synthesize sourceViewURL=_sourceViewURL;
@property(retain, nonatomic) NSURL *targetViewURL; // @synthesize targetViewURL=_targetViewURL;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) NSURL *currentImportSourceURL; // @synthesize currentImportSourceURL=_currentImportSourceURL;
@property(nonatomic) __weak SPTFilePickerViewController *currentFilePicker; // @synthesize currentFilePicker=_currentFilePicker;
@property(copy, nonatomic) NSString *productStateFlagValue; // @synthesize productStateFlagValue=_productStateFlagValue;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTLocalFilesPlaylistsDataSource> playlistsDataSource; // @synthesize playlistsDataSource=_playlistsDataSource;
@property(retain, nonatomic) id <SPTLocalFilesTracksDataSource> tracksDataSource; // @synthesize tracksDataSource=_tracksDataSource;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)registerSettingsPage:(id)arg1 featureSettingsItemFactory:(id)arg2;
- (void)registerRootSettings:(id)arg1;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)registerInfoViewForNUX:(id)arg1 fromViewURI:(id)arg2;
- (void)navigateToImportedFiles;
- (_Bool)shouldShowDialog;
- (void)showDialogWithSongsCount:(long long)arg1 playlistsCount:(long long)arg2;
- (void)showToastWithSongsCount:(long long)arg1 playlistsCount:(long long)arg2;
- (void)showConfirmationWithSongsCount:(long long)arg1 playlistsCount:(long long)arg2;
- (void)importSongs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)importPlaylists:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldStartWithSongs;
- (_Bool)shouldStartWithPlaylists;
- (id)provideImportMusicViewControllerWithURL:(id)arg1;
- (void)configureFilePickerAfterPermission:(id)arg1 sourceURL:(id)arg2;
- (void)requestPermissionForMediaLibraryWithCompletion:(CDUnknownBlockType)arg1;
- (void)openSettingsApp;
- (void)alertPermissionDenied;
- (void)logJobFinishedWithModel:(id)arg1 success:(_Bool)arg2;
- (void)startImportFromPlaylistsNUX;
- (void)startImportFromNUX;
- (void)enableIfFlagged;
- (void)startImportWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkForPermissionWithResultHandler:(CDUnknownBlockType)arg1;
- (id)initWithProductState:(id)arg1 localSettings:(id)arg2 collectionPlatform:(id)arg3 collectionTestManager:(id)arg4 playlistModel:(id)arg5 imageLoaderFactory:(id)arg6 resolver:(id)arg7 navigationRouter:(id)arg8 logCenter:(id)arg9 containerUIService:(id)arg10 linkDispatcher:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

