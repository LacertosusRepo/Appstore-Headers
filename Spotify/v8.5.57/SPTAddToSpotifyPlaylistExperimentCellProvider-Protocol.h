//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTFreeTierPlaylistCellProvider-Protocol.h"
#import "SPTFreeTierPlaylistSectionDescription-Protocol.h"
#import "SPTFreeTierPlaylistSectionFooter-Protocol.h"
#import "SPTFreeTierPlaylistSectionHeader-Protocol.h"

@protocol SPTFreeTierPlaylistCellProviderDelegate;

@protocol SPTAddToSpotifyPlaylistExperimentCellProvider <SPTFreeTierPlaylistCellProvider, SPTFreeTierPlaylistSectionDescription, SPTFreeTierPlaylistSectionHeader, SPTFreeTierPlaylistSectionFooter>
@property(nonatomic) __weak id <SPTFreeTierPlaylistCellProviderDelegate> delegate;
@end

