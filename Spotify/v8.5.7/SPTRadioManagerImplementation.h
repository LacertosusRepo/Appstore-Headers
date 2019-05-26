//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRadioManager-Protocol.h"
#import "SPTRadioPlaybackObserver-Protocol.h"
#import "SPTRadioStationsObserver-Protocol.h"

@class NSHashTable, NSString, SPTRadioPlaybackService, SPTRadioStationsService;
@protocol SPTLocalSettings, SPTProductState;

@interface SPTRadioManagerImplementation : NSObject <SPTRadioPlaybackObserver, SPTRadioStationsObserver, SPTRadioManager>
{
    id <SPTLocalSettings> _localSettings;
    SPTRadioPlaybackService *_playbackService;
    SPTRadioStationsService *_stationsService;
    NSHashTable *_observers;
    id <SPTProductState> _productState;
}

@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak SPTRadioStationsService *stationsService; // @synthesize stationsService=_stationsService;
@property(nonatomic) __weak SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)radioPlaybackService:(id)arg1 error:(id)arg2;
- (void)radioPlaybackService:(id)arg1 playbackStateChanged:(unsigned long long)arg2;
- (void)radioStationService:(id)arg1 userSavedStationsChanged:(id)arg2;
- (_Bool)isCarPlaySession:(_Bool)arg1;
- (void)removeRadioObserver:(id)arg1;
- (void)addRadioObserver:(id)arg1;
- (long long)feedbackForTrackURL:(id)arg1;
- (void)radioThumbTrackURL:(id)arg1 isUp:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startRadioStationWithSeedURL:(id)arg1 startedFromElement:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)startRadioStationWithSeedURL:(id)arg1 startedFromElement:(id)arg2;
- (void)fetchUserSavedStations:(CDUnknownBlockType)arg1;
- (id)playbackDescriptionForURL:(id)arg1;
- (void)configureWithPlaybackService:(id)arg1 stationsService:(id)arg2;
- (id)initWithLocalSettings:(id)arg1 productState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

