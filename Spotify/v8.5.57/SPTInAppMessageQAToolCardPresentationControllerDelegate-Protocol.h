//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTInAppMessageQAToolCardPresentationController, UIImage;

@protocol SPTInAppMessageQAToolCardPresentationControllerDelegate <NSObject>
- (void)presentationControllerDidDismissContentUnit:(SPTInAppMessageQAToolCardPresentationController *)arg1 approved:(_Bool)arg2 image:(UIImage *)arg3 currentDateAndTime:(NSString *)arg4;
- (void)presentationControllerDidChangeContentUnitPosition:(SPTInAppMessageQAToolCardPresentationController *)arg1 approvedDirection:(_Bool)arg2;
@end

