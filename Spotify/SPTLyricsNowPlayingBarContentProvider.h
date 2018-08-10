//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingBarContentProvider.h"

@class NSString, SPTLyricsNowPlayingBarButton, SPTLyricsService, SPTPlayerTrack;

@interface SPTLyricsNowPlayingBarContentProvider : NSObject <SPTNowPlayingBarContentProvider>
{
    SPTLyricsService *_lyricsService;
    id <SPTLyricsOnboardingManager> _lyricsOnboardingManager;
    id <SPTNowPlayingManager> _nowPlayingManager;
    SPTLyricsNowPlayingBarButton *_lyricsButton;
    SPTPlayerTrack *_track;
}

@property(retain, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
@property(retain, nonatomic) SPTLyricsNowPlayingBarButton *lyricsButton; // @synthesize lyricsButton=_lyricsButton;
@property(retain, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(retain, nonatomic) id <SPTLyricsOnboardingManager> lyricsOnboardingManager; // @synthesize lyricsOnboardingManager=_lyricsOnboardingManager;
@property(retain, nonatomic) SPTLyricsService *lyricsService; // @synthesize lyricsService=_lyricsService;
- (void).cxx_destruct;
- (void)lyricsButtonTouchedUpInside;
- (id)layoutConstraintsForNowPlayingBarView:(id)arg1 contentView:(id)arg2 playButton:(id)arg3;
- (id)provideLeftAccessoryView;
- (_Bool)shouldRenderAlternateLeftAccessoryView;
- (id)provideMainContentView;
- (_Bool)shouldRenderMainContentView;
- (void)updateWithPlayerTrack:(id)arg1;
- (id)initWithLyricsService:(id)arg1 lyricsOnboardingManager:(id)arg2 nowPlayingManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

