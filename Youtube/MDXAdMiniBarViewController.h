//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MDXMiniBarViewControllerProtocol.h"
#import "MDXScreenSessionObserver.h"
#import "MDXVideoProgressObserver.h"

@class GIMMe, MDXAdMiniBarView, MDXAutoplayCoordinator, MDXBaseMiniBarView, MDXRepeatingTimer, MDXScreenSession, NSString, YTImageService;

@interface MDXAdMiniBarViewController : UIViewController <MDXMiniBarViewControllerProtocol, MDXScreenSessionObserver, MDXVideoProgressObserver>
{
    MDXScreenSession *_screenSession;
    MDXAutoplayCoordinator *_autoplayCoordinator;
    MDXAdMiniBarView *_miniBarView;
    YTImageService *_imageService;
    unsigned long long _imageServiceRequestID;
    NSString *_currentVideoID;
    MDXRepeatingTimer *_videoProgressTimer;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)didTapSkipAd;
- (void)didTapPause;
- (void)didTapPlay;
- (void)updateMiniBarWithPlayerResponse:(id)arg1;
- (void)setupMiniBarWithAdSessionState:(id)arg1;
- (void)videoDidProgressToTime:(double)arg1;
- (void)screenSession:(id)arg1 playerStateDidChange:(long long)arg2;
- (void)screenSessionDidReceiveAdWatchNextResponse:(id)arg1;
- (void)screenSessionDidReceiveAdPlayerResponse:(id)arg1;
- (void)screenSessionDidStartAdSession:(id)arg1;
- (void)setSkipAdEnabled:(_Bool)arg1;
@property(readonly, nonatomic) MDXBaseMiniBarView *miniBarView;
- (void)loadView;
- (void)dealloc;
- (id)initWithScreenSession:(id)arg1 autoplayCoordinator:(id)arg2 videoProgressController:(id)arg3 parentResponder:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

