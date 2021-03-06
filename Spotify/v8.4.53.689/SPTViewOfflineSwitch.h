//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTThemableViewLayoutDelegate.h"

@class GLUELabel, NSString, SPTLayoutConstraintBuilder, SPTNetworkConnectivityController, UISwitch;

@interface SPTViewOfflineSwitch : UIView <SPTThemableViewLayoutDelegate>
{
    _Bool _enabled;
    id <SPTViewOfflineSwitchDelegate> _delegate;
    SPTNetworkConnectivityController *_networkConnectivityController;
    UIView *_textWrapper;
    UISwitch *_offlineSwitch;
    GLUELabel *_offlineTitle;
    GLUELabel *_offlineSubtitle;
    unsigned long long _lastAvailability;
    id <SPTProductState> _productState;
    id <SPTModalPresentationController> _modalPresentationController;
    SPTLayoutConstraintBuilder *_layoutConstraintBuilder;
}

@property(retain, nonatomic) SPTLayoutConstraintBuilder *layoutConstraintBuilder; // @synthesize layoutConstraintBuilder=_layoutConstraintBuilder;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) unsigned long long lastAvailability; // @synthesize lastAvailability=_lastAvailability;
@property(retain, nonatomic) GLUELabel *offlineSubtitle; // @synthesize offlineSubtitle=_offlineSubtitle;
@property(retain, nonatomic) GLUELabel *offlineTitle; // @synthesize offlineTitle=_offlineTitle;
@property(retain, nonatomic) UISwitch *offlineSwitch; // @synthesize offlineSwitch=_offlineSwitch;
@property(retain, nonatomic) UIView *textWrapper; // @synthesize textWrapper=_textWrapper;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(nonatomic) __weak id <SPTViewOfflineSwitchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldShowRemoveFromDownloadsConfirmationAlert;
- (void)showRemoveFromDownloadsConfirmationAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateTitlesWithAvailability:(unsigned long long)arg1;
- (void)updateOfflineState;
- (void)handleOfflineAfterDelay;
- (void)toggleOffline:(id)arg1;
- (void)configureAutoLayouts;
- (void)applyStyle;
- (void)layoutSubviews;
- (void)reload;
@property(nonatomic, getter=isOn) _Bool on;
- (void)dealloc;
- (id)currentTitleForAvailability:(unsigned long long)arg1;
- (id)initWithProductState:(id)arg1 modalPresentationController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

