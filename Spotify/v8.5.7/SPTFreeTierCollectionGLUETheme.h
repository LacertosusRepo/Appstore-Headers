//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEThemeBase.h"

@class GLUEAccessoryIconButtonStyle, SPTFreeTierCollectionDeactivateFiltersFooterStyle, SPTFreeTierCollectionFollowButtonStyle, SPTFreeTierCollectionSongsImageStyle, SPTFreeTierPreCurationQuickActionViewStyle, SPTFreeTierPreCurationTheme;
@protocol SPTSortingFilteringTheme;

@interface SPTFreeTierCollectionGLUETheme : GLUEThemeBase
{
    _Bool _preCurationEnabled;
    SPTFreeTierPreCurationTheme *_preCurationTheme;
    id <SPTSortingFilteringTheme> _sortingFilteringTheme;
}

@property(retain, nonatomic) id <SPTSortingFilteringTheme> sortingFilteringTheme; // @synthesize sortingFilteringTheme=_sortingFilteringTheme;
@property(nonatomic, getter=isPreCurationEnabled) _Bool preCurationEnabled; // @synthesize preCurationEnabled=_preCurationEnabled;
@property(retain, nonatomic) SPTFreeTierPreCurationTheme *preCurationTheme; // @synthesize preCurationTheme=_preCurationTheme;
- (void).cxx_destruct;
- (id)compactRowStyleWithBaseStyle:(id)arg1;
- (id)smallRowStyleWithBaseStyle:(id)arg1;
- (id)largeRowStyleWithBaseStyle:(id)arg1;
- (id)rightAlignedEntityRowStyleWithBaseStyle:(id)arg1;
@property(readonly, copy, nonatomic) GLUEAccessoryIconButtonStyle *quickActionIconStyle;
@property(readonly, copy, nonatomic) SPTFreeTierCollectionFollowButtonStyle *followButtonStyle;
@property(readonly, copy, nonatomic) SPTFreeTierCollectionDeactivateFiltersFooterStyle *deactivateFiltersFooterStyle;
@property(readonly, copy, nonatomic) SPTFreeTierCollectionSongsImageStyle *songsImageStyle;
- (id)searchViewStyle;
- (id)filterBarViewControllerStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *onlyLikeQuickActionViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *likedQuickActionViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *banQuickActionViewStyle;
@property(readonly, copy, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *defaultQuickActionViewStyle;
- (id)chunkyRowStyle;
- (id)offlineBannerStyle;
- (id)entityPageEmptyStateViewStyle;
- (id)songEntityRowStyle;
- (id)emptySongsSectionHeaderStyle;
- (id)entitySectionHeaderStyle;
- (id)songsSectionHeaderStyle;
- (id)tabControlStyle;
- (id)podcastEntityRowStyleCompact;
- (id)podcastEntityRowStyle;
- (id)artistEntityRowStyleWithRowSize:(long long)arg1;
- (id)albumEntityRowStyleWithRowSize:(long long)arg1;
- (id)backgroundOverlayStyle;
- (id)overlayImageViewStyleWithSolidBackground:(_Bool)arg1 gradientBackground:(_Bool)arg2 baseImageStyle:(id)arg3;
- (id)gradientOverlayImageViewStyleWithImageStyle:(id)arg1;
- (id)solidOverlayImageViewStyleWithImageStyle:(id)arg1;
- (id)overlayImageViewStyleWithImageStyle:(id)arg1;
- (id)entityRowCollectionStyleWithRowSize:(long long)arg1;
- (id)backgroundGradientStyleForConstraints;
- (id)backgroundGradientStyle;
- (id)songsHeaderContentViewStyle;
- (id)initWithParentTheme:(id)arg1 andPreCurationTheme:(id)arg2 preCurationEnabled:(_Bool)arg3 sortingFilteringTheme:(id)arg4;

@end

