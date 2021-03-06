//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMViewControllerWithNavigationItem.h"

@class IMModalWindow, UIActivityIndicatorView, UIButton;

@interface IMUpgradeController : IMViewControllerWithNavigationItem
{
    UIButton *nopeButton;
    UIButton *unlockEverythingButton;
    UIActivityIndicatorView *activityIndicator;
    IMModalWindow *_modalWindow;
    CDUnknownBlockType _goBackCallback;
}

@property(copy, nonatomic) CDUnknownBlockType goBackCallback; // @synthesize goBackCallback=_goBackCallback;
@property(nonatomic) __weak IMModalWindow *modalWindow; // @synthesize modalWindow=_modalWindow;
- (void).cxx_destruct;
- (void)unlockTapped:(id)arg1;
- (void)restoreTapped:(id)arg1;
- (void)dismiss;
- (void)nopeTapped:(id)arg1;
- (void)viewDidLoad;
- (void)willBeginAppearanceTransition:(id)arg1;

@end

