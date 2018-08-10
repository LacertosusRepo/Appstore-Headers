//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GA11YMixinEmbedder.h"
#import "YTCellDismissedView.h"
#import "YTPageStyling.h"

@class FLXLayout, NSString, YTButton, YTIButtonRenderer, YTINotificationMultiActionRenderer, YTLabel, YTQTMButton;

@interface YTNotificationDismissedView : UIView <GA11YMixinEmbedder, YTPageStyling, YTCellDismissedView>
{
    FLXLayout *_layout;
    UIView *_containerView;
    YTIButtonRenderer *_buttonRenderer1;
    YTIButtonRenderer *_buttonRenderer2;
    YTIButtonRenderer *_buttonRenderer3;
    YTButton *_closeButton;
    long long _pageStyle;
    _Bool _shouldUsePaddedLayout;
    _Bool _showCloseButton;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTNotificationDismissedViewDelegate> _delegate;
    YTINotificationMultiActionRenderer *_renderer;
    YTLabel *_resultTextLabel;
    YTQTMButton *_button1;
    YTQTMButton *_button2;
    YTQTMButton *_button3;
}

@property(readonly, nonatomic) YTQTMButton *button3; // @synthesize button3=_button3;
@property(readonly, nonatomic) YTQTMButton *button2; // @synthesize button2=_button2;
@property(readonly, nonatomic) YTQTMButton *button1; // @synthesize button1=_button1;
@property(readonly, nonatomic) YTLabel *resultTextLabel; // @synthesize resultTextLabel=_resultTextLabel;
@property(nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(nonatomic) _Bool shouldUsePaddedLayout; // @synthesize shouldUsePaddedLayout=_shouldUsePaddedLayout;
@property(readonly, nonatomic) YTINotificationMultiActionRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak id <YTNotificationDismissedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupButton:(id)arg1;
- (_Bool)didTapCloseButton;
- (_Bool)didTapButton3;
- (_Bool)didTapButton2;
- (_Bool)didTapButton1;
- (void)layoutButtons;
- (void)setButton:(id)arg1 withRenderer:(id)arg2 action:(SEL)arg3;
- (id)accessibilityCustomActions;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (id)root;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithRenderer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
