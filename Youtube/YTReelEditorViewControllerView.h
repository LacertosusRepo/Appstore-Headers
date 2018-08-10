//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GIMMe;

@interface YTReelEditorViewControllerView : UIView
{
    UIView *_clippingView;
    GIMMe *_gimme;
    UIView *_contentContainerView;
    UIView *_playerView;
    UIView *_playerPreviewView;
    UIView *_videoOverlayView;
    UIView *_actionsView;
    double _expandOffset;
    struct CGSize _contentAspectRatio;
}

@property(nonatomic) double expandOffset; // @synthesize expandOffset=_expandOffset;
@property(retain, nonatomic) UIView *actionsView; // @synthesize actionsView=_actionsView;
@property(nonatomic) struct CGSize contentAspectRatio; // @synthesize contentAspectRatio=_contentAspectRatio;
@property(retain, nonatomic) UIView *videoOverlayView; // @synthesize videoOverlayView=_videoOverlayView;
@property(retain, nonatomic) UIView *playerPreviewView; // @synthesize playerPreviewView=_playerPreviewView;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(readonly, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
