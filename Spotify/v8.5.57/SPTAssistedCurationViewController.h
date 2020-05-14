//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTAssistedCurationCardCellConfiguratorDelegate-Protocol.h"
#import "SPTAssistedCurationCardCellLogDelegate-Protocol.h"
#import "SPTAssistedCurationSearchButtonDelegate-Protocol.h"
#import "SPTAssistedCurationViewModelDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableSet, NSString, NSURL, SPTAssistedCurationCardCellConfigurator, SPTAssistedCurationCardStyle, SPTAssistedCurationGLUETheme, SPTAssistedCurationInfoView, SPTAssistedCurationLogger, SPTAssistedCurationSearchButton, UIActivityIndicatorView, UICollectionView, UIPageControl, UITapGestureRecognizer;
@protocol GLUEImageLoader, SPTAssistedCurationViewControllerDelegate, SPTAssistedCurationViewModel, SPTAudioPreviewModelFactory, SPTAudioPreviewUIFactory, SPTPageContainer;

@interface SPTAssistedCurationViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, SPTAssistedCurationSearchButtonDelegate, SPTAssistedCurationCardCellLogDelegate, SPTAssistedCurationCardCellConfiguratorDelegate, SPTNavigationControllerNavigationBarState, SPTAssistedCurationViewModelDelegate, SPTPageController>
{
    id <SPTAssistedCurationViewControllerDelegate> _delegate;
    SPTAssistedCurationSearchButton *_searchActionButton;
    UICollectionView *_cardsCollectionView;
    SPTAssistedCurationInfoView *_infoView;
    UIActivityIndicatorView *_activityIndicatorView;
    UIPageControl *_pageControl;
    id <SPTAssistedCurationViewModel> _assistedCurationViewModel;
    id <SPTAudioPreviewModelFactory> _audioPreviewModelFactory;
    id <SPTAudioPreviewUIFactory> _audioPreviewUIFactory;
    SPTAssistedCurationLogger *_logger;
    SPTAssistedCurationGLUETheme *_theme;
    SPTAssistedCurationCardStyle *_cardStyle;
    id <GLUEImageLoader> _glueImageLoader;
    SPTAssistedCurationCardCellConfigurator *_cardCellConfigurator;
    UITapGestureRecognizer *_tapGesture;
    NSMutableSet *_visibleCardIdentifiers;
    double _lastVisibleWidth;
}

@property(nonatomic) double lastVisibleWidth; // @synthesize lastVisibleWidth=_lastVisibleWidth;
@property(retain, nonatomic) NSMutableSet *visibleCardIdentifiers; // @synthesize visibleCardIdentifiers=_visibleCardIdentifiers;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) SPTAssistedCurationCardCellConfigurator *cardCellConfigurator; // @synthesize cardCellConfigurator=_cardCellConfigurator;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) SPTAssistedCurationCardStyle *cardStyle; // @synthesize cardStyle=_cardStyle;
@property(retain, nonatomic) SPTAssistedCurationGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTAssistedCurationLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTAudioPreviewUIFactory> audioPreviewUIFactory; // @synthesize audioPreviewUIFactory=_audioPreviewUIFactory;
@property(readonly, nonatomic) id <SPTAudioPreviewModelFactory> audioPreviewModelFactory; // @synthesize audioPreviewModelFactory=_audioPreviewModelFactory;
@property(retain, nonatomic) id <SPTAssistedCurationViewModel> assistedCurationViewModel; // @synthesize assistedCurationViewModel=_assistedCurationViewModel;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) SPTAssistedCurationInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UICollectionView *cardsCollectionView; // @synthesize cardsCollectionView=_cardsCollectionView;
@property(retain, nonatomic) SPTAssistedCurationSearchButton *searchActionButton; // @synthesize searchActionButton=_searchActionButton;
@property(nonatomic) __weak id <SPTAssistedCurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)logDidLoadCardAtIndex:(unsigned long long)arg1 isUserInteractionEnabled:(_Bool)arg2;
- (void)cardCellConfigurator:(id)arg1 previewTrackURI:(id)arg2 atIndex:(long long)arg3 locationInCollection:(struct CGPoint)arg4;
- (void)logAssistedCurationCardCell:(id)arg1 tapTrackAtIndexPath:(id)arg2 startPlaying:(_Bool)arg3;
- (void)logAssistedCurationCardCell:(id)arg1 tapAddTrackAtIndexPath:(id)arg2;
- (void)openSearchWhenTapped:(id)arg1;
- (void)dismissSearchAssistedCurationViewModel:(id)arg1;
- (void)assistedCurationViewModel:(id)arg1 noCardsBecauseOffline:(_Bool)arg2;
- (void)assistedCurationViewModel:(id)arg1 error:(id)arg2;
- (void)assistedCurationViewModel:(id)arg1 scrollToCardAtIndex:(long long)arg2;
- (void)assistedCurationViewModel:(id)arg1 removedCardAtIndex:(long long)arg2;
- (void)didChangeAssistedCurationViewModel:(id)arg1;
- (_Bool)isUserInteractionEnabledForCell:(id)arg1 atIndexPath:(id)arg2;
- (double)visibilityFactorForRect:(struct CGRect)arg1;
- (void)updatePageControl;
- (unsigned long long)numberOfCardsPerScreen;
- (void)evaluateScrolledToIndexForScrollView:(id)arg1;
- (void)evaluateScrolledToIndexForContentOffset:(double)arg1;
- (void)scrollToCardAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToNextTrailingCard;
- (_Bool)isLastTrailingCard;
- (void)scrollToNextLeadingCard;
- (_Bool)isLastLeadingCard;
- (double)contentOffsetForCardIndex:(unsigned long long)arg1;
- (long long)cardIndexForPoint:(struct CGPoint)arg1;
- (long long)cardIndexForContentOffset:(double)arg1;
- (long long)currentCardIndex;
- (long long)nextCardIndexRTLWithVelocity:(struct CGPoint)arg1 targetContentOffset:(struct CGPoint)arg2;
- (long long)nextCardIndexWithVelocity:(struct CGPoint)arg1 targetContentOffset:(struct CGPoint)arg2;
- (double)cardWidthIncludingSpacing:(_Bool)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)dismissSearchViewController;
- (void)hideInfoView;
- (void)displayInfoViewWithMessage:(id)arg1 andSubMessage:(id)arg2;
- (void)hideCardsCollection;
- (void)displayCardsCollection;
- (void)startLoadingIndicator;
- (void)stopLoadingIndicator;
- (void)tapGestureAction:(id)arg1;
- (void)pageControlChanged:(id)arg1;
- (void)setupConstraints;
- (void)invalidateLayoutAndReload;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAssistedCurationViewModel:(id)arg1 glueImageLoader:(id)arg2 audioPreviewModelFactory:(id)arg3 audioPreviewUIFactory:(id)arg4 theme:(id)arg5 logger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

