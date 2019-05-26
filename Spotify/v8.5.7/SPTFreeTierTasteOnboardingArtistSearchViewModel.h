//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTInstrumentationInteractionMediatorColleague-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"

@class NSMutableArray, NSString, SPTDataLoader, SPTFreeTierTasteOnboardingArtistSearchInfoView, SPTFreeTierTasteOnboardingArtistSearchResultCellStyle, SPTFreeTierTasteOnboardingArtistSearchViewLogger, SPTFreeTierTasteOnboardingSession, SPTFreeTierTasteOnboardingTheme, UICollectionView;
@protocol GLUEImageLoader, SPTFreeTierTasteOnboardingArtistSearchViewModelDelegate, SPTFreeTierTasteOnboardingTestManager;

@interface SPTFreeTierTasteOnboardingArtistSearchViewModel : NSObject <SPTDataLoaderDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UISearchResultsUpdating, UISearchBarDelegate, SPTInstrumentationInteractionMediatorColleague>
{
    _Bool _repeatVisit;
    _Bool _isLoadingMore;
    id <SPTFreeTierTasteOnboardingArtistSearchViewModelDelegate> _delegate;
    SPTFreeTierTasteOnboardingArtistSearchViewLogger *_logger;
    SPTFreeTierTasteOnboardingSession *_session;
    double _topMargin;
    SPTFreeTierTasteOnboardingTheme *_theme;
    SPTDataLoader *_dataLoader;
    id <GLUEImageLoader> _imageLoader;
    id <SPTFreeTierTasteOnboardingTestManager> _testManager;
    NSMutableArray *_items;
    UICollectionView *_collectionView;
    SPTFreeTierTasteOnboardingArtistSearchResultCellStyle *_cellStyle;
    SPTFreeTierTasteOnboardingArtistSearchInfoView *_infoView;
    NSString *_searchQuery;
    NSString *_searchSessionId;
    NSString *_searchNextPageURI;
    struct CGRect _keyboardFrame;
}

@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(copy, nonatomic) NSString *searchNextPageURI; // @synthesize searchNextPageURI=_searchNextPageURI;
@property(copy, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(nonatomic) __weak SPTFreeTierTasteOnboardingArtistSearchInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTFreeTierTasteOnboardingArtistSearchResultCellStyle *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) id <SPTFreeTierTasteOnboardingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingTheme *theme; // @synthesize theme=_theme;
@property(nonatomic, getter=isRepeatVisit) _Bool repeatVisit; // @synthesize repeatVisit=_repeatVisit;
@property(readonly, nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingArtistSearchViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTFreeTierTasteOnboardingArtistSearchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performLoadMoreRequest;
- (void)mediator:(id)arg1 requiresDataForBuilder:(id)arg2 forInteractionInformation:(id)arg3;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (struct UIEdgeInsets)infoViewLayoutMargins;
- (void)keyboardChangeNotification:(id)arg1;
- (void)registerKeyboardNotifications;
- (void)setNewSearchSessionId;
- (void)updateTraitCollection:(id)arg1;
- (void)performSearch:(id)arg1;
- (void)registerWithCollectionView:(id)arg1;
- (id)viewStyleForTraitCollection:(id)arg1;
- (id)initWithTheme:(id)arg1 logger:(id)arg2 session:(id)arg3 dataLoader:(id)arg4 imageLoader:(id)arg5 testManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
