//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol SPTLogCenter;

@interface SPTPlaylistLogger : NSObject
{
    NSURL *_pageURL;
    id <SPTLogCenter> _logCenter;
    NSString *_featureIdentifier;
}

@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, copy, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
- (void).cxx_destruct;
- (void)logAddToPlaylistWithIntent:(id)arg1 itemURI:(id)arg2 numberItems:(long long)arg3 section:(id)arg4 source:(id)arg5 playlistIndex:(unsigned long long)arg6 playlistURI:(id)arg7 totalNumberPlaylists:(unsigned long long)arg8 contextSourceURI:(id)arg9;
- (void)logCancelAddToPlaylistSource:(id)arg1 itemURI:(id)arg2;
- (void)logAddToPlaylistSource:(id)arg1 itemURI:(id)arg2 numberItems:(long long)arg3 playlistIndex:(unsigned long long)arg4 playlistURI:(id)arg5 totalNumberPlaylists:(unsigned long long)arg6 contextSourceURI:(id)arg7;
- (void)logCreateAndAddToPlaylistSource:(id)arg1 itemURI:(id)arg2 numberItems:(long long)arg3 playlistURI:(id)arg4 totalNumberPlaylists:(unsigned long long)arg5 contextSourceURI:(id)arg6;
- (void)logInteractionWithInteractionType:(id)arg1 userIntent:(id)arg2 targetUri:(id)arg3 itemIndex:(long long)arg4 sectionId:(id)arg5 action:(id)arg6;
- (void)logHitInteractionWithIntent:(id)arg1 targetUri:(id)arg2 itemIndex:(long long)arg3;
- (void)logHitInteractionWithIntent:(id)arg1 action:(id)arg2;
- (void)logHitInteractionWithIntent:(id)arg1;
- (void)logCreatePlaylistButton;
- (void)logRenamePlaylistButtonSelectedWithRenamed:(_Bool)arg1;
- (void)logPlaylistEntityTableHeaderViewSlideToPage:(long long)arg1;
- (void)logPlaylistEntityTableHeaderViewShufflePlayTap:(_Bool)arg1;
- (void)logPlaylistEntityTableHeaderViewContextMenuTap;
- (void)logPlaylistEntityTableHeaderViewImageTap;
- (void)logPlaylistFollowInteraction:(_Bool)arg1;
- (void)logPlaylistFollowButtonTap;
- (id)initWithPageURL:(id)arg1 logCenter:(id)arg2 featureIdentifier:(id)arg3;

@end

