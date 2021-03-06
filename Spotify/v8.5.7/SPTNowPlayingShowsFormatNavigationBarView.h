//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "SPTThemableView-Protocol.h"

@class NSNotificationCenter, NSString, SPTNowPlayingMarqueeLabel, SPTTheme;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTNowPlayingShowsFormatNavigationBarView : UIControl <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTNowPlayingMarqueeLabel *_titleLabel;
    NSString *_title;
    SPTTheme *_theme;
    NSNotificationCenter *_notificationCentre;
}

@property(readonly, nonatomic) NSNotificationCenter *notificationCentre; // @synthesize notificationCentre=_notificationCentre;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) SPTNowPlayingMarqueeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)refreshTitleLabel;
- (void)applyThemeLayout;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 notificationCentre:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

