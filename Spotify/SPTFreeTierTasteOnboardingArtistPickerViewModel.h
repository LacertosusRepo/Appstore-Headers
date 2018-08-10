//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTFreeTierTasteOnboardingOfflineStateAggregateObserver.h"
#import "SPTInstrumentationInteractionMediatorColleague.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SPTDataLoader, SPTDataLoaderRequest, SPTFreeTierTasteOnboardingArtistCellStyle<GLUEStyle>, SPTFreeTierTasteOnboardingArtistPickerViewLogger, SPTFreeTierTasteOnboardingCurator, SPTFreeTierTasteOnboardingGenreCellStyle<GLUEStyle>, SPTFreeTierTasteOnboardingOfflineStateAggregateManager, SPTFreeTierTasteOnboardingSession, SPTFreeTierTasteOnboardingTheme, SPTPopupManager, UICollectionView, UICollectionViewFlowLayout, UIImage;

@interface SPTFreeTierTasteOnboardingArtistPickerViewModel : NSObject <SPTFreeTierTasteOnboardingOfflineStateAggregateObserver, SPTDataLoaderDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SPTInstrumentationInteractionMediatorColleague>
{
    _Bool _repeatVisit;
    _Bool _hasMoreSteps;
    id <SPTFreeTierTasteOnboardingArtistPickerViewModelDelegate> _delegate;
    SPTFreeTierTasteOnboardingArtistPickerViewLogger *_logger;
    SPTFreeTierTasteOnboardingSession *_session;
    SPTFreeTierTasteOnboardingTheme *_theme;
    SPTFreeTierTasteOnboardingCurator *_curator;
    SPTDataLoader *_dataLoader;
    id <GLUEImageLoader> _imageLoader;
    id <SPTFollowModelFactory> _followModelFactory;
    SPTPopupManager *_popupManager;
    SPTFreeTierTasteOnboardingOfflineStateAggregateManager *_offlineStateAggregateManager;
    id <SPTFreeTierTasteOnboardingTestManager> _testManager;
    SPTDataLoaderRequest *_requestUsedWhileOffline;
    NSMutableArray *_items;
    NSMutableArray *_expandedItems;
    NSMutableDictionary *_followModels;
    unsigned long long _selectedItemsRequiredCount;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewFlowLayout;
    SPTFreeTierTasteOnboardingArtistCellStyle<GLUEStyle> *_artistCellStyle;
    SPTFreeTierTasteOnboardingGenreCellStyle<GLUEStyle> *_genreCellStyle;
    UIImage *_badgeImage;
}

@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingGenreCellStyle<GLUEStyle> *genreCellStyle; // @synthesize genreCellStyle=_genreCellStyle;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingArtistCellStyle<GLUEStyle> *artistCellStyle; // @synthesize artistCellStyle=_artistCellStyle;
@property(nonatomic) __weak UICollectionViewFlowLayout *collectionViewFlowLayout; // @synthesize collectionViewFlowLayout=_collectionViewFlowLayout;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) unsigned long long selectedItemsRequiredCount; // @synthesize selectedItemsRequiredCount=_selectedItemsRequiredCount;
@property(readonly, nonatomic) NSMutableDictionary *followModels; // @synthesize followModels=_followModels;
@property(readonly, nonatomic) NSMutableArray *expandedItems; // @synthesize expandedItems=_expandedItems;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) SPTDataLoaderRequest *requestUsedWhileOffline; // @synthesize requestUsedWhileOffline=_requestUsedWhileOffline;
@property(readonly, nonatomic) id <SPTFreeTierTasteOnboardingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingOfflineStateAggregateManager *offlineStateAggregateManager; // @synthesize offlineStateAggregateManager=_offlineStateAggregateManager;
@property(readonly, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(readonly, nonatomic) id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingCurator *curator; // @synthesize curator=_curator;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool hasMoreSteps; // @synthesize hasMoreSteps=_hasMoreSteps;
@property(nonatomic, getter=isRepeatVisit) _Bool repeatVisit; // @synthesize repeatVisit=_repeatVisit;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingArtistPickerViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTFreeTierTasteOnboardingArtistPickerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isFreshData;
- (void)handleOnlineStateIfPossible;
- (void)handleOfflineStateIfPossible;
- (_Bool)isOffline;
- (void)scrollIndexPathsToVisible:(id)arg1 animated:(_Bool)arg2;
- (void)insertRelatedItems:(id)arg1 forItem:(id)arg2;
- (void)expandItemAtIndex:(unsigned long long)arg1;
- (void)artistItem:(id)arg1 setFollowing:(_Bool)arg2;
- (void)mediator:(id)arg1 requiresDataForBuilder:(id)arg2 forInteractionInformation:(id)arg3;
- (void)presentRetryDialogWithResponse:(id)arg1;
- (void)processFetchRelatedItemsResponse:(id)arg1;
- (void)fetchRelatedItems:(id)arg1;
- (void)processFetchItemsResponse:(id)arg1;
- (void)performRequest:(id)arg1;
- (void)fetchItems;
- (id)collectionView:(id)arg1 genreCellForItem:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 artistCellForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)offlineStateChanged:(_Bool)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)titleTextForRepeatVisit:(_Bool)arg1 requiredCount:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *selectedItemURIs;
- (void)complete;
- (void)addSelectedItem:(id)arg1;
- (id)actionText;
- (id)headerSubtitleText;
- (id)headerTitleText;
- (id)titleText;
- (void)registerWithCollectionView:(id)arg1 collectionViewFlowLayout:(id)arg2;
@property(readonly, nonatomic) _Bool shouldShowHeader;
- (id)offlineViewStyle;
- (id)viewStyle;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 curator:(id)arg2 logger:(id)arg3 session:(id)arg4 dataLoader:(id)arg5 imageLoader:(id)arg6 followModelFactory:(id)arg7 popupManager:(id)arg8 offlineStateAggregateManager:(id)arg9 testManager:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

