//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTScannablesLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logDidSelectPhotoFromPhotoLibrary;
- (void)logDidClosePhotoLibrary;
- (void)logDidOpenPhotoLibrary;
- (void)logDidAllowPhotoLibraryPermissions:(_Bool)arg1;
- (void)logDidTapPhotoLibraryButton;
- (void)logScanDidSucceedWithURL:(id)arg1 source:(id)arg2;
- (void)logDidTapPermissionsSettingsWithSource:(id)arg1;
- (void)logDidAllowCameraPermission:(_Bool)arg1;
- (void)logDidCompleteCameraOnboarding:(_Bool)arg1;
- (void)logDidTapCameraButtonWithPageURL:(id)arg1;
- (void)logDidDisplayCameraButtonWithPageIdentifier:(id)arg1;
- (void)logDidMoveToPageWithPageIdentifier:(id)arg1;
- (void)logDidTapSaveToCameraRollButtonWithEntityURL:(id)arg1;
- (void)logDidTapScannableWithEntityURL:(id)arg1;
- (void)logDidDisplayScannableWithEntityURL:(id)arg1;
- (id)initWithLogCenter:(id)arg1;

@end
