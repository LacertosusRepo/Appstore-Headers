//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSpotlightItemsImageLoaderDelegate-Protocol.h"
#import "SPTSpotlightItemsProvider-Protocol.h"

@class NSMutableArray, NSString, SPTSpotlightItemsImageLoader;
@protocol SPTPlaylistPlatformPlaylistDataLoader, SPTSpotlightItemsProviderDelegate;

@interface SPTSpotlightPlaylistsProvider : NSObject <SPTSpotlightItemsImageLoaderDelegate, SPTSpotlightItemsProvider>
{
    id <SPTSpotlightItemsProviderDelegate> delegate;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    SPTSpotlightItemsImageLoader *_imageLoader;
    NSMutableArray *_windowItems;
    long long _currentWindowedRequest;
    long long _numberOfWindowedRequests;
}

@property(nonatomic) long long numberOfWindowedRequests; // @synthesize numberOfWindowedRequests=_numberOfWindowedRequests;
@property(nonatomic) long long currentWindowedRequest; // @synthesize currentWindowedRequest=_currentWindowedRequest;
@property(retain, nonatomic) NSMutableArray *windowItems; // @synthesize windowItems=_windowItems;
@property(readonly, nonatomic) SPTSpotlightItemsImageLoader *imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(nonatomic) __weak id <SPTSpotlightItemsProviderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)itemsImageLoader:(id)arg1 didLoadImagesForItems:(id)arg2;
- (void)windowItemsLoaded;
- (void)preparePlaylistsToBeIndexedWithResponse:(id)arg1;
- (void)requestCurrentWindow;
- (id)itemsIdentifier;
- (void)provideItems;
- (id)initWithPlaylistDataLoader:(id)arg1 itemsImageLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
