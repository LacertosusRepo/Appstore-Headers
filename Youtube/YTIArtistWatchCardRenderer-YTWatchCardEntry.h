//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTIArtistWatchCardRenderer.h"

#import "YTWatchCardEntry.h"

@class NSMutableArray, NSString, YTICommand, YTIFormattedString, YTIMenuSupportedRenderers, YTIWatchCardCallToActionSupportedRenderers, YTIWatchCardRelatedData;

@interface YTIArtistWatchCardRenderer (YTWatchCardEntry) <YTWatchCardEntry>

// Remaining properties
@property(readonly, nonatomic) YTIWatchCardCallToActionSupportedRenderers *callToAction;
@property(readonly, nonatomic) _Bool collapsed;
@property(readonly, nonatomic) YTIFormattedString *collapsedLabel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasCallToAction;
@property(readonly, nonatomic) _Bool hasCollapsed;
@property(readonly, nonatomic) _Bool hasCollapsedLabel;
@property(readonly, nonatomic) _Bool hasMenu;
@property(readonly, nonatomic) _Bool hasNavigationEndpoint;
@property(readonly, nonatomic) _Bool hasRelatedData;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSMutableArray *labelsArray;
@property(readonly, nonatomic) NSMutableArray *listsArray;
@property(readonly, nonatomic) YTIMenuSupportedRenderers *menu;
@property(readonly, nonatomic) YTICommand *navigationEndpoint;
@property(readonly, nonatomic) YTIWatchCardRelatedData *relatedData;
@property(readonly) Class superclass;
@property(readonly, nonatomic) YTIFormattedString *title;
@end

