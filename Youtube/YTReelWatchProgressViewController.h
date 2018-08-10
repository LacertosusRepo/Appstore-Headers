//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "YTReelWatchQueueObserver.h"
#import "YTResponder.h"

@class GIMMe, NSString, YTIReelPlayerProgressRenderer, YTReelWatchQueue;

@interface YTReelWatchProgressViewController : UIViewController <YTReelWatchQueueObserver, YTResponder>
{
    YTReelWatchQueue *_watchQueue;
    _Bool _pendingPlayerOverlayUpdate;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTIReelPlayerProgressRenderer *_progressRenderer;
}

@property(retain, nonatomic) YTIReelPlayerProgressRenderer *progressRenderer; // @synthesize progressRenderer=_progressRenderer;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (unsigned long long)progressBarIndexForWatchControllerAtIndex:(unsigned long long)arg1;
- (void)activeProgessBarChangedFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)handleSwipeFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)reelWatchProgressView;
- (void)updateProgressRendererForIndex:(unsigned long long)arg1;
- (void)resetProgress;
- (void)watchController:(id)arg1 didSetReelItemWatchResponse:(id)arg2 forIndex:(unsigned long long)arg3;
- (void)watchController:(id)arg1 playerStateDidChange:(long long)arg2 forIndex:(unsigned long long)arg3;
- (void)currentIndexDidChangeFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)dealloc;
- (void)loadView;
- (id)initWithWatchQueue:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
