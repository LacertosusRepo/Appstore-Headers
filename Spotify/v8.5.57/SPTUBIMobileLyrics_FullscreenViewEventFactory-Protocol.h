//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIImpressionEvent, SPTUBIMobileLyrics_FullscreenView_ContextMenuEventFactory, SPTUBIMobileLyrics_FullscreenView_FooterViewEventFactory, SPTUBIMobileLyrics_FullscreenView_HeaderViewEventFactory, SPTUBIMobileLyrics_FullscreenView_LyricsViewEventFactory, SPTUBIMobileLyrics_FullscreenView_ReportBannerEventFactory;

@protocol SPTUBIMobileLyrics_FullscreenViewEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileLyrics_FullscreenView_ContextMenuEventFactory>)contextMenuFactory;
- (id <SPTUBIMobileLyrics_FullscreenView_FooterViewEventFactory>)footerViewFactory;
- (id <SPTUBIMobileLyrics_FullscreenView_LyricsViewEventFactory>)lyricsViewFactory;
- (id <SPTUBIMobileLyrics_FullscreenView_HeaderViewEventFactory>)headerViewFactory;
- (id <SPTUBIMobileLyrics_FullscreenView_ReportBannerEventFactory>)reportBannerFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

