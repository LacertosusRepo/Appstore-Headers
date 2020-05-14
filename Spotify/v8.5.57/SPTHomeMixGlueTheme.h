//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEThemeBase.h"

@class GLUEEntityRowStyle, GLUEImageStyle, GLUELabelStyle, SPTHomeMixEntityRowActionViewStyle, SPTHomeMixHeaderActionBarAuxViewStyle, SPTHomeMixHeaderActionBarStyle, SPTHomeMixHeaderActionButtonStyle, SPTHomeMixMemberPileContainerViewStyle, SPTHomeMixMemberPileViewStyle;

@interface SPTHomeMixGlueTheme : GLUEThemeBase
{
}

- (id)homeMixWelcomeFooterSubtitleStyle;
- (id)homeMixWelcomeFooterGradientStyle;
@property(readonly, copy, nonatomic) GLUELabelStyle *homeMixWelcomeCellNameStyle;
@property(readonly, copy, nonatomic) GLUELabelStyle *homeMixWelcomeSubtitleStyle;
- (id)homeMixWelcomeTitleStyleWithTextColor:(id)arg1;
- (double)homeMixGenreCardFallbackMinimumHeight;
- (id)homeMixFacepileDetailSubtitleStyle;
- (id)homeMixFacepileDetailTitleStyle;
- (id)homeMixFacepileDetailGradientStyle;
- (id)homeMixHeaderImageStyleFacepileDetail;
- (struct CGSize)homeMixFacepileDetailCardHeaderImageSize;
@property(readonly, copy, nonatomic) SPTHomeMixHeaderActionBarAuxViewStyle *homeMixHeaderActionBarAuxViewStyle;
@property(readonly, copy, nonatomic) GLUELabelStyle *homeMixHeaderActionBarLabelStyleSelected;
@property(readonly, copy, nonatomic) GLUELabelStyle *homeMixHeaderActionBarLabelStyle;
@property(readonly, copy, nonatomic) SPTHomeMixHeaderActionBarStyle *homeMixHeaderActionBarStyle;
@property(readonly, copy, nonatomic) SPTHomeMixHeaderActionButtonStyle *homeMixUpbeatButtonStyle;
@property(readonly, copy, nonatomic) SPTHomeMixHeaderActionButtonStyle *homeMixChillButtonStyle;
- (id)homeMixMoodButtonStyle;
- (id)homeMixPlayButtonStyleWithBackgroundColor:(id)arg1;
@property(readonly, copy, nonatomic) GLUEImageStyle *homeMixHeaderImageStyle;
- (id)homeMixHeaderContentViewStyleInformationalWithBackgroundColor:(id)arg1;
- (id)homeMixHeaderLargeSubtitleStyle;
- (struct UIEdgeInsets)homeMixEntityPageLargeSubtitleInsets;
- (id)homeMixHeaderBackgroundGradientStyle;
- (id)homeMixHeaderContentViewPlaybackStyleWithBackgroundColor:(id)arg1;
@property(readonly, copy, nonatomic) SPTHomeMixHeaderActionButtonStyle *defaultHeartActionButtonStyle;
@property(readonly, copy, nonatomic) SPTHomeMixEntityRowActionViewStyle *actionViewStyle;
@property(readonly, copy, nonatomic) GLUEEntityRowStyle *trackRowStyle;
@property(readonly, copy, nonatomic) GLUELabelStyle *navigationTitleLabelStyle;
@property(readonly, copy, nonatomic) SPTHomeMixMemberPileContainerViewStyle *memberPileContainerStyleLarger;
@property(readonly, copy, nonatomic) SPTHomeMixMemberPileContainerViewStyle *memberPileContainerStyleGenresPage;
- (unsigned long long)genresPageMaxNumberOfElementsForWidth:(double)arg1;
@property(readonly, copy, nonatomic) SPTHomeMixMemberPileContainerViewStyle *memberPileContainerStyle;
@property(readonly, copy, nonatomic) GLUEImageStyle *memberPileImageStyle;
- (id)memberPileViewStyleGenresPage;
- (id)memberPileViewStyleFacepileDetailPage;
@property(readonly, copy, nonatomic) SPTHomeMixMemberPileViewStyle *memberPileViewStyleUserTogglePage;
@property(readonly, copy, nonatomic) SPTHomeMixMemberPileViewStyle *memberPileViewStyle;
@property(readonly, copy, nonatomic) GLUELabelStyle *memberPileOverflowLabelStyle;

@end

