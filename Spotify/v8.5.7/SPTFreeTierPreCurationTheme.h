//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEThemeBase.h"

@class GLUEEntityRowStyle, SPTFreeTierPreCurationChunkyRowStyle, SPTFreeTierPreCurationQuickActionViewStyle;
@protocol SPTCollectionPlatformConfiguration;

@interface SPTFreeTierPreCurationTheme : GLUEThemeBase
{
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
}

@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
- (void).cxx_destruct;
- (id)colorForLikeState:(_Bool)arg1;
- (long long)iconForLikeState:(_Bool)arg1;
- (id)colorForBanState:(_Bool)arg1;
- (long long)iconForBanState:(_Bool)arg1;
@property(readonly, copy, nonatomic) GLUEEntityRowStyle *trackRowPreCurationStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *likedAndBannedQuickActionViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *banQuickActionViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *likedQuickActionViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *defaultQuickActionViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *defaultQuickActionAddBanViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationChunkyRowStyle *bannedChunkyTrackRowStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationChunkyRowStyle *defaultChunkyTrackRowStyle;
- (id)initWithParentTheme:(id)arg1 collectionConfiguration:(id)arg2;

@end

