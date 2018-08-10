//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTPivotBarDelegate.h"
#import "YTPivotBarViewControllerDelegate.h"

@class GIMMe, NSString, UINavigationController;

@interface YTAppPivotBarController : NSObject <YTPivotBarDelegate, YTPivotBarViewControllerDelegate>
{
    UINavigationController *_navigationController;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)showHintsForPivotBarViewController:(id)arg1 fromPivotBarRenderer:(id)arg2;
- (id)navigationController;
- (void)didTapPivotBarItemWithViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)pivotBarItemViewControllers;
- (id)minimalPivotBarBrowseIdFilter;
- (_Bool)shouldDisablePivotBarInteraction;
- (void)pivotBarViewController:(id)arg1 didUpdateWithRenderer:(id)arg2;
- (void)pivotBarViewController:(id)arg1 didTapItemWithRenderer:(id)arg2;
- (_Bool)pivotBarViewController:(id)arg1 willHandleNavigationEndpoint:(id)arg2;
- (void)pivotBarViewController:(id)arg1 didReceiveCommandWithAvailableHints:(id)arg2;
- (void)pivotBarViewController:(id)arg1 didReceiveRefreshActionOnCurrentPivotIdentifier:(id)arg2;
- (void)pivotBarViewController:(id)arg1 viewDidAppear:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

