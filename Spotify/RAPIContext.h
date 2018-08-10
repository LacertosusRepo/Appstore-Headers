//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDApplication, NSDate, NSString, RAPICarDescription, RAPIConfiguration, RAPIItemLocation, RAPIPreviewManager, RAPIResources, RAPIScreenTable;

@interface RAPIContext : NSObject
{
    _Bool _connected;
    _Bool _entertainmentActive;
    id <RAPIEntertainmentAppLinkDelegate> _rapiDelegate;
    IDApplication *_idApplication;
    id <IDHmiProvider> _hmiProvider;
    RAPIConfiguration *_configuration;
    RAPIItemLocation *_lastClickedItem;
    RAPIScreenTable *_screenTable;
    RAPIPreviewManager *_previewManager;
    long long _currentlyFocusedScreenIndex;
    RAPICarDescription *_rapiCarDescription;
    NSString *_appName;
    RAPIResources *_rapiResources;
    NSString *_currentVehicleLanguage;
    NSDate *_vehicleTime;
    NSDate *_lastVehicleTimeUpdateTime;
    SEL _onItemClickedHandler;
}

@property SEL onItemClickedHandler; // @synthesize onItemClickedHandler=_onItemClickedHandler;
@property(retain) NSDate *lastVehicleTimeUpdateTime; // @synthesize lastVehicleTimeUpdateTime=_lastVehicleTimeUpdateTime;
@property(retain) NSDate *vehicleTime; // @synthesize vehicleTime=_vehicleTime;
@property _Bool entertainmentActive; // @synthesize entertainmentActive=_entertainmentActive;
@property(retain) NSString *currentVehicleLanguage; // @synthesize currentVehicleLanguage=_currentVehicleLanguage;
@property(retain) RAPIResources *rapiResources; // @synthesize rapiResources=_rapiResources;
@property(retain) NSString *appName; // @synthesize appName=_appName;
@property(retain) RAPICarDescription *rapiCarDescription; // @synthesize rapiCarDescription=_rapiCarDescription;
@property long long currentlyFocusedScreenIndex; // @synthesize currentlyFocusedScreenIndex=_currentlyFocusedScreenIndex;
@property(retain) RAPIPreviewManager *previewManager; // @synthesize previewManager=_previewManager;
@property(retain) RAPIScreenTable *screenTable; // @synthesize screenTable=_screenTable;
@property(retain) RAPIItemLocation *lastClickedItem; // @synthesize lastClickedItem=_lastClickedItem;
@property(retain) RAPIConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) id <IDHmiProvider> hmiProvider; // @synthesize hmiProvider=_hmiProvider;
@property _Bool connected; // @synthesize connected=_connected;
@property(retain) IDApplication *idApplication; // @synthesize idApplication=_idApplication;
@property(retain) id <RAPIEntertainmentAppLinkDelegate> rapiDelegate; // @synthesize rapiDelegate=_rapiDelegate;
- (void).cxx_destruct;
- (_Bool)previewsShown;
- (_Bool)isID5Mode;
- (_Bool)HACK_isBmwCic;
- (void)emitItemClickedNotificationWithItemIndex:(long long)arg1 withGroupIndex:(long long)arg2 withScreenIndex:(long long)arg3;
- (id)init;

@end

