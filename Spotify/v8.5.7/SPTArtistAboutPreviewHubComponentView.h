//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewWithEvents-Protocol.h"
#import "GLUEThemeObserver-Protocol.h"

@class SPTArtistAboutGLUETheme, SPTArtistAboutPreviewView;
@protocol EXP_HUBComponentEventHandler;

@interface SPTArtistAboutPreviewHubComponentView : EXP_HUBComponentView <GLUEThemeObserver, EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    SPTArtistAboutPreviewView *_aboutPreviewView;
    SPTArtistAboutGLUETheme *_theme;
}

@property(retain, nonatomic) SPTArtistAboutGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTArtistAboutPreviewView *aboutPreviewView; // @synthesize aboutPreviewView=_aboutPreviewView;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)didTapView;
- (void)themeUpdated:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

