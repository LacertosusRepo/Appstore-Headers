//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GLUEEntityRowStyle, GLUETrackCloudStyle, SPTFreeTierPlaylistButtonSectionHeaderViewStyle, SPTFreeTierPlaylistGLUETheme, SPTFreeTierPlaylistSponsoredLogoCellStyle, SPTFreeTierPreCurationQuickActionViewStyle;
@protocol GLUEImageLoader, SPTBrowseRedirectButtonProvider, SPTFreeTierPlaylistCellConfiguratorDelegate, SPTFreeTierPlaylistViewModel, SPTShelves;

@interface SPTFreeTierPlaylistCellConfigurator : NSObject
{
    id <SPTFreeTierPlaylistCellConfiguratorDelegate> _delegate;
    id <SPTFreeTierPlaylistViewModel> _viewModel;
    SPTFreeTierPlaylistGLUETheme *_theme;
    id <SPTShelves> _shelves;
    GLUEEntityRowStyle *_trackRowStyle;
    GLUEEntityRowStyle *_trackRowWithColoredIconStyle;
    GLUEEntityRowStyle *_trackRowPreCurationStyle;
    GLUETrackCloudStyle *_cloudStyle;
    GLUETrackCloudStyle *_noTitleCloudStyle;
    GLUETrackCloudStyle *_recommendationsCloudStyle;
    SPTFreeTierPlaylistSponsoredLogoCellStyle *_sponsorshipStyle;
    SPTFreeTierPreCurationQuickActionViewStyle *_defaultQuickActionViewStyle;
    SPTFreeTierPreCurationQuickActionViewStyle *_banQuickActionViewStyle;
    SPTFreeTierPreCurationQuickActionViewStyle *_likedQuickActionViewStyle;
    SPTFreeTierPreCurationQuickActionViewStyle *_likedAndBannedQuickActionViewStyle;
    id <SPTBrowseRedirectButtonProvider> _browseRedirectButtonProvider;
    id <GLUEImageLoader> _glueImageLoader;
}

@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) id <SPTBrowseRedirectButtonProvider> browseRedirectButtonProvider; // @synthesize browseRedirectButtonProvider=_browseRedirectButtonProvider;
@property(retain, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *likedAndBannedQuickActionViewStyle; // @synthesize likedAndBannedQuickActionViewStyle=_likedAndBannedQuickActionViewStyle;
@property(retain, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *likedQuickActionViewStyle; // @synthesize likedQuickActionViewStyle=_likedQuickActionViewStyle;
@property(retain, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *banQuickActionViewStyle; // @synthesize banQuickActionViewStyle=_banQuickActionViewStyle;
@property(retain, nonatomic) SPTFreeTierPreCurationQuickActionViewStyle *defaultQuickActionViewStyle; // @synthesize defaultQuickActionViewStyle=_defaultQuickActionViewStyle;
@property(retain, nonatomic) SPTFreeTierPlaylistSponsoredLogoCellStyle *sponsorshipStyle; // @synthesize sponsorshipStyle=_sponsorshipStyle;
@property(retain, nonatomic) GLUETrackCloudStyle *recommendationsCloudStyle; // @synthesize recommendationsCloudStyle=_recommendationsCloudStyle;
@property(retain, nonatomic) GLUETrackCloudStyle *noTitleCloudStyle; // @synthesize noTitleCloudStyle=_noTitleCloudStyle;
@property(retain, nonatomic) GLUETrackCloudStyle *cloudStyle; // @synthesize cloudStyle=_cloudStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *trackRowPreCurationStyle; // @synthesize trackRowPreCurationStyle=_trackRowPreCurationStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *trackRowWithColoredIconStyle; // @synthesize trackRowWithColoredIconStyle=_trackRowWithColoredIconStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *trackRowStyle; // @synthesize trackRowStyle=_trackRowStyle;
@property(readonly, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(readonly, nonatomic) SPTFreeTierPlaylistGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTFreeTierPlaylistCellConfiguratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enableSwipeGesturesOnCell:(id)arg1 withTrackViewModel:(id)arg2;
- (void)sectionHeaderButtonAction;
- (void)likeAction:(id)arg1;
- (void)banAction:(id)arg1;
- (void)contextMenuAction:(id)arg1;
- (void)setupTrailingAccessoryForCell:(id)arg1 trackViewModel:(id)arg2;
- (void)setupNPTActionsTrailingAccessoryForCell:(id)arg1 trackViewModel:(id)arg2;
- (void)setupQuickActionsTrailingAccessoryForCell:(id)arg1 trackViewModel:(id)arg2;
- (void)configureMultipleAccessoriesViewForCell:(id)arg1 trackViewModel:(id)arg2;
- (void)configureImageViewForCell:(id)arg1 trackViewModel:(id)arg2;
- (id)contentViewForCell:(id)arg1;
- (void)configurePlexCell:(id)arg1 withTrackViewModel:(id)arg2;
- (void)configureSponsorshipCell:(id)arg1 withSponsoredViewModel:(id)arg2;
- (id)currentCloudStyleWithCloudTitle:(id)arg1;
- (void)configureCloudCell:(id)arg1 withCloudViewModel:(id)arg2 andContainerWidth:(double)arg3;
- (void)configureCell:(id)arg1 withTrackViewModel:(id)arg2;
- (double)preferredCellHeightAtIndexPath:(id)arg1 andContainerWidth:(double)arg2;
@property(readonly, nonatomic) SPTFreeTierPlaylistButtonSectionHeaderViewStyle *sectionHeaderViewStyle;
- (void)configureSectionHeader:(id)arg1 section:(unsigned long long)arg2;
- (void)configureSectionFooter:(id)arg1 section:(unsigned long long)arg2;
- (double)preferredFooterHeightForSection:(unsigned long long)arg1;
- (double)preferredHeaderHeightForSection:(unsigned long long)arg1;
- (id)initWithViewModel:(id)arg1 trackRowStyle:(id)arg2 sponsorshipStyle:(id)arg3 shelves:(id)arg4 theme:(id)arg5 browseRedirectButtonProvider:(id)arg6 glueImageLoader:(id)arg7;

@end

