//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIViewController;

@protocol SPTInAppMessageQAToolViewModelDelegate <NSObject>
- (void)useLocaleList:(NSArray *)arg1;
- (void)useHardCodedLocaleList;
- (void)dismissMessagePresentationViewController:(UIViewController *)arg1;
- (void)presentMessagePresentationViewController:(UIViewController *)arg1;
@end

