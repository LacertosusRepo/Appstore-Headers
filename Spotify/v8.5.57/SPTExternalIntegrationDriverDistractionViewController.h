//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, SPTExternalIntegrationDriverDistractionLockscreenView, UIButton, UIImage;
@protocol SPTExternalIntegrationDriverDistractionViewControllerDelegate;

@interface SPTExternalIntegrationDriverDistractionViewController : UIViewController
{
    _Bool _dismissible;
    id <SPTExternalIntegrationDriverDistractionViewControllerDelegate> _delegate;
    NSString *_sessionIdentifier;
    UIImage *_lockscreenImage;
}

@property(readonly, nonatomic) _Bool dismissible; // @synthesize dismissible=_dismissible;
@property(readonly, nonatomic) __weak UIImage *lockscreenImage; // @synthesize lockscreenImage=_lockscreenImage;
@property(readonly, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) __weak id <SPTExternalIntegrationDriverDistractionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didChangeThemeSettings:(id)arg1;
- (id)spotifyLogotypeImageView;
@property(readonly, nonatomic) __weak UIButton *dismissButton;
@property(readonly, nonatomic) SPTExternalIntegrationDriverDistractionLockscreenView *lockscreenView;
- (void)didTapDismissButton:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithIdentifier:(id)arg1 lockscreenImage:(id)arg2 dismissible:(_Bool)arg3;

@end

