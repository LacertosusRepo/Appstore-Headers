//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "SPTCellAccessoryView.h"
#import "SPTThemableView.h"

@class NSIndexPath, NSString, UIImage;

@interface SPTPlaylistOfflineSyncAccessoryButton : UIButton <SPTCellAccessoryView, SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    unsigned long long _offlineSyncAccessoryState;
    NSIndexPath *_indexPath;
    unsigned long long _fixedXPosition;
    UIImage *_activeImage;
    UIImage *_normalImage;
}

+ (id)offlineSyncAccessoryButton;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) UIImage *activeImage; // @synthesize activeImage=_activeImage;
@property(nonatomic) unsigned long long fixedXPosition; // @synthesize fixedXPosition=_fixedXPosition;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) unsigned long long offlineSyncAccessoryState; // @synthesize offlineSyncAccessoryState=_offlineSyncAccessoryState;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (struct CGSize)SPTCellAccessoryViewPositionAdjustment;
@property(nonatomic, getter=isDisabled) _Bool disabled;
- (void)updateIcon;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

