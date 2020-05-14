//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class NSString, UILabel;
@protocol SPTThemableViewLayoutDelegate;

@interface SettingsErrorHeaderView : UIView <SPTThemableView>
{
    UILabel *_textLabel;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    double _margin;
}

@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyThemeLayout;
- (double)headerHeightForWidth:(double)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

