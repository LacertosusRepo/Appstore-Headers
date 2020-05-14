//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEncoreAlbumHeaderDelegate-Protocol.h"
#import "SPTFreeTierEntityFeedbackButtonViewModelDelegate-Protocol.h"
#import "SPTFreeTierEntityOfflineDelegate-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"

@class NSMutableSet, NSString, NSURL, SPTEncoreAlbumHeader, UIColor, UIImage, UIView;
@protocol HUBComponentEventHandler, HUBComponentModel, SPTFreeTierEntityContextMenuButtonViewModel, SPTFreeTierEntityFeedbackButtonViewModel, SPTFreeTierEntityOfflineViewModel, SPTImageLoader, SPTLinkDispatcher;

@interface SPTEncoreAlbumHeaderController : NSObject <SPTImageLoaderDelegate, SPTEncoreAlbumHeaderDelegate, SPTFreeTierEntityFeedbackButtonViewModelDelegate, SPTFreeTierEntityOfflineDelegate>
{
    UIView *_headerView;
    id <SPTFreeTierEntityFeedbackButtonViewModel> _followButtonModel;
    id <SPTFreeTierEntityContextMenuButtonViewModel> _contextMenuButtonModel;
    id <SPTFreeTierEntityOfflineViewModel> _offlineButtonModel;
    NSMutableSet *_heightDidChangeBlocks;
    double _navigationBarHeight;
    id <HUBComponentEventHandler> _eventHandler;
    id <HUBComponentModel> _model;
    CDUnknownBlockType _backButtonTappedBlock;
    id <SPTImageLoader> _imageLoader;
    NSURL *_lastCreatorImageURL;
    UIImage *_creatorImage;
    id <SPTLinkDispatcher> _linkDispatcher;
    UIImage *_coverArt;
    UIColor *_extractedColor;
    long long _currentDownloadState;
    SPTEncoreAlbumHeader *_albumHeader;
}

+ (struct CGSize)preferredHeaderSizeForContainerViewSize:(struct CGSize)arg1;
@property(retain, nonatomic) SPTEncoreAlbumHeader *albumHeader; // @synthesize albumHeader=_albumHeader;
@property(nonatomic) long long currentDownloadState; // @synthesize currentDownloadState=_currentDownloadState;
@property(retain, nonatomic) UIColor *extractedColor; // @synthesize extractedColor=_extractedColor;
@property(retain, nonatomic) UIImage *coverArt; // @synthesize coverArt=_coverArt;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) UIImage *creatorImage; // @synthesize creatorImage=_creatorImage;
@property(retain, nonatomic) NSURL *lastCreatorImageURL; // @synthesize lastCreatorImageURL=_lastCreatorImageURL;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(copy, nonatomic) CDUnknownBlockType backButtonTappedBlock; // @synthesize backButtonTappedBlock=_backButtonTappedBlock;
@property(retain, nonatomic) id <HUBComponentModel> model; // @synthesize model=_model;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(retain, nonatomic) NSMutableSet *heightDidChangeBlocks; // @synthesize heightDidChangeBlocks=_heightDidChangeBlocks;
@property(retain, nonatomic) id <SPTFreeTierEntityOfflineViewModel> offlineButtonModel; // @synthesize offlineButtonModel=_offlineButtonModel;
@property(retain, nonatomic) id <SPTFreeTierEntityContextMenuButtonViewModel> contextMenuButtonModel; // @synthesize contextMenuButtonModel=_contextMenuButtonModel;
@property(retain, nonatomic) id <SPTFreeTierEntityFeedbackButtonViewModel> followButtonModel; // @synthesize followButtonModel=_followButtonModel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (_Bool)shouldShowRemoveFromDownloadsConfirmationAlert;
- (void)showRemoveFromDownloadsConfirmationAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewModel:(id)arg1 offlineAvailabilityChanged:(unsigned long long)arg2;
- (void)viewModel:(id)arg1 didUpdateState:(unsigned long long)arg2;
- (void)toggleLikeWithSender:(id)arg1;
- (void)toggleDownloadWithSender:(id)arg1;
- (void)heightChangedWithTotalHeight:(double)arg1 topAccessoryViewHeight:(double)arg2;
- (void)togglePlaybackWithSender:(id)arg1;
- (void)creatorTappedWithSender:(id)arg1;
- (void)contextMenuTappedWithSender:(id)arg1;
- (void)backButtonTappedWithSender:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)stopListeningForHeightChange:(id)arg1;
- (id)listenForHeightChange:(CDUnknownBlockType)arg1;
- (void)setImagePlaceholder;
- (void)setImage:(id)arg1;
- (void)configureWithModel:(id)arg1 eventHandler:(id)arg2;
- (double)headerHeight;
- (double)minimumContentHeight;
- (void)updateModel;
- (id)createWithModel:(id)arg1;
- (void)navigationBarHeightDidChange:(double)arg1 forceUpdate:(_Bool)arg2;
- (double)minimumHeight;
- (id)buttonModelFromModel:(id)arg1;
- (id)initWithAlbumHeader:(id)arg1 imageLoader:(id)arg2 linkDispatcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

