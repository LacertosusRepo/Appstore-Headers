//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTTasteCollectionConfiguration, SPTTasteCollectionSplashViewController;

@protocol SPTTasteCollectionSplashViewControllerDelegate <NSObject>
- (void)errorOccuredToLoadConfigurationForTasteCollectionSplashViewController:(SPTTasteCollectionSplashViewController *)arg1;
- (void)tasteCollectionSplashViewController:(SPTTasteCollectionSplashViewController *)arg1 didLoadConfiguration:(SPTTasteCollectionConfiguration *)arg2;
- (void)didClickSkipButtonForTasteCollectionSplashViewController:(SPTTasteCollectionSplashViewController *)arg1;
- (void)didClickNextButtonForTasteCollectionSplashViewController:(SPTTasteCollectionSplashViewController *)arg1;
@end

