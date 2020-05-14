//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBannerViewDelegate-Protocol.h"

@class NSString, SPTLyricsV2Colors, SPTLyricsV2GLUETheme;
@protocol GLUEImageLoader, SPTBannerPresentationManager, SPTBannerPresentationManagerTicket, SPTVocalRemovalFeedbackBannerPresenterDelegate;

@interface SPTVocalRemovalFeedbackBannerPresenter : NSObject <SPTBannerViewDelegate>
{
    id <SPTVocalRemovalFeedbackBannerPresenterDelegate> _delegate;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTBannerPresentationManagerTicket> _bannerTicket;
    id <GLUEImageLoader> _imageLoader;
    SPTLyricsV2Colors *_colors;
    SPTLyricsV2GLUETheme *_theme;
}

@property(retain, nonatomic) SPTLyricsV2GLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTLyricsV2Colors *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) id <SPTBannerPresentationManagerTicket> bannerTicket; // @synthesize bannerTicket=_bannerTicket;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(nonatomic) __weak id <SPTVocalRemovalFeedbackBannerPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)presentBanner:(id)arg1;
- (void)closeButtonTappedInBannerView:(id)arg1;
- (void)dismissCurrentBannerAnimated:(_Bool)arg1;
- (void)presentBannerAndDismiss:(_Bool)arg1 afterDelay:(double)arg2;
- (id)initWithBannerPresentationManager:(id)arg1 theme:(id)arg2 colors:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

