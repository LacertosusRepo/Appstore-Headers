//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GLUEEntityRowStyle, SPTHomeMixFamilyPileConfigurator, SPTHomeMixGlueTheme;
@protocol GLUEImageLoader, SPTHomeMixTrackCellDelegate;

@interface SPTHomeMixTrackCellConfigurator : NSObject
{
    id <GLUEImageLoader> _glueImageLoader;
    SPTHomeMixGlueTheme *_theme;
    id <SPTHomeMixTrackCellDelegate> _cellDelegate;
    GLUEEntityRowStyle *_trackRowStyle;
    SPTHomeMixFamilyPileConfigurator *_pileConfigurator;
}

+ (id)actionViewStyleFromTheme:(id)arg1;
@property(readonly, nonatomic) SPTHomeMixFamilyPileConfigurator *pileConfigurator; // @synthesize pileConfigurator=_pileConfigurator;
@property(readonly, nonatomic) GLUEEntityRowStyle *trackRowStyle; // @synthesize trackRowStyle=_trackRowStyle;
@property(readonly, nonatomic) __weak id <SPTHomeMixTrackCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(readonly, nonatomic) SPTHomeMixGlueTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
- (void).cxx_destruct;
- (void)configureCell:(id)arg1 activeState:(_Bool)arg2 enabledState:(_Bool)arg3;
- (void)setUpTrailingAccessoryForCell:(id)arg1 viewModel:(id)arg2 oldInteractionListener:(id)arg3;
- (void)setUpLeadingAccessoryForCell:(id)arg1 viewModel:(id)arg2 oldInteractionListener:(id)arg3;
- (void)setUpMultipleAccessoriesViewForCell:(id)arg1 trackViewModel:(id)arg2;
- (void)setUpContentViewForCell:(id)arg1;
- (void)configureCell:(id)arg1 withTrackViewModel:(id)arg2;
@property(readonly, nonatomic) double cellHeight;
- (id)initWithImageLoader:(id)arg1 theme:(id)arg2 cellDelegate:(id)arg3;

@end
