//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SPTNowPlayingShowsFormatOverlayLinearGradientView, SPTNowPlayingShowsFormatOverlayRadialGradientView;

@interface SPTNowPlayingShowsFormatOverlayView : UIView
{
    SPTNowPlayingShowsFormatOverlayLinearGradientView *_linearGradientView;
    SPTNowPlayingShowsFormatOverlayRadialGradientView *_radialGradientView;
}

@property(readonly, nonatomic) SPTNowPlayingShowsFormatOverlayRadialGradientView *radialGradientView; // @synthesize radialGradientView=_radialGradientView;
@property(readonly, nonatomic) SPTNowPlayingShowsFormatOverlayLinearGradientView *linearGradientView; // @synthesize linearGradientView=_linearGradientView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

