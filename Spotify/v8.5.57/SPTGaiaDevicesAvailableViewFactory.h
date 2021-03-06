//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaDevicesAvailableViewProvider-Protocol.h"

@class NSString, SPTGaiaDevicePickerAppearanceManager, SPTGaiaSocialListeningIntegrationManager, SPTGaiaUbiLogger, SPTTheme;
@protocol SPTGaiaConnectAPI;

@interface SPTGaiaDevicesAvailableViewFactory : NSObject <SPTGaiaDevicesAvailableViewProvider>
{
    id <SPTGaiaConnectAPI> _connectManager;
    SPTTheme *_theme;
    SPTGaiaDevicePickerAppearanceManager *_appearanceManager;
    SPTGaiaSocialListeningIntegrationManager *_socialListeningManager;
    SPTGaiaUbiLogger *_ubiLogger;
}

@property(readonly, nonatomic) SPTGaiaUbiLogger *ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) SPTGaiaSocialListeningIntegrationManager *socialListeningManager; // @synthesize socialListeningManager=_socialListeningManager;
@property(readonly, nonatomic) SPTGaiaDevicePickerAppearanceManager *appearanceManager; // @synthesize appearanceManager=_appearanceManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
- (void).cxx_destruct;
- (id)createGaiaDevicesAvailableViewWithRules:(long long)arg1;
- (id)initWithConnectManager:(id)arg1 theme:(id)arg2 appearanceManager:(id)arg3 socialListeningManager:(id)arg4 ubiLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

