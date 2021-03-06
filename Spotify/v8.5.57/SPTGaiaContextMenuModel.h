//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuViewDataSource-Protocol.h"
#import "SPTGaiaContextMenuActionDelegate-Protocol.h"

@class NSArray, NSString, SPTGaiaConnectDevice, SPTGaiaDeviceAppearanceMapping;
@protocol GLUEImageLoader, SPTGaiaContextMenuModelDelegate, SPTGaiaDevicePickerContextMenuFlagsProvider><SPTGaiaHomeDeviceFlagsProvider;

@interface SPTGaiaContextMenuModel : NSObject <SPTGaiaContextMenuActionDelegate, SPTContextMenuViewDataSource>
{
    id <SPTGaiaContextMenuModelDelegate> _delegate;
    SPTGaiaConnectDevice *_device;
    id <SPTGaiaDevicePickerContextMenuFlagsProvider><SPTGaiaHomeDeviceFlagsProvider> _flagsProvider;
    NSArray *_actions;
    NSArray *_filteredActions;
    SPTGaiaDeviceAppearanceMapping *_iconMapper;
    id <GLUEImageLoader> _imageLoader;
}

@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTGaiaDeviceAppearanceMapping *iconMapper; // @synthesize iconMapper=_iconMapper;
@property(copy, nonatomic) NSArray *filteredActions; // @synthesize filteredActions=_filteredActions;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) id <SPTGaiaDevicePickerContextMenuFlagsProvider><SPTGaiaHomeDeviceFlagsProvider> flagsProvider; // @synthesize flagsProvider=_flagsProvider;
@property(readonly, nonatomic) SPTGaiaConnectDevice *device; // @synthesize device=_device;
@property(nonatomic) __weak id <SPTGaiaContextMenuModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)enabledActionsInArray:(id)arg1;
- (void)action:(id)arg1 isPerformedWithEventVersion:(id)arg2 logData:(id)arg3;
- (void)action:(id)arg1 wantsToPresentViewController:(id)arg2;
- (id)imageLoaderForContextMenuView:(id)arg1;
- (id)contextMenuView:(id)arg1 actionForIndexPath:(id)arg2;
- (id)actionForIndexPath:(id)arg1;
- (unsigned long long)numberOfSectionsInContextMenuView:(id)arg1;
- (unsigned long long)contextMenuView:(id)arg1 numberOfActionsInSection:(unsigned long long)arg2;
- (unsigned long long)numberOfActionsInContextMenuView:(id)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfActionsInSection:(unsigned long long)arg1;
- (id)indexPathForAction:(id)arg1;
@property(readonly, nonatomic) _Bool contextMenuAvailable;
@property(readonly, nonatomic) NSArray *enabledActionIdentifiers;
@property(readonly, nonatomic) long long icon;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithDevice:(id)arg1 actions:(id)arg2 flagsProvider:(id)arg3 iconMapper:(id)arg4 imageLoader:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

