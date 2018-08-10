//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTNowPlayingContainedViewController.h"
#import "SPTNowPlayingModelObserver.h"

@class NSString, SPTNowPlayingFreeTierInfoAreaView, SPTNowPlayingLogger, SPTNowPlayingModel, SPTTheme, UIViewController<SPTNowPlayingContainingViewController>;

@interface SPTNowPlayingFreeTierInfoAreaViewController : UIViewController <SPTNowPlayingModelObserver, SPTNowPlayingContainedViewController>
{
    SPTTheme *_theme;
    SPTNowPlayingModel *_model;
    SPTNowPlayingLogger *_logger;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)logShuffle;
- (void)logRepeat;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)needUpdateUI;
- (void)shuffleButtonPressed:(id)arg1;
- (void)repeatButtonPressed:(id)arg1;
- (void)openArtist;
- (void)openAlbum;
- (void)updateMetadataLabelsFromModel;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 theme:(id)arg2 logger:(id)arg3 linkDispatcher:(id)arg4;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingFreeTierInfoAreaView *view; // @dynamic view;

@end

