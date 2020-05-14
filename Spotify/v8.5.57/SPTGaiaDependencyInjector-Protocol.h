//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTGaiaDevicePickerExternalPresenter, SPTGaiaDevicePickerURIHandler, SPTGaiaDevicePickerViewFactory;

@protocol SPTGaiaDependencyInjector <NSObject>
- (void)injectDevicePickerPresenter:(id <SPTGaiaDevicePickerExternalPresenter>)arg1;
- (void)injectDevicePickerURIHandler:(id <SPTGaiaDevicePickerURIHandler>)arg1;
- (void)injectVolumeSliderViewWithFactory:(id <SPTGaiaDevicePickerViewFactory>)arg1;
@end

