//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingBaseInfoAreaViewController.h"

#import "SPTNowPlayingModelObserver-Protocol.h"

@class NSString, SPTNowPlayingAdInfoAreaView;
@protocol SPTAdsManager;

@interface SPTNowPlayingAdInfoAreaViewController : SPTNowPlayingBaseInfoAreaViewController <SPTNowPlayingModelObserver>
{
    id <SPTAdsManager> _adsManager;
}

@property(nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)configureForOrientation:(long long)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)updateButton;
- (void)didTapActionButton;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 theme:(id)arg2 linkDispatcher:(id)arg3 adsManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingAdInfoAreaView *view; // @dynamic view;

@end
