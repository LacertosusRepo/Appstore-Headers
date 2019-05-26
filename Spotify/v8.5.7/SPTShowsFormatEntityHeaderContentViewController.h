//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTEntityHeaderContentController-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTShowsFormatEntityHeaderContentViewControllerProtocol-Protocol.h"

@class GLUEButton, NSString, SPTShowsFormatEntityHeaderView, SPTShowsFormatEntityViewModel, SPTShowsFormatLogger;
@protocol SPTCollectionPlatformTestManager, SPTImageLoader, SPTImageLoaderRequest;

@interface SPTShowsFormatEntityHeaderContentViewController : UIViewController <SPTImageLoaderDelegate, SPTEntityHeaderContentController, SPTShowsFormatEntityHeaderContentViewControllerProtocol>
{
    SPTShowsFormatEntityViewModel *_viewModel;
    id <SPTImageLoader> _imageLoader;
    SPTShowsFormatLogger *_logger;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    double _labelOffsetRatio;
    id <SPTImageLoaderRequest> _imageLoaderRequest;
    GLUEButton *_playButton;
}

@property(retain, nonatomic) GLUEButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) id <SPTImageLoaderRequest> imageLoaderRequest; // @synthesize imageLoaderRequest=_imageLoaderRequest;
@property(readonly, nonatomic) double labelOffsetRatio; // @synthesize labelOffsetRatio=_labelOffsetRatio;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) SPTShowsFormatLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTShowsFormatEntityViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (id)supplementaryViewForEntityHeaderViewController:(id)arg1;
- (double)entityHeaderViewControllerMinimumHeight:(id)arg1;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (void)bouncePrimaryActionButton;
- (void)toggleFollowButtonCurrentlyFollowing:(_Bool)arg1;
- (void)toggleFollowButton;
- (void)didTapPlayButton;
- (void)updateFollowButtonState:(_Bool)arg1;
- (void)updateViews;
- (void)setBackgroundImageWithURL:(id)arg1;
- (void)updateViewStyle;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 imageLoader:(id)arg2 logger:(id)arg3 collectionTestManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTShowsFormatEntityHeaderView *view; // @dynamic view;

@end

