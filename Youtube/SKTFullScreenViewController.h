//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTMaximizedViewController.h"

#import "GOOHeaderNavigationParentViewController.h"
#import "SKTAccessoryWrapperViewDelegate.h"
#import "SKTMaximizeTransitionDestination.h"

@class GOOFlexibleHeaderViewController, GOOHeaderNavigationView, NSString, QTMButton, SKTAccessoryWrapperView, UIView, UIViewController<SKTMaximizeTransitionOrigin>;

@interface SKTFullScreenViewController : SKTMaximizedViewController <GOOHeaderNavigationParentViewController, SKTAccessoryWrapperViewDelegate, SKTMaximizeTransitionDestination>
{
    _Bool _isCompactHeightMode;
    _Bool _chipsInputActivated;
    GOOFlexibleHeaderViewController *_headerViewController;
    GOOHeaderNavigationView *_headerNavigationView;
    UIViewController<SKTMaximizeTransitionOrigin> *transitionOrigin;
    id <SKTAdvancedTransitionsService> _transitionsService;
    SKTAccessoryWrapperView *_accessoryWrapperView;
    QTMButton *_proceedButton;
    UIView *_dimmingView;
    NSString *_activeAccountEmail;
}

@property(retain, nonatomic) NSString *activeAccountEmail; // @synthesize activeAccountEmail=_activeAccountEmail;
@property(nonatomic) _Bool chipsInputActivated; // @synthesize chipsInputActivated=_chipsInputActivated;
@property(nonatomic) _Bool isCompactHeightMode; // @synthesize isCompactHeightMode=_isCompactHeightMode;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) QTMButton *proceedButton; // @synthesize proceedButton=_proceedButton;
@property(retain, nonatomic) SKTAccessoryWrapperView *accessoryWrapperView; // @synthesize accessoryWrapperView=_accessoryWrapperView;
@property(retain, nonatomic) id <SKTAdvancedTransitionsService> transitionsService; // @synthesize transitionsService=_transitionsService;
@property(nonatomic) __weak UIViewController<SKTMaximizeTransitionOrigin> *transitionOrigin; // @synthesize transitionOrigin;
@property(retain, nonatomic) GOOHeaderNavigationView *headerNavigationView; // @synthesize headerNavigationView=_headerNavigationView;
@property(retain, nonatomic) GOOFlexibleHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
- (void).cxx_destruct;
- (id)headerTextColor;
- (id)headerBackgroundColor;
- (_Bool)canDisplayAccessoryView;
- (id)titleForAccessoryIsActiveState:(_Bool)arg1;
- (_Bool)shouldAskForPermissionsOnAppearance;
- (id)allNamesFromContacts:(id)arg1;
- (void)playVoiceOverNotificationForContacts:(id)arg1;
- (void)updateAccessoryIsHiddenAnimated:(_Bool)arg1 forceUpdate:(_Bool)arg2;
- (void)restoreCollectionEnabledAppearanceAnimated:(_Bool)arg1;
- (void)makeCollectionAppearDisabledAnimated:(_Bool)arg1;
- (void)updateProceedButtonState;
- (_Bool)shouldCommitInputOnProceed;
- (_Bool)canProceed;
- (void)proceedWithSelectedTargets;
- (void)proceedButtonTapped;
- (void)dismissShareSheet;
- (void)accessoryWrapperView:(id)arg1 didUpdateIsActiveState:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectedContactsVC:(id)arg1 didUpdateInputState:(long long)arg2 fromInputState:(long long)arg3;
- (void)notifyUserOnViewAppearance;
- (_Bool)deselectContactMethod:(id)arg1 atKnownIndexPath:(id)arg2 notifyDelegate:(_Bool)arg3;
- (id)selectContactMethod:(id)arg1 atKnownIndexPath:(id)arg2 notifyDelegate:(_Bool)arg3 contactSource:(long long)arg4;
- (void)contactContentView:(id)arg1 didUpdateToExpandState:(_Bool)arg2;
- (id)selectedContactsView;
- (void)dismissFromPresentingViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)inputAccessoryView;
- (_Bool)canBecomeFirstResponder;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 uiOptions:(id)arg2 contactsDataManager:(id)arg3 advancedTransitionsService:(id)arg4 analyticsProvider:(id)arg5 contactToExpand:(id)arg6 chipsInputActivated:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <SKTFullScreenViewControllerOptions> uiOptions; // @dynamic uiOptions;

@end

