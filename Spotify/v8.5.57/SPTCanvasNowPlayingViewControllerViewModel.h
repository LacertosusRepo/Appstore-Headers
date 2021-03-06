//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingContainerIdleMonitorObserver-Protocol.h"

@class NSString, SPTCanvasContentLayerImagePreloader, SPTCanvasImageResolver, SPTCanvasTooltipPresentationManager, SPTPlayerTrack;
@protocol SPTCanvasIdleMonitorObserverDelegate, SPTCanvasModel, SPTCanvasNowPlayingViewControllerViewModelDelegate, SPTLinkDispatcher;

@interface SPTCanvasNowPlayingViewControllerViewModel : NSObject <SPTNowPlayingContainerIdleMonitorObserver>
{
    id <SPTCanvasModel> _canvasModel;
    SPTPlayerTrack *_track;
    id <SPTCanvasNowPlayingViewControllerViewModelDelegate> _delegate;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTCanvasImageResolver *_imageResolver;
    SPTCanvasTooltipPresentationManager *_tooltipManager;
    SPTCanvasContentLayerImagePreloader *_avatarLoader;
    id <SPTCanvasIdleMonitorObserverDelegate> _idleMonitorDelegate;
}

@property(nonatomic) __weak id <SPTCanvasIdleMonitorObserverDelegate> idleMonitorDelegate; // @synthesize idleMonitorDelegate=_idleMonitorDelegate;
@property(retain, nonatomic) SPTCanvasContentLayerImagePreloader *avatarLoader; // @synthesize avatarLoader=_avatarLoader;
@property(readonly, nonatomic) SPTCanvasTooltipPresentationManager *tooltipManager; // @synthesize tooltipManager=_tooltipManager;
@property(readonly, nonatomic) SPTCanvasImageResolver *imageResolver; // @synthesize imageResolver=_imageResolver;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTCanvasNowPlayingViewControllerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
@property(readonly, nonatomic) id <SPTCanvasModel> canvasModel; // @synthesize canvasModel=_canvasModel;
- (void).cxx_destruct;
- (void)idlePeriodDidEnd;
- (void)idlePeriodDidBegin;
- (void)removeContent;
- (void)addContent;
- (void)loadAvatarImage;
- (void)navigateToArtistattribution;
- (void)dismissToolTipFromViewController:(id)arg1 forceDismiss:(_Bool)arg2;
- (void)presentToolTipFromViewController:(id)arg1;
- (id)initWithCanvasModel:(id)arg1 track:(id)arg2 imageResolver:(id)arg3 linkDispatcher:(id)arg4 idleMonitorDelegate:(id)arg5 tooltipManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

