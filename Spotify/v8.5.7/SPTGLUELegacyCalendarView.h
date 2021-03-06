//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class CALayer, NSString, UILabel;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTGLUELegacyCalendarView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UILabel *_mainLabel;
    UILabel *_headerLabel;
    CALayer *_mainLayer;
    CALayer *_headerLayer;
}

+ (id)calendarViewWithDate:(id)arg1;
@property(retain, nonatomic) CALayer *headerLayer; // @synthesize headerLayer=_headerLayer;
@property(retain, nonatomic) CALayer *mainLayer; // @synthesize mainLayer=_mainLayer;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

