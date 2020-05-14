//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class NSString, UILabel;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTableHeaderFooterView : UIView <SPTThemableView>
{
    _Bool _firstSection;
    _Bool _lastSection;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    long long _style;
    double _footerHeight;
    UILabel *_textLabel;
    double _maxContentWidth;
}

@property(nonatomic) double maxContentWidth; // @synthesize maxContentWidth=_maxContentWidth;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic, getter=isLastSection) _Bool lastSection; // @synthesize lastSection=_lastSection;
@property(nonatomic, getter=isFirstSection) _Bool firstSection; // @synthesize firstSection=_firstSection;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (double)height;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *text;
- (void)applyThemeLayout;
- (id)initWithStyle:(long long)arg1 maxWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

