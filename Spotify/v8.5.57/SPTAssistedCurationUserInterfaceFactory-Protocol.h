//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;
@protocol SPTSearch2RootViewControllerProtocol><SPTPageController, SPTSearch2ViewControllerProtocol><SPTPageController;

@protocol SPTAssistedCurationUserInterfaceFactory <NSObject>
- (UIViewController<SPTSearch2ViewControllerProtocol><SPTPageController> *)createAssistedCurationSearchViewControllerForEntityType:(NSString *)arg1 query:(NSString *)arg2;
- (UIViewController<SPTSearch2RootViewControllerProtocol><SPTPageController> *)createAssistedCurationSearchViewController;
@end

