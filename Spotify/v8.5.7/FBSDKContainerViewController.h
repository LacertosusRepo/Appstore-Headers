//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol FBSDKContainerViewControllerDelegate;

@interface FBSDKContainerViewController : UIViewController
{
    id <FBSDKContainerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBSDKContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)displayChildController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;

@end

