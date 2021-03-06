//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationCardModelProviderInterfaceDelegate-Protocol.h"
#import "SPTAssistedCurationCardsProvider-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, SPTAssistedCurationCardModelImplementation;
@protocol SPTAssistedCurationCardsProviderDelegate, SPTAssistedCurationRecommendedTracksDataLoader, SPTOfflineModeState;

@interface SPTAssistedCurationRecommendedTracksProvider : NSObject <SPTAssistedCurationCardModelProviderInterfaceDelegate, SPTAssistedCurationCardsProvider>
{
    _Bool _hasMore;
    id <SPTAssistedCurationCardsProviderDelegate> _delegate;
    NSString *_playlistName;
    SPTAssistedCurationCardModelImplementation *_currentCard;
    NSMutableSet *_skipTracks;
    NSMutableArray *_playlistTracks;
    id <SPTAssistedCurationRecommendedTracksDataLoader> _recommendedTracksDataLoader;
    id <SPTOfflineModeState> _offlineModeState;
}

+ (id)identifier;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) id <SPTAssistedCurationRecommendedTracksDataLoader> recommendedTracksDataLoader; // @synthesize recommendedTracksDataLoader=_recommendedTracksDataLoader;
@property(retain, nonatomic) NSMutableArray *playlistTracks; // @synthesize playlistTracks=_playlistTracks;
@property(retain, nonatomic) NSMutableSet *skipTracks; // @synthesize skipTracks=_skipTracks;
@property(retain, nonatomic) SPTAssistedCurationCardModelImplementation *currentCard; // @synthesize currentCard=_currentCard;
@property(retain, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(nonatomic) __weak id <SPTAssistedCurationCardsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadMoreTracksForCard:(id)arg1;
- (void)card:(id)arg1 addedTrack:(id)arg2 atIndex:(unsigned long long)arg3;
- (_Bool)hasMoreTracksForCard:(id)arg1;
- (void)addedTrack:(id)arg1 fromContext:(unsigned long long)arg2;
- (void)fetchRecommendationsForTrack:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchNumberTracks:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)provideCardsForCurrentTracks:(id)arg1 andPlaylistName:(id)arg2;
- (void)cardWithTracks:(id)arg1;
- (id)initWithAssistedCurationRecommendedTracksDataLoader:(id)arg1 offlineModeState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

