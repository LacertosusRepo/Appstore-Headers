//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTGeniusLaunchExternalDelegate.h"
#import "SPTPageController.h"
#import "SPTPlayerObserver.h"

@class NSMutableDictionary, NSString, NSTimer, NSURL, SPTGeniusAnnotation, SPTGeniusAnnotationSet, SPTGeniusCardContainerView, SPTGeniusLoggingService, SPTGeniusService, UIView;

@interface SPTGeniusCardsViewController : UIViewController <SPTPlayerObserver, SPTGeniusLaunchExternalDelegate, SPTPageController>
{
    _Bool _active;
    _Bool _visible;
    _Bool _pausedPlayback;
    _Bool _firstCardScheduled;
    _Bool _loggedUIPageImpression;
    SPTGeniusCardContainerView *_cardContainerView;
    NSURL *_trackURL;
    SPTGeniusService *_geniusService;
    SPTGeniusAnnotationSet *_annotationSet;
    SPTGeniusLoggingService *_loggingService;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTPlayer> _player;
    UIView *_currentCard;
    SPTGeniusAnnotation *_currentAnnotation;
    double _nextTimestamp;
    double _currentTimestamp;
    NSTimer *_timer;
    NSMutableDictionary *_cardViewCache;
}

@property(retain, nonatomic) NSMutableDictionary *cardViewCache; // @synthesize cardViewCache=_cardViewCache;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool loggedUIPageImpression; // @synthesize loggedUIPageImpression=_loggedUIPageImpression;
@property(nonatomic) _Bool firstCardScheduled; // @synthesize firstCardScheduled=_firstCardScheduled;
@property(nonatomic) _Bool pausedPlayback; // @synthesize pausedPlayback=_pausedPlayback;
@property(nonatomic) double currentTimestamp; // @synthesize currentTimestamp=_currentTimestamp;
@property(nonatomic) double nextTimestamp; // @synthesize nextTimestamp=_nextTimestamp;
@property(retain, nonatomic) SPTGeniusAnnotation *currentAnnotation; // @synthesize currentAnnotation=_currentAnnotation;
@property(retain, nonatomic) UIView *currentCard; // @synthesize currentCard=_currentCard;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) SPTGeniusLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(retain, nonatomic) SPTGeniusAnnotationSet *annotationSet; // @synthesize annotationSet=_annotationSet;
@property(retain, nonatomic) SPTGeniusService *geniusService; // @synthesize geniusService=_geniusService;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSURL *trackURL; // @synthesize trackURL=_trackURL;
@property(retain, nonatomic) SPTGeniusCardContainerView *cardContainerView; // @synthesize cardContainerView=_cardContainerView;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)didTapButtonWithGeniusSongID:(long long)arg1 itemIndex:(int)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)handleNewPlayerState:(id)arg1;
- (void)hideHint;
- (void)showHint;
- (void)showCardAtTime:(double)arg1;
- (long long)getCurrentAnnotationIndex;
- (void)showNextCardWithDelay:(double)arg1;
- (void)showNextCard;
- (void)showCardAtIndex:(int)arg1;
- (id)cardViewForAnnotation:(id)arg1;
- (_Bool)shouldShowIntroCard;
- (void)viewWillLayoutSubviews;
- (void)setAnnotationSet:(id)arg1 trackURL:(id)arg2;
- (void)resetState;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTrackURL:(id)arg1 geniusService:(id)arg2 player:(id)arg3 loggingService:(id)arg4 imageLoaderFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

