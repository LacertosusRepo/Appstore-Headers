//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTCellAccessoryView-Protocol.h"
#import "SPTThemableView-Protocol.h"

@class NSString, UIImageView;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTDisclosureAccessoryView : UIView <SPTCellAccessoryView, SPTThemableView>
{
    _Bool _disabled;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIImageView *_chevronView;
}

+ (id)disclosureAccessoryView;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (struct CGSize)SPTCellAccessoryViewPositionAdjustment;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

