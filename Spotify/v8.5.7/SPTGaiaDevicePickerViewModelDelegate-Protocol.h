//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTGaiaContextMenuModel, SPTGaiaDevicePickerViewModel, SPTGaiaEducationDetailModel;

@protocol SPTGaiaDevicePickerViewModelDelegate <NSObject>
- (void)gaiaDevicePickerViewModelView:(SPTGaiaDevicePickerViewModel *)arg1 shouldPresentContextMenuModel:(SPTGaiaContextMenuModel *)arg2;
- (void)gaiaDevicePickerViewModelView:(SPTGaiaDevicePickerViewModel *)arg1 shouldPresentEducationModel:(SPTGaiaEducationDetailModel *)arg2;
- (void)gaiaDevicePickerViewModelRequiresDismissalOfView:(SPTGaiaDevicePickerViewModel *)arg1;
- (void)gaiaDevicePickerViewModelActiveDeviceDidUpdate:(SPTGaiaDevicePickerViewModel *)arg1;
- (void)gaiaDevicePickerViewModelDidUpdateData:(SPTGaiaDevicePickerViewModel *)arg1;
@end

