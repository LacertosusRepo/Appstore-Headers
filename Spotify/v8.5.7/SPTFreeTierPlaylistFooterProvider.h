//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SPTFreeTierRecommendationsPlaylistViewProvider, SPTPageCreationContext;

@interface SPTFreeTierPlaylistFooterProvider : NSObject
{
    id <SPTFreeTierRecommendationsPlaylistViewProvider> _recommenedPlaylistViewProvider;
    NSURL *_playlistURL;
    id <SPTPageCreationContext> _context;
}

@property(readonly, nonatomic) id <SPTPageCreationContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, nonatomic) id <SPTFreeTierRecommendationsPlaylistViewProvider> recommenedPlaylistViewProvider; // @synthesize recommenedPlaylistViewProvider=_recommenedPlaylistViewProvider;
- (void).cxx_destruct;
- (id)recommendedPlaylistFooterViewController;
- (id)initWithRecommenedPlaylistViewProvider:(id)arg1 playlistURL:(id)arg2 context:(id)arg3;

@end

