//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTMySPINWebViewControllerDelegate.h"

@class NSString, SPTMySPINWebViewController;

@interface SPTMySPINDebugViewController : UIViewController <SPTMySPINWebViewControllerDelegate>
{
    id <SPTMySPINDebugViewControllerDelegate> _delegate;
    SPTMySPINWebViewController *_mySPINWebViewController;
}

@property(retain, nonatomic) SPTMySPINWebViewController *mySPINWebViewController; // @synthesize mySPINWebViewController=_mySPINWebViewController;
@property(nonatomic) __weak id <SPTMySPINDebugViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webUIDidFinishLoading:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMySPINWebViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

