//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRadioManager-Protocol.h"
#import "SPTRadioPlaybackObserver-Protocol.h"
#import "SPTRadioStationsObserver-Protocol.h"

@class NSString, SPTRadioPlaybackService, SPTRadioStationsService;
@protocol SPTLocalSettings, SPTProductState, SPTRadioRemoteConfigService;

@interface SPTRadioManagerImplementation : NSObject <SPTRadioPlaybackObserver, SPTRadioStationsObserver, SPTRadioManager>
{
    id <SPTLocalSettings> _localSettings;
    SPTRadioPlaybackService *_playbackService;
    SPTRadioStationsService *_stationsService;
    id <SPTRadioRemoteConfigService> _radioRemoteConfigService;
    id <SPTProductState> _productState;
}

@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak id <SPTRadioRemoteConfigService> radioRemoteConfigService; // @synthesize radioRemoteConfigService=_radioRemoteConfigService;
@property(nonatomic) __weak SPTRadioStationsService *stationsService; // @synthesize stationsService=_stationsService;
@property(nonatomic) __weak SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (_Bool)isCarPlaySession:(_Bool)arg1;
- (void)startRadioStationWithSeedURL:(id)arg1 startedFromElement:(id)arg2 referrerIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)startRadioStationWithSeedURL:(id)arg1 startedFromElement:(id)arg2 referrerIdentifier:(id)arg3;
- (id)playbackDescriptionForURL:(id)arg1;
- (void)configureWithPlaybackService:(id)arg1 stationsService:(id)arg2;
- (id)initWithLocalSettings:(id)arg1 radioRemoteConfigService:(id)arg2 productState:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

