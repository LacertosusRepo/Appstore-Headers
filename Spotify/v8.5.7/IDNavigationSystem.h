//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDHmiServiceLifecycleProtocol-Protocol.h"

@class IDEvent, IDModel, IDVehicleInfo, NSString;

@interface IDNavigationSystem : NSObject <IDHmiServiceLifecycleProtocol>
{
    IDModel *_addressModel;
    IDEvent *_triggerEvent;
    IDVehicleInfo *_vehicleInfo;
}

+ (id)new;
@property(retain, nonatomic) IDVehicleInfo *vehicleInfo; // @synthesize vehicleInfo=_vehicleInfo;
@property(readonly, nonatomic) IDEvent *triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(readonly, nonatomic) IDModel *addressModel; // @synthesize addressModel=_addressModel;
- (void).cxx_destruct;
- (_Bool)useAsianCoordinateRepresentation;
- (id)navigationSystemAddressToVariantData:(id)arg1;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)startGuidanceToAddress:(id)arg1;
- (id)init;
- (id)initWithAddressModel:(id)arg1 triggerEventId:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

