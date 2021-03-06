//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationCardsProvider-Protocol.h"

@class NSString;
@protocol SPTAssistedCurationCardsProviderDelegate, SPTAssistedCurationTopGenresDataLoader, SPTOfflineModeState;

@interface SPTAssistedCurationTopGenresCardProvider : NSObject <SPTAssistedCurationCardsProvider>
{
    _Bool _usePlaylistName;
    id <SPTAssistedCurationCardsProviderDelegate> _delegate;
    id <SPTAssistedCurationTopGenresDataLoader> _topGenresDataLoader;
    id <SPTOfflineModeState> _offlineModeState;
}

+ (id)identifier;
@property(readonly, nonatomic) _Bool usePlaylistName; // @synthesize usePlaylistName=_usePlaylistName;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) id <SPTAssistedCurationTopGenresDataLoader> topGenresDataLoader; // @synthesize topGenresDataLoader=_topGenresDataLoader;
@property(nonatomic) __weak id <SPTAssistedCurationCardsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)provideCardsForCurrentTracks:(id)arg1 andContextName:(id)arg2;
- (void)cardsWithGenres:(id)arg1;
- (id)initWithTopGenresDataLoader:(id)arg1 offlineModeState:(id)arg2 usePlaylistName:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

