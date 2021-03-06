//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPageStyling.h"

@class MDCInkTouchController, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, YTButton, YTFormattedStringLabel, YTISlimMetadataButtonSupportedRenderers, YTTransferButton;

@interface YTSlimVideoDetailsActionView : UIView <YTPageStyling>
{
    YTISlimMetadataButtonSupportedRenderers *_supportedRenderer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    MDCInkTouchController *_inkTouchController;
    YTTransferButton *_transferButton;
    _Bool _offlineButton;
    _Bool _expanded;
    _Bool _showCollapsed;
    _Bool _toggled;
    YTButton *_button;
    YTFormattedStringLabel *_label;
    id <YTSlimVideoDetailsActionViewDelegate> _delegate;
}

+ (id)actionViewWithSlimMetadataButtonSupportedRenderer:(id)arg1;
@property(nonatomic, getter=isToggled) _Bool toggled; // @synthesize toggled=_toggled;
@property(nonatomic) __weak id <YTSlimVideoDetailsActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showCollapsed; // @synthesize showCollapsed=_showCollapsed;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic, getter=hasOfflineButton) _Bool offlineButton; // @synthesize offlineButton=_offlineButton;
@property(retain, nonatomic) YTFormattedStringLabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) YTButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)updateAccessibilityIdentifier;
- (void)updateVisibility;
- (void)didTapButton:(id)arg1;
- (void)handleLongPressOnButton:(id)arg1;
- (id)buttonForSupportedRenderer:(id)arg1;
- (id)buttonImageForSupportedRenderer:(id)arg1 selected:(_Bool)arg2;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)accessibilityLabel;
- (void)setOfflineStatus:(int)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithSlimMetadataButtonSupportedRenderer:(id)arg1;
- (double)collapsedPaddingRight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

