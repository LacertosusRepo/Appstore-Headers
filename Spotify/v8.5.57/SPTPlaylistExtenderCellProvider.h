//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEncoreTrackRowPlaylistExtenderDelegate-Protocol.h"
#import "SPTPlaylistExtenderCellProvider-Protocol.h"
#import "SPTPlaylistExtenderModelDelegate-Protocol.h"

@class NSString, SPTPlaylistExtenderLogger;
@protocol GLUETheme, SPTEncoreTrackRowPlaylistExtenderFactory, SPTFreeTierPlaylistCellProviderDelegate, SPTFreeTierPlaylistIsTrackActive, SPTPlaylistExtenderModel, SPTProductState, SPTShelves;

@interface SPTPlaylistExtenderCellProvider : NSObject <SPTEncoreTrackRowPlaylistExtenderDelegate, SPTPlaylistExtenderModelDelegate, SPTPlaylistExtenderCellProvider>
{
    _Bool _isEnabled;
    id <SPTFreeTierPlaylistCellProviderDelegate> delegate;
    CDUnknownBlockType _testIndexPathResolver;
    id <SPTEncoreTrackRowPlaylistExtenderFactory> _rowFactory;
    id <SPTPlaylistExtenderModel> _model;
    id <SPTShelves> _shelves;
    id <GLUETheme> _theme;
    id <SPTProductState> _productState;
    id <SPTFreeTierPlaylistIsTrackActive> _trackActivePredicate;
    SPTPlaylistExtenderLogger *_logger;
}

@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(readonly, nonatomic) SPTPlaylistExtenderLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak id <SPTFreeTierPlaylistIsTrackActive> trackActivePredicate; // @synthesize trackActivePredicate=_trackActivePredicate;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(readonly, nonatomic) id <SPTPlaylistExtenderModel> model; // @synthesize model=_model;
@property(readonly, nonatomic) id <SPTEncoreTrackRowPlaylistExtenderFactory> rowFactory; // @synthesize rowFactory=_rowFactory;
@property(copy, nonatomic) CDUnknownBlockType testIndexPathResolver; // @synthesize testIndexPathResolver=_testIndexPathResolver;
@property(nonatomic) __weak id <SPTFreeTierPlaylistCellProviderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)freeTierPlaylistModel:(id)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistModel:(id)arg1 error:(id)arg2;
- (void)freeTierPlaylistModel:(id)arg1 playlistModelEntityDidChange:(id)arg2;
- (id)indexPathForView:(id)arg1;
- (void)addToPlaylistTappedWithSender:(id)arg1;
- (void)unlikeWithSender:(id)arg1;
- (void)playlistExtenderModelDidUpdate:(id)arg1;
- (void)playlistExtenderModel:(id)arg1 didFailWithError:(id)arg2;
- (void)refreshRecommendations;
- (id)footerView;
- (double)footerHeight;
- (double)headerHeight;
- (id)headerView;
- (void)willDisplaySection;
- (id)sectionFooter;
- (id)sectionHeader;
- (unsigned long long)section;
- (unsigned long long)numberOfRows;
- (id)reuseIdentifiers;
- (id)identifierForCellForRowAtIndexPath:(id)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (void)didEndDisplayingPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)willDisplayPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (_Bool)didSelectPlaylistCell:(id)arg1 atIndexPath:(id)arg2;
- (void)enableSwipeGesturesOnCell:(id)arg1 withItem:(id)arg2;
- (long long)encoreRestrictionForItem:(id)arg1;
- (id)encoreModelForItem:(id)arg1 isPressed:(_Bool)arg2;
- (void)configurePlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (_Bool)handlesCellAtIndexPath:(id)arg1;
- (id)initWithTrackRowFactory:(id)arg1 model:(id)arg2 shelves:(id)arg3 theme:(id)arg4 productState:(id)arg5 trackActivePredicate:(id)arg6 logger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

