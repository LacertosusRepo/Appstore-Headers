//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingContainedViewController-Protocol.h"
#import "SPTNowPlayingContainerIdleMonitorObserver-Protocol.h"
#import "SPTNowPlayingTrackMetadataQueueObserver-Protocol.h"
#import "SPTNowPlayingTrackPositionObserver-Protocol.h"

@class NSString, SPTNowPlayingDurationDataSource, SPTNowPlayingShowsFormatFooterView, SPTNowPlayingTrackMetadataQueue, SPTNowPlayingTrackPosition, SPTTheme, UIView;
@protocol SPTGaiaDevicesAvailableView, SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingContainingViewController, SPTPlayer;

@interface SPTNowPlayingShowsFormatFooterViewController : UIViewController <SPTNowPlayingContainerIdleMonitorObserver, SPTNowPlayingTrackPositionObserver, SPTNowPlayingTrackMetadataQueueObserver, SPTNowPlayingContainedViewController>
{
    UIViewController<SPTNowPlayingContainingViewController> *container;
    id <SPTPlayer> _player;
    UIView *_animationView;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTTheme *_theme;
    SPTNowPlayingDurationDataSource *_dataSource;
    SPTNowPlayingTrackPosition *_trackPosition;
    SPTNowPlayingTrackMetadataQueue *_metadataQueue;
    UIView<SPTGaiaDevicesAvailableView> *_devicesAvailableView;
}

@property(readonly, nonatomic) UIView<SPTGaiaDevicesAvailableView> *devicesAvailableView; // @synthesize devicesAvailableView=_devicesAvailableView;
@property(readonly, nonatomic) SPTNowPlayingTrackMetadataQueue *metadataQueue; // @synthesize metadataQueue=_metadataQueue;
@property(readonly, nonatomic) SPTNowPlayingTrackPosition *trackPosition; // @synthesize trackPosition=_trackPosition;
@property(readonly, nonatomic) SPTNowPlayingDurationDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(readonly, nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container; // @synthesize container;
- (void).cxx_destruct;
- (void)updateTrackColor;
- (void)dealloc;
- (void)trackMetadataQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingTrackPositionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)idlePeriodDidBegin;
- (void)idlePeriodDidEnd;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (id)initWithPlayer:(id)arg1 auxiliaryActionsHandler:(id)arg2 theme:(id)arg3 dataSource:(id)arg4 trackPosition:(id)arg5 metadataQueue:(id)arg6 devicesAvailableView:(id)arg7 animationView:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingShowsFormatFooterView *view; // @dynamic view;

@end

