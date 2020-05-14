//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "SPTThemableView-Protocol.h"

@class NSString;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTGLUELegacyTrackAccessoryLabel : UILabel <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    long long _type;
}

+ (long long)trackAccessoryLabelTypeFromExplicit:(_Bool)arg1 premium:(_Bool)arg2;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)setText:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

