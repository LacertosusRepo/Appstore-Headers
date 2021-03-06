//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTPlayerTrack, UIViewController;
@protocol SPTCanvasModel;

@protocol SPTCanvasViewControllerFactory <NSObject>
- (UIViewController *)createCanvasLowResViewControllerForTrack:(SPTPlayerTrack *)arg1 withCanvasModel:(id <SPTCanvasModel>)arg2;
- (UIViewController *)createCanvasViewControllerForTrack:(SPTPlayerTrack *)arg1 withCanvasModel:(id <SPTCanvasModel>)arg2;
@end

