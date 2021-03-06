//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISearchBar.h>

#import "SPTThemableView-Protocol.h"

@class NSString, UIColor;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTSearchBar : UISearchBar <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    long long _keyboardAppearance;
}

+ (id)searchBar;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)textFieldInView:(id)arg1;
- (void)setFont:(id)arg1;
- (id)font;
@property(retain, nonatomic) UIColor *searchFieldBackgroundColor;
@property(retain, nonatomic) UIColor *searchFieldTextColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

