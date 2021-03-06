//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierRecoverAccountSlateContentUnitDelegate.h"
#import "SPTSlateDataSource.h"
#import "SPTSlateDelegate.h"

@class NSString, SPTFreeTierLoginTheme, SPTSlateViewController, UIViewController<SPTFreeTierRecoverAccountSlateContentUnit>;

@interface SPTFreeTierRecoverAccountSlatePresenter : NSObject <SPTSlateDataSource, SPTSlateDelegate, SPTFreeTierRecoverAccountSlateContentUnitDelegate>
{
    UIViewController<SPTFreeTierRecoverAccountSlateContentUnit> *_presentedViewController;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    id <SPTSlateManager> _slateManager;
    SPTFreeTierLoginTheme *_theme;
    SPTSlateViewController *_slateViewController;
    id <SPTSlate> _slate;
}

@property(retain, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
@property(nonatomic) __weak SPTSlateViewController *slateViewController; // @synthesize slateViewController=_slateViewController;
@property(readonly, nonatomic) SPTFreeTierLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(readonly, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(retain, nonatomic) UIViewController<SPTFreeTierRecoverAccountSlateContentUnit> *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (void).cxx_destruct;
- (void)contentUnitDidFinishPresentingViewController:(id)arg1;
- (_Bool)isIPad;
- (_Bool)isSmallPhone;
- (_Bool)shouldAllowDragGesture;
- (_Bool)shouldHideImageForSlate:(id)arg1;
- (_Bool)shouldFullscreen;
- (id)contentUnitForSlateViewController:(id)arg1;
- (id)dismissTextForSlate:(id)arg1;
- (_Bool)slateShouldDismiss:(id)arg1;
- (_Bool)slateShouldOnlyDismissOnFooterTap:(id)arg1;
- (void)slateDidDismiss:(id)arg1;
- (void)dismiss;
- (void)presentSlateWithViewController:(id)arg1;
- (id)initWithSlateManager:(id)arg1 slateBuilderProvider:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

