//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage, UIViewController;

@protocol SPTPodcastSpeedControlManager <NSObject>
- (UIImage *)currentPodcastPlaybackSpeedIconWithSize:(struct CGSize)arg1;
- (UIImage *)provideSpeedControlIconImage;
- (UIViewController *)providePodcastSpeedControlViewControllerWithDelegate:(id <SPTPodcastSpeedControlViewControllerDelegate>)arg1;
@end

