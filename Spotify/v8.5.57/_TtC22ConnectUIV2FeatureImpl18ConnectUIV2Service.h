//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC22ConnectUIV2FeatureImpl18ConnectUIV2Service : NSObject
{
    MISSING_TYPE *containerService;
    MISSING_TYPE *gaiaService;
    MISSING_TYPE *remoteConfigurationService;
    MISSING_TYPE *uiPresentationService;
    MISSING_TYPE *glueService;
    MISSING_TYPE *abbaService;
    MISSING_TYPE *volumeService;
    MISSING_TYPE *uriService;
    MISSING_TYPE *playerService;
    MISSING_TYPE *coreService;
    MISSING_TYPE *ubiService;
    MISSING_TYPE *$__lazy_storage_$_gaiaDevicePresenterProxy;
    MISSING_TYPE *$__lazy_storage_$_devicePickerPresenter;
    MISSING_TYPE *$__lazy_storage_$_player;
    MISSING_TYPE *$__lazy_storage_$_devicePickerContextMenuControllerFactory;
    MISSING_TYPE *$__lazy_storage_$_devicePickerControllerFactory;
    MISSING_TYPE *$__lazy_storage_$_devicePicerContextMenuIconManager;
    MISSING_TYPE *$__lazy_storage_$_devicePickerTheme;
    MISSING_TYPE *$__lazy_storage_$_devicePickerLogger;
    MISSING_TYPE *$__lazy_storage_$_devicePickerLoggingInterceptor;
    MISSING_TYPE *$__lazy_storage_$_connectButtonTheme;
    MISSING_TYPE *$__lazy_storage_$_connectButtonFactory;
    MISSING_TYPE *$__lazy_storage_$_connectImageFactory;
    MISSING_TYPE *$__lazy_storage_$_connectNPBIntegration;
    MISSING_TYPE *$__lazy_storage_$_uriDispatcher;
    MISSING_TYPE *$__lazy_storage_$_devicePickerPresenterRouter;
    MISSING_TYPE *$__lazy_storage_$_nudgeManager;
    MISSING_TYPE *$__lazy_storage_$_connectNudgeController;
    MISSING_TYPE *$__lazy_storage_$_nudgePresenter;
    MISSING_TYPE *$__lazy_storage_$_connectButtonLogger;
    MISSING_TYPE *$__lazy_storage_$_flagsManager;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)provideNowPlayingBarIntegration;
- (id)provideButtonFactory;
- (id)provideButtonTestManager;
- (id)provideDevicePresenter;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

@end

