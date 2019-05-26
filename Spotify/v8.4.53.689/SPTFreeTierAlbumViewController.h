//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_SPTHubViewController.h"

#import "SPTShareableContext.h"
#import "SPViewController.h"

@class NSString, NSURL, SPTFreeTierAlbumContextMenuButtonViewModel, SPTFreeTierAlbumHeartBanButtonViewModel;

@interface SPTFreeTierAlbumViewController : EXP_SPTHubViewController <SPTShareableContext, SPViewController>
{
    SPTFreeTierAlbumHeartBanButtonViewModel *_heartBanButtonViewModel;
    SPTFreeTierAlbumContextMenuButtonViewModel *_contextMenuButtonViewModel;
    id <SPTPlayer> _player;
}

@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTFreeTierAlbumContextMenuButtonViewModel *contextMenuButtonViewModel; // @synthesize contextMenuButtonViewModel=_contextMenuButtonViewModel;
@property(readonly, nonatomic) SPTFreeTierAlbumHeartBanButtonViewModel *heartBanButtonViewModel; // @synthesize heartBanButtonViewModel=_heartBanButtonViewModel;
- (void).cxx_destruct;
- (void)playURIInContext:(id)arg1;
- (void)determineIfContextContainsURI:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSURL *URI;
- (void)viewModelDidLoad:(id)arg1;
- (void)setupNavigationItems;
- (id)initWithTheme:(id)arg1 viewURI:(id)arg2 componentRegistry:(id)arg3 componentLayoutManager:(id)arg4 imageLoaderFactory:(id)arg5 commandHandler:(id)arg6 viewModelProvider:(id)arg7 impressionLogger:(id)arg8 loadingLogger:(id)arg9 pageIdentifier:(id)arg10 pageURI:(id)arg11 heartBanButtonViewModel:(id)arg12 contextMenuButtonViewModel:(id)arg13 player:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
