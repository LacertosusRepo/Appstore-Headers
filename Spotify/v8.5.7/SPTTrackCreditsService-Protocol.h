//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class SPTPlayerTrack, UIViewController;

@protocol SPTTrackCreditsService <SPTService>
- (void)presentCreditsViewController:(UIViewController *)arg1;
- (UIViewController *)provideTrackCreditsViewController:(SPTPlayerTrack *)arg1;
@end
