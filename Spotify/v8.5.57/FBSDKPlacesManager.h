//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, FBSDKPlacesBluetoothScanner, NSMutableArray, NSString;

@interface FBSDKPlacesManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    NSMutableArray *_locationCompletionBlocks;
    FBSDKPlacesBluetoothScanner *_bluetoothScanner;
}

@property(retain, nonatomic) FBSDKPlacesBluetoothScanner *bluetoothScanner; // @synthesize bluetoothScanner=_bluetoothScanner;
@property(retain) NSMutableArray *locationCompletionBlocks; // @synthesize locationCompletionBlocks=_locationCompletionBlocks;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)_callCompletionBlocksWithLocation:(id)arg1 error:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)_tokenString;
- (id)_jsonStringForObject:(id)arg1;
- (id)_confidenceWebKeyForConfidence:(long long)arg1;
- (id)_bluetoothParametersForBeacons:(id)arg1;
- (id)_networkInfo;
- (id)_currentPlaceGraphRequestForLocation:(id)arg1 bluetoothBeacons:(id)arg2 minimumConfidenceLevel:(long long)arg3 fields:(id)arg4;
- (id)placeInfoRequestForPlaceID:(id)arg1 fields:(id)arg2;
- (id)currentPlaceFeedbackRequestForPlaceID:(id)arg1 tracking:(id)arg2 wasHere:(_Bool)arg3;
- (void)generateCurrentPlaceRequestForCurrentLocation:(id)arg1 withMinimumConfidenceLevel:(long long)arg2 fields:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)generateCurrentPlaceRequestWithMinimumConfidenceLevel:(long long)arg1 fields:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)placeSearchRequestForLocation:(id)arg1 searchTerm:(id)arg2 categories:(id)arg3 fields:(id)arg4 distance:(double)arg5 cursor:(id)arg6;
- (void)generatePlaceSearchRequestForSearchTerm:(id)arg1 categories:(id)arg2 fields:(id)arg3 distance:(double)arg4 cursor:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

