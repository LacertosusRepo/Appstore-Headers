//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class NSString, SPTTheme, UIBezierPath;
@protocol NSObject, SPTThemableViewLayoutDelegate;

@interface SPTTooltipWindowBackgroundView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIBezierPath *_interactableAreaMask;
    SPTTheme *_theme;
    id <NSObject> _themeSettingsChangeNotificationIdentifier;
}

@property(retain, nonatomic) id <NSObject> themeSettingsChangeNotificationIdentifier; // @synthesize themeSettingsChangeNotificationIdentifier=_themeSettingsChangeNotificationIdentifier;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIBezierPath *interactableAreaMask; // @synthesize interactableAreaMask=_interactableAreaMask;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

