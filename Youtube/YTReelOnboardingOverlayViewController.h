//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "YTGraftingViewController.h"
#import "YTResponder.h"
#import "YTTopController.h"

@class GIMMe, NSString, YTICommand, YTReelOnboardingOverlayView;

@interface YTReelOnboardingOverlayViewController : UIViewController <YTGraftingViewController, YTResponder, YTTopController>
{
    YTICommand *_model;
    YTReelOnboardingOverlayView *_onboardingOverlayView;
    _Bool _cameraPermissionGranted;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTReelOnboardingViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTReelOnboardingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)didTapLearnMoreButton;
- (void)didTapGetStartedButton;
- (void)dismissViewController;
- (void)dismissViewController:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)navEndpoint;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

