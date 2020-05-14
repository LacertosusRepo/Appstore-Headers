//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUBComponentView.h"

#import "GLUEThemeObserver-Protocol.h"
#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class SPTArtistAboutGLUETheme, SPTArtistAboutLargePreviewView;
@protocol HUBComponentEventHandler;

@interface SPTArtistAboutLargePreviewHubComponentView : HUBComponentView <GLUEThemeObserver, HUBComponentViewWithEvents, HUBComponentViewWithImageHandling>
{
    id <HUBComponentEventHandler> _eventHandler;
    SPTArtistAboutLargePreviewView *_aboutPreviewView;
    SPTArtistAboutGLUETheme *_theme;
}

@property(readonly, nonatomic) SPTArtistAboutGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTArtistAboutLargePreviewView *aboutPreviewView; // @synthesize aboutPreviewView=_aboutPreviewView;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)didTapView;
- (void)themeUpdated:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end
