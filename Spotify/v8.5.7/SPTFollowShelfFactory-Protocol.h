//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;
@protocol SPTFollowShelfFactoryDelegate;

@protocol SPTFollowShelfFactory <NSObject>
@property(nonatomic) __weak id <SPTFollowShelfFactoryDelegate> delegate;
- (UIViewController *)configureFollowShelfViewControllerWithTitle:(NSString *)arg1;
@end

