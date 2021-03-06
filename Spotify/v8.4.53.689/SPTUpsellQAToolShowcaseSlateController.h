//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTUpsellShowcaseSlateController.h"

#import "SPTSlateDataSource.h"
#import "SPTSlateDelegate.h"
#import "SPTSlateViewDataSource.h"
#import "SPTSlateViewDelegate.h"
#import "SPTUpsellOverlayContentViewDelegate.h"

@class NSString, SPTUpsellDismissAction, SPTUpsellGLUETheme, SPTUpsellShowcaseSlateViewModel, UIImage;

@interface SPTUpsellQAToolShowcaseSlateController : SPTUpsellShowcaseSlateController <SPTSlateDelegate, SPTSlateDataSource, SPTUpsellOverlayContentViewDelegate, SPTSlateViewDelegate, SPTSlateViewDataSource>
{
    id <SPTUpsellQAToolShowcaseSlateControllerDelegate> _qaDelegate;
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    SPTUpsellShowcaseSlateViewModel *_viewModel;
    SPTUpsellGLUETheme *_theme;
    id <SPTSlate> _slate;
    SPTUpsellDismissAction *_dismissAction;
    UIImage *_snapshot;
    NSString *_currentDateAndTime;
}

@property(retain, nonatomic) NSString *currentDateAndTime; // @synthesize currentDateAndTime=_currentDateAndTime;
@property(retain, nonatomic) UIImage *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) SPTUpsellDismissAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(retain, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
@property(retain, nonatomic) SPTUpsellGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTUpsellShowcaseSlateViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) __weak id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) __weak id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(nonatomic) __weak id <SPTUpsellQAToolShowcaseSlateControllerDelegate> qaDelegate; // @synthesize qaDelegate=_qaDelegate;
- (void).cxx_destruct;
- (id)takeScreenshot:(id)arg1;
- (id)getCurrentDateAndTime;
- (void)slateViewControllerDidAppear:(id)arg1;
- (void)slateViewControllerPositionChanged:(struct CGPoint)arg1;
- (void)slateViewControllerDismissed:(id)arg1 swipeDirection:(struct CGPoint)arg2;
- (void)dismissUpsellOverlayContentUnit;
- (id)contentUnitForSlateViewController:(id)arg1;
- (id)initWithViewModel:(id)arg1 slateManager:(id)arg2 slateBuilderProvider:(id)arg3 dismissAction:(id)arg4 theme:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

