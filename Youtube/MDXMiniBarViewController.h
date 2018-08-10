//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MDXMiniBarViewControllerProtocol.h"
#import "MDXScreenSessionObserver.h"
#import "MDXVideoProgressObserver.h"

@class GIMMe, MDXAutoplayCoordinator, MDXBaseMiniBarView, MDXMiniBarView, MDXScreenSession, NSString, YTImageService, YTPlayerResponse;

@interface MDXMiniBarViewController : UIViewController <MDXMiniBarViewControllerProtocol, MDXScreenSessionObserver, MDXVideoProgressObserver>
{
    MDXMiniBarView *_miniBarView;
    MDXScreenSession *_screenSession;
    MDXAutoplayCoordinator *_autoplayCoordinator;
    YTImageService *_imageService;
    YTPlayerResponse *_playerResponse;
    unsigned long long _imageServiceRequestID;
    NSString *_currentVideoID;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)didTapReplay;
- (void)didTapPause;
- (void)didTapPlay;
- (void)setPlayerResponse:(id)arg1;
- (void)videoDidProgressToTime:(double)arg1;
- (void)screenSession:(id)arg1 didReceiveWatchNextResponse:(id)arg2;
- (void)screenSession:(id)arg1 didReceivePlayerResponse:(id)arg2;
- (void)screenSession:(id)arg1 playerStateDidChange:(long long)arg2;
- (void)screenSession:(id)arg1 videoDidChangeToVideoID:(id)arg2 listID:(id)arg3 videoIndex:(unsigned long long)arg4;
- (void)showEmptyStateWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)showZeroState;
- (void)showConnectingState;
@property(readonly, nonatomic) MDXBaseMiniBarView *miniBarView;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithScreenSession:(id)arg1 autoplayCoordinator:(id)arg2 videoProgressController:(id)arg3 parentResponder:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
