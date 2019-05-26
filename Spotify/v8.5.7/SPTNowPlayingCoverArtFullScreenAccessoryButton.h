//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "SPTThemableView-Protocol.h"

@class NSString;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTNowPlayingCoverArtFullScreenAccessoryButton : UIButton <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
}

+ (id)fullScreenAccessoryButton;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)applyThemeLayout;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
