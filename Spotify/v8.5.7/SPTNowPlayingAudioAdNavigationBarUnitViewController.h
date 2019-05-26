//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingAdUnitViewController-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"

@class NSString, SPTAdNowPlayingManager, SPTNowPlayingNavigationBarViewV2, SPTTheme;
@protocol SPTNowPlayingContainingViewController;

@interface SPTNowPlayingAudioAdNavigationBarUnitViewController : UIViewController <SPTNowPlayingContainedViewController, SPTNowPlayingAdUnitViewController>
{
    SPTAdNowPlayingManager *_nowPlayingManager;
    SPTTheme *_theme;
}

@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTAdNowPlayingManager *nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
- (void).cxx_destruct;
- (void)reloadViewControllerWithAdEntity:(id)arg1;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)minimizePlayingView;
- (void)updateLabelsWithAdEntity:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNowPlayingManager:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingNavigationBarViewV2 *view; // @dynamic view;

@end
