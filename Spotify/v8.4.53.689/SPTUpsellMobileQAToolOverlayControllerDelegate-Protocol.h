//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SPTUpsellQAToolMobileOverlayController, UIImage;

@protocol SPTUpsellMobileQAToolOverlayControllerDelegate <NSObject>
- (void)didChangeQAToolOverlayPosition:(SPTUpsellQAToolMobileOverlayController *)arg1 accepted:(_Bool)arg2;
- (void)didDismissQAToolOverlay:(SPTUpsellQAToolMobileOverlayController *)arg1 accepted:(_Bool)arg2 image:(UIImage *)arg3 currentDateAndTime:(NSString *)arg4;
@end

