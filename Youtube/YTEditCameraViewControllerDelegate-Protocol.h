//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YTEditBaseCameraViewController;

@protocol YTEditCameraViewControllerDelegate <NSObject>
- (void)cameraViewControllerRecordingEnded:(YTEditBaseCameraViewController *)arg1;
- (void)cameraViewControllerRecordingBegan:(YTEditBaseCameraViewController *)arg1;
- (void)cameraViewControllerOrientationChanged:(long long)arg1;

@optional
- (void)cameraViewControllerFailedToRecord:(YTEditBaseCameraViewController *)arg1;
- (void)cameraViewControllerDidSaveToLibrary:(YTEditBaseCameraViewController *)arg1;
- (void)cameraViewControllerDidLongPress;
@end

