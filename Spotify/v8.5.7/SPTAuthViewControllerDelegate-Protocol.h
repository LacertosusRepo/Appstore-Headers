//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SPTAuthViewController;

@protocol SPTAuthViewControllerDelegate <NSObject>
- (void)authViewControllerUserDidCancel:(SPTAuthViewController *)arg1;
- (void)authViewController:(SPTAuthViewController *)arg1 didFinishWithResponseURL:(NSURL *)arg2;
@end

