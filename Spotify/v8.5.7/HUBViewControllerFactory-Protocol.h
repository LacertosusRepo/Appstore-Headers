//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HUBViewController, NSArray, NSString, NSURL;

@protocol HUBViewControllerFactory
- (HUBViewController *)createViewControllerForViewURI:(NSURL *)arg1 contentOperations:(NSArray *)arg2 featureIdentifier:(NSString *)arg3 featureTitle:(NSString *)arg4;
- (HUBViewController *)createViewControllerWithContentOperations:(NSArray *)arg1 featureTitle:(NSString *)arg2;
- (HUBViewController *)createViewControllerForViewURI:(NSURL *)arg1;
- (_Bool)canCreateViewControllerForViewURI:(NSURL *)arg1;
@end

