//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTVoiceNowPlayingArtworkViewModelDelegate-Protocol.h"

@class GLUEGradientView, GLUEImageView, NSString, SPTVoiceNowPlayingArtworkViewModel, SPTVoiceNowPlayingRadialGradientView;
@protocol GLUEImageLoader;

@interface SPTVoiceNowPlayingArtworkView : UIView <SPTVoiceNowPlayingArtworkViewModelDelegate>
{
    SPTVoiceNowPlayingArtworkViewModel *_viewModel;
    GLUEImageView *_artworkImageView;
    GLUEGradientView *_linearGradientView;
    SPTVoiceNowPlayingRadialGradientView *_radialGradientView;
    id <GLUEImageLoader> _glueImageLoader;
}

@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) SPTVoiceNowPlayingRadialGradientView *radialGradientView; // @synthesize radialGradientView=_radialGradientView;
@property(retain, nonatomic) GLUEGradientView *linearGradientView; // @synthesize linearGradientView=_linearGradientView;
@property(retain, nonatomic) GLUEImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(retain, nonatomic) SPTVoiceNowPlayingArtworkViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)createRadialGradientView;
- (id)createVerticalGradientView;
- (void)voiceNowPlayingArtworkViewModelDidUpdate:(id)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)setupLayout;
- (void)setupViews;
- (id)initWithViewModel:(id)arg1 glueImageLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
