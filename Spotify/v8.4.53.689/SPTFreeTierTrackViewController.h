//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_SPTHubViewController.h"

@class SPTFreeTierTrackContextMenuButtonViewModel, SPTFreeTierTrackHeartBanButtonViewModel;

@interface SPTFreeTierTrackViewController : EXP_SPTHubViewController
{
    SPTFreeTierTrackHeartBanButtonViewModel *_heartBanButtonViewModel;
    SPTFreeTierTrackContextMenuButtonViewModel *_contextMenuButtonViewModel;
}

@property(readonly, nonatomic) SPTFreeTierTrackContextMenuButtonViewModel *contextMenuButtonViewModel; // @synthesize contextMenuButtonViewModel=_contextMenuButtonViewModel;
@property(readonly, nonatomic) SPTFreeTierTrackHeartBanButtonViewModel *heartBanButtonViewModel; // @synthesize heartBanButtonViewModel=_heartBanButtonViewModel;
- (void).cxx_destruct;
- (void)viewModelDidLoad:(id)arg1;
- (void)setupNavigationItems;
- (id)initWithTheme:(id)arg1 viewURI:(id)arg2 componentRegistry:(id)arg3 componentLayoutManager:(id)arg4 imageLoaderFactory:(id)arg5 commandHandler:(id)arg6 viewModelProvider:(id)arg7 impressionLogger:(id)arg8 loadingLogger:(id)arg9 pageIdentifier:(id)arg10 pageURI:(id)arg11 heartBanButtonViewModel:(id)arg12 contextMenuButtonViewModel:(id)arg13;

@end

