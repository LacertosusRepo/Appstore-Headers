//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTCollectionPlatformConfiguration, SPTContextMenuActionsProvider, SPTContextMenuPresenterFactory, SPTFollowModelFactory, SPTFreeTierArtistTestManager, SPTLogCenter, SPTModerationReportDecorationRegistry, SPTModerationServiceState;

@interface SPTFreeTierArtistBarButtonFactory : NSObject
{
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTFollowModelFactory> _followModelFactory;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTContextMenuActionsProvider> _contextMenuActionFactory;
    id <SPTFreeTierArtistTestManager> _freeTierArtistTestManager;
    id <SPTLogCenter> _logCenter;
    id <SPTModerationReportDecorationRegistry> _decorationRegistry;
    id <SPTModerationServiceState> _moderationFeatureState;
}

@property(readonly, nonatomic) id <SPTModerationServiceState> moderationFeatureState; // @synthesize moderationFeatureState=_moderationFeatureState;
@property(readonly, nonatomic) id <SPTModerationReportDecorationRegistry> decorationRegistry; // @synthesize decorationRegistry=_decorationRegistry;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTFreeTierArtistTestManager> freeTierArtistTestManager; // @synthesize freeTierArtistTestManager=_freeTierArtistTestManager;
@property(readonly, nonatomic) id <SPTContextMenuActionsProvider> contextMenuActionFactory; // @synthesize contextMenuActionFactory=_contextMenuActionFactory;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
- (void).cxx_destruct;
- (id)createContextMenuButtonViewModelForViewURI:(id)arg1;
- (id)createFeedbackButtonViewModelForViewURI:(id)arg1 networkConnectivityController:(id)arg2;
- (id)initWithCollectionConfiguration:(id)arg1 followModelFactory:(id)arg2 contextMenuPresenterFactory:(id)arg3 contextMenuActionFactory:(id)arg4 freeTierArtistTestManager:(id)arg5 logCenter:(id)arg6 decorationRegistry:(id)arg7 moderationFeatureState:(id)arg8;

@end

