//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKUIStyleAttributes.h"

@class GCKUIStyleAttributesConnectionController, GCKUIStyleAttributesDeviceChooser, GCKUIStyleAttributesGuestModePairingDialog;

@interface GCKUIStyleAttributesDeviceControl : GCKUIStyleAttributes
{
    GCKUIStyleAttributesDeviceChooser *_deviceChooser;
    GCKUIStyleAttributesConnectionController *_connectionController;
    GCKUIStyleAttributesGuestModePairingDialog *_guestModePairingDialog;
}

@property(readonly, nonatomic) GCKUIStyleAttributesGuestModePairingDialog *guestModePairingDialog; // @synthesize guestModePairingDialog=_guestModePairingDialog;
@property(readonly, nonatomic) GCKUIStyleAttributesConnectionController *connectionController; // @synthesize connectionController=_connectionController;
@property(readonly, nonatomic) GCKUIStyleAttributesDeviceChooser *deviceChooser; // @synthesize deviceChooser=_deviceChooser;
- (void).cxx_destruct;

@end

