//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "SPTThemableView-Protocol.h"

@class NSString, SPTTheme;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTCollectionProfileButton : UIButton <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    long long _icon;
    SPTTheme *_theme;
}

+ (id)profileButtonWithIcon:(long long)arg1;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (void)updateProfileImage:(id)arg1;
- (id)initWithIcon:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
