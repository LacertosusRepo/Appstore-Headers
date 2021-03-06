//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

#import "SPTThemableView.h"

@class NSString, UIImage;

@interface SPTSlider : UISlider <SPTThemableView>
{
    _Bool _thumbVisible;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIImage *_thumbVisibleImage;
    UIImage *_trackMaxImage;
    UIImage *_trackMinImage;
    UIImage *_thumbInvisibleImage;
}

@property(retain, nonatomic) UIImage *thumbInvisibleImage; // @synthesize thumbInvisibleImage=_thumbInvisibleImage;
@property(retain, nonatomic) UIImage *trackMinImage; // @synthesize trackMinImage=_trackMinImage;
@property(retain, nonatomic) UIImage *trackMaxImage; // @synthesize trackMaxImage=_trackMaxImage;
@property(retain, nonatomic) UIImage *thumbVisibleImage; // @synthesize thumbVisibleImage=_thumbVisibleImage;
@property(nonatomic, getter=isThumbVisible) _Bool thumbVisible; // @synthesize thumbVisible=_thumbVisible;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
@property(readonly, copy) NSString *description;
- (void)updateState;
- (void)applyThemeLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

