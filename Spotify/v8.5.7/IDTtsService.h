//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDCdsService, IDHmiService, IDTtsElement, IDVehicleInfo, NSString;
@protocol IDTtsServiceDataSource, IDTtsServiceDelegate, OS_dispatch_queue;

@interface IDTtsService : NSObject
{
    _Bool _ttsAvailable;
    _Bool _didBindToLanguageUpdates;
    _Bool _didBindToTTSUpdates;
    _Bool _waitingForPlay;
    unsigned long long _readoutState;
    id <IDTtsServiceDataSource> _dataSource;
    id <IDTtsServiceDelegate> _delegate;
    long long _hmiLanguage;
    unsigned long long _hmiTtsState;
    IDCdsService *_cdsService;
    IDHmiService *_hmiService;
    IDVehicleInfo *_vehicleInfo;
    IDTtsElement *_currentTtsElement;
    NSObject<OS_dispatch_queue> *_ttsCommandQueue;
    NSString *_ttsServiceIdentifier;
    double _undefinedStateTimeout;
}

@property _Bool waitingForPlay; // @synthesize waitingForPlay=_waitingForPlay;
@property double undefinedStateTimeout; // @synthesize undefinedStateTimeout=_undefinedStateTimeout;
@property(readonly, copy) NSString *ttsServiceIdentifier; // @synthesize ttsServiceIdentifier=_ttsServiceIdentifier;
@property(readonly) NSObject<OS_dispatch_queue> *ttsCommandQueue; // @synthesize ttsCommandQueue=_ttsCommandQueue;
@property(retain) IDTtsElement *currentTtsElement; // @synthesize currentTtsElement=_currentTtsElement;
@property(readonly) IDVehicleInfo *vehicleInfo; // @synthesize vehicleInfo=_vehicleInfo;
@property(readonly) __weak IDHmiService *hmiService; // @synthesize hmiService=_hmiService;
@property(readonly) __weak IDCdsService *cdsService; // @synthesize cdsService=_cdsService;
@property unsigned long long hmiTtsState; // @synthesize hmiTtsState=_hmiTtsState;
@property _Bool didBindToTTSUpdates; // @synthesize didBindToTTSUpdates=_didBindToTTSUpdates;
@property _Bool didBindToLanguageUpdates; // @synthesize didBindToLanguageUpdates=_didBindToLanguageUpdates;
@property long long hmiLanguage; // @synthesize hmiLanguage=_hmiLanguage;
@property __weak id <IDTtsServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <IDTtsServiceDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isTtsAvailable) _Bool ttsAvailable; // @synthesize ttsAvailable=_ttsAvailable;
@property(nonatomic) unsigned long long readoutState; // @synthesize readoutState=_readoutState;
- (void).cxx_destruct;
- (id)stringWithHmiTtsState:(unsigned long long)arg1;
- (id)stringWithTtsReadOutState:(unsigned long long)arg1;
- (unsigned long long)readoutStateWithHmiTtsState:(unsigned long long)arg1;
- (void)updateTTSAvailability;
- (id)debugDescription;
- (id)description;
- (void)sendTtsInstruction:(id)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (_Bool)validateString:(id)arg1 withError:(id *)arg2;
- (void)readOut:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onUpdateLanguage:(id)arg1;
- (void)onUpdateTtsState:(id)arg1;
- (id)initWithHmiService:(id)arg1 cdsService:(id)arg2 vehicleInfo:(id)arg3;

@end

