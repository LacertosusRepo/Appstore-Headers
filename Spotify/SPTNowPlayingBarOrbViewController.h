//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTPageController.h"
#import "SPTPlayerObserver.h"
#import "UIGestureRecognizerDelegate.h"

@class CAShapeLayer, NSString, NSURL, SPTNowPlayingBarEqualizer, SPTTheme, UITapGestureRecognizer;

@interface SPTNowPlayingBarOrbViewController : UIViewController <SPTPlayerObserver, UIGestureRecognizerDelegate, SPTPageController>
{
    id <SPTPlayer> _player;
    SPTNowPlayingBarEqualizer *_barEqualizer;
    CAShapeLayer *_backgroundLayer;
    SPTTheme *_theme;
    id <SPTNowPlayingManager> _nowPlayingManager;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) SPTNowPlayingBarEqualizer *barEqualizer; // @synthesize barEqualizer=_barEqualizer;
@property(nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)addTapGesture;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)setupViews;
- (void)viewDidLoad;
- (id)initWithPlayer:(id)arg1 theme:(id)arg2 nowPlayingManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
