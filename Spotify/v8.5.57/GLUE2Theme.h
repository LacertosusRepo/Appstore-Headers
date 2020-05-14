//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUETheme-Protocol.h"

@class NSHashTable, NSString, SPTTheme;

@interface GLUE2Theme : NSObject <GLUETheme>
{
    SPTTheme *_sptTheme;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) SPTTheme *sptTheme; // @synthesize sptTheme=_sptTheme;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyObservers;
- (id)grayHazeGradientStyle;
- (id)purpleLakeGradientStyle;
- (id)aquaticGradientStyle;
- (id)noResultsEmptyStateViewStyle;
- (id)defaultEmptyStateViewStyle;
- (id)pressedAnimatorButtonStyle;
- (id)pressedAnimatorCardStyle;
- (id)pressedAnimatorEntityRowStyle;
- (id)pressedAnimatorDefaultStyle;
- (id)headerBackgroundStyle;
- (id)trackCloudStyleWithNumberOfLines:(unsigned long long)arg1 showOnlyTrackNames:(_Bool)arg2 showNumberedList:(_Bool)arg3;
- (id)trackCloudStyleForUIState:(unsigned long long)arg1;
- (id)defaultTrackCloudStyle;
- (id)cardStyleWithImageMask:(_Bool)arg1 imageDecoration:(_Bool)arg2 titleStyleDescription:(_Bool)arg3 subtitleStyleMetadata:(_Bool)arg4;
- (id)radioGenreCardStyle;
- (id)radioArtistCardStyle;
- (id)showCardStyle;
- (id)userCardStyle;
- (id)artistCardStyle;
- (id)playlistCardStyle;
- (id)albumCardStyle;
- (id)baseCardStyle;
- (id)tertiaryFilledButtonStyle;
- (id)tertiaryOutlineButtonStyle;
- (id)tertiaryBorderedButtonStyle;
- (id)tertiaryTextLightButtonStyle;
- (id)tertiaryTextButtonStyle;
- (id)secondaryLightButtonStyle;
- (id)secondaryButtonStyle;
- (id)primaryWhiteButtonStyle;
- (id)primaryGreenButtonStyle;
- (id)calendarViewThumbnailStyle;
- (id)videoThumbnailStyle;
- (id)trackRowStyleWithSubtitleStyleMetadata:(_Bool)arg1 transparentBackground:(_Bool)arg2 shouldAddTrailingMargin:(_Bool)arg3 shouldTrailingAccessoryIgnoreState:(_Bool)arg4;
- (id)calendarRowStyleWithSubtitleStyleMetadata:(_Bool)arg1 transparentBackground:(_Bool)arg2 shouldAddTrailingMargin:(_Bool)arg3 shouldTrailingAccessoryIgnoreState:(_Bool)arg4;
- (id)rowStyleWithImageMask:(_Bool)arg1 subtitleStyleMetadata:(_Bool)arg2 transparentBackground:(_Bool)arg3 shouldAddTrailingMargin:(_Bool)arg4 shouldTrailingAccessoryIgnoreState:(_Bool)arg5;
- (id)rowStyleWithImageMask:(_Bool)arg1 subtitleStyleMetadata:(_Bool)arg2 transparentBackground:(_Bool)arg3 shouldAddTrailingMargin:(_Bool)arg4;
- (id)videoRowStyleWithTransparentBackground:(_Bool)arg1 subtitleStyleMetadata:(_Bool)arg2 shouldAddTrailingMargin:(_Bool)arg3 shouldTrailingAccessoryIgnoreState:(_Bool)arg4;
- (id)videoRowStyleWithTransparentBackground:(_Bool)arg1 subtitleStyleMetadata:(_Bool)arg2 shouldAddTrailingMargin:(_Bool)arg3;
- (id)entityRowVideoStyle;
- (id)entityRowEpisodeStyle;
- (id)entityRowTrackStyle;
- (id)entityRowShowStyle;
- (id)entityRowConcertStyle;
- (id)entityRowUserStyle;
- (id)entityRowArtistStyle;
- (id)entityRowPlaylistStyle;
- (id)entityRowAlbumStyle;
- (id)entityRowDefaultStyle;
- (id)entityRowStyleForUIState:(unsigned long long)arg1;
- (struct UIEdgeInsets)rowWithTrailingButtonContentInsets;
- (struct UIEdgeInsets)defaultRowContentInsets;
- (id)trackPreviewAccessoryDefaultStyle;
- (id)trackMultipleAccessoriesDefaultStyle;
- (id)ageRestrictionViewDefaultstyle;
- (id)trackAccessoryLabelDefaultStyle;
- (id)offlineSyncStatusViewDefaultStyle;
- (id)feedbackAccessoryButtonStyle;
- (id)contextMenuAccessoryButtonStyle;
- (id)defaultAccessoryButtonStyle;
- (id)accessoryIconViewNavigationStyle;
- (id)accessoryIconViewContextMenuStyleWithIconColor:(id)arg1;
- (id)accessoryIconViewContextMenuStyle;
- (id)accessoryIconViewDefaultStyle;
- (id)contextMenuCellDefaultStyle;
- (id)navigationDisclosureIndicatorStyle;
- (id)navigationCellDefaultStateDisabledStyle;
- (id)navigationCellDefaultStateHighlightedStyle;
- (id)navigationCellDefaultStateDefaultStyle;
- (id)navigationCellDefaultStyle;
- (id)sectionHeaderExtraSmallStyle;
- (id)sectionHeaderLeftAlignedStyle;
- (id)sectionHeaderSmallStyle;
- (id)sectionHeaderLargeStyle;
- (id)sectionHeaderWithMetadataStyle;
- (id)sectionHeaderWithSubtitleStyle;
- (id)sectionHeaderStyle;
- (id)defaultCollectionViewStyle;
- (id)defaultTableViewCellStyle;
- (id)defaultTableViewStyle;
- (id)metadataRowSubtitleLabelStyle;
- (id)defaultRowSubtitleLabelStyle;
- (id)metadataCardSubtitleLabelStyle;
- (id)defaultCardSubtitleLabelStyle;
- (id)detailsCardTitleLabelStyle;
- (id)defaultCardTitleLabelStyle;
- (id)sectionHeaderLabelStyle;
- (id)buttonSmallLabelStyle;
- (id)buttonLabelStyle;
- (id)microBoldLabelStyle;
- (id)microLabelStyle;
- (id)metadataLabelStyle;
- (id)bodySmallBoldLabelStyle;
- (id)bodySmallLabelStyle;
- (id)bodyMediumBoldLabelStyle;
- (id)bodyMediumLabelStyle;
- (id)headerSmallLabelStyle;
- (id)headerMediumLabelStyle;
- (id)headerLargeLabelStyle;
- (id)heroSmallLabelStyle;
- (id)heroMediumLabelStyle;
- (id)heroLargeLabelStyle;
- (id)defaultLabelStyleWithFont:(id)arg1;
- (void)sptThemeUpdated;
- (void)removeSPTThemeObserver;
- (void)setupSPTThemeObserver;
- (void)dealloc;
- (id)initWithSPTTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

