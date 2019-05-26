//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTDrivingModeControllerDelegate;

@protocol SPTDrivingModeController <NSObject>
@property(nonatomic) __weak id <SPTDrivingModeControllerDelegate> delegate;
@property(readonly, nonatomic) _Bool drivingModeEnabled;
@property(readonly, nonatomic) NSString *drivingAdsModeIdentifier;
@property(readonly, nonatomic) NSString *drivingPodcastModeIdentifier;
@property(readonly, nonatomic) NSString *drivingFeedbackModeIdentifier;
@property(readonly, nonatomic) NSString *drivingDefaultModeIdentifier;
@end

