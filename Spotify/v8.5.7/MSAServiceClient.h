//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSCServiceCoreDelegate-Protocol.h"
#import "MSCServiceCoreDelegateClient-Protocol.h"

@class MSCFrameProperties, MSCServiceCoreClient, MSCVersion, MySpinVoiceControlManager, NSArray, NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol MSAFocusControlDelegate, MSAServiceClientConnectionDelegate, MSAServiceClientIVIEventsDelegate, MSAServiceClientInputEventDelegate, MSAServiceClientScreenContentsDelegate, MSAServiceClientTouchDelegate, MSAServiceClientVoiceControlDelegate;

@interface MSAServiceClient : NSObject <MSCServiceCoreDelegate, MSCServiceCoreDelegateClient>
{
    _Bool canSendFramebufferUpdate;
    NSMutableDictionary *audioRequestCache;
    NSRecursiveLock *disconnectLock;
    _Bool isDisconnected;
    unsigned char _voiceSupport;
    unsigned char _voiceSupportConstraint;
    id <MSAServiceClientTouchDelegate> _touchDelegate;
    id <MSAServiceClientInputEventDelegate> _inputEventDelegate;
    id <MSAServiceClientIVIEventsDelegate> _otherEventsDelegate;
    id <MSAServiceClientVoiceControlDelegate> _voiceControlDelegate;
    id <MSAFocusControlDelegate> _focusControlDelegate;
    id <MSAServiceClientConnectionDelegate> _connectionStatusDelegate;
    long long _clientState;
    MSCVersion *_appSdkVersion;
    id <MSAServiceClientScreenContentsDelegate> _screenCaptureDelegate;
    MySpinVoiceControlManager *_voiceControlManager;
    NSArray *_bufferedFrameRects;
    NSArray *_lastSendFrameRects;
    MSCServiceCoreClient *_scServiceCoreClient;
}

+ (id)stateToString:(long long)arg1;
@property(retain, nonatomic) MSCServiceCoreClient *scServiceCoreClient; // @synthesize scServiceCoreClient=_scServiceCoreClient;
@property(retain) NSArray *lastSendFrameRects; // @synthesize lastSendFrameRects=_lastSendFrameRects;
@property(retain) NSArray *bufferedFrameRects; // @synthesize bufferedFrameRects=_bufferedFrameRects;
@property(readonly) unsigned char voiceSupportConstraint; // @synthesize voiceSupportConstraint=_voiceSupportConstraint;
@property(readonly) unsigned char voiceSupport; // @synthesize voiceSupport=_voiceSupport;
@property(retain, nonatomic) MySpinVoiceControlManager *voiceControlManager; // @synthesize voiceControlManager=_voiceControlManager;
@property(nonatomic) __weak id <MSAServiceClientScreenContentsDelegate> screenCaptureDelegate; // @synthesize screenCaptureDelegate=_screenCaptureDelegate;
@property(retain, nonatomic) MSCVersion *appSdkVersion; // @synthesize appSdkVersion=_appSdkVersion;
@property(readonly, nonatomic) long long clientState; // @synthesize clientState=_clientState;
@property(nonatomic) __weak id <MSAServiceClientConnectionDelegate> connectionStatusDelegate; // @synthesize connectionStatusDelegate=_connectionStatusDelegate;
@property(nonatomic) __weak id <MSAFocusControlDelegate> focusControlDelegate; // @synthesize focusControlDelegate=_focusControlDelegate;
@property(nonatomic) __weak id <MSAServiceClientVoiceControlDelegate> voiceControlDelegate; // @synthesize voiceControlDelegate=_voiceControlDelegate;
@property(nonatomic) __weak id <MSAServiceClientIVIEventsDelegate> otherEventsDelegate; // @synthesize otherEventsDelegate=_otherEventsDelegate;
@property(nonatomic) __weak id <MSAServiceClientInputEventDelegate> inputEventDelegate; // @synthesize inputEventDelegate=_inputEventDelegate;
@property(nonatomic) __weak id <MSAServiceClientTouchDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isTwoWheeler;
@property(readonly, nonatomic) _Bool isOtherVehicle;
@property(readonly, nonatomic) _Bool requiresFocusControl;
- (void)closeVoiceControlWithNotification:(_Bool)arg1;
- (_Bool)resignVoiceControl;
- (void)requestVoiceControl:(long long)arg1;
- (void)notifyStartRecording:(long long)arg1;
- (void)handleVoiceSessionStatus:(unsigned char)arg1 withConstraint:(unsigned char)arg2;
- (void)handleVoiceSupportInfo:(unsigned char)arg1 withConstraint:(unsigned char)arg2;
@property(readonly) _Bool hasVoiceControlCapability;
@property(readonly, nonatomic) _Bool hasAudioManagmentCapability;
- (void)releaseAudioType:(unsigned char)arg1;
- (unsigned int)requestAudioType:(unsigned char)arg1 duration:(unsigned short)arg2;
- (void)logText:(id)arg1;
- (void)handleReceivedVehicleDataFilter:(id)arg1;
- (void)handleReceivedVehicleDataJSON:(id)arg1 forKey:(unsigned int)arg2;
- (_Bool)initiateNavigateTo:(id)arg1;
@property(readonly) NSString *frameOverlayText;
@property(readonly) NSString *navigateToTarget;
@property(readonly) _Bool hasNavigateAppsAvailable;
@property(readonly) _Bool embeddedNaviAvailable;
- (void)handlePhoneCallResponse:(unsigned char)arg1;
- (_Bool)initiatePhoneCall:(id)arg1 withDisplayName:(id)arg2;
@property(readonly, nonatomic) _Bool hasPhoneCallCapability;
@property(readonly, nonatomic) NSDictionary *iviVersions;
@property(readonly, nonatomic) NSString *iviProtocolVersion;
- (void)handleCustomDataEvent:(unsigned char)arg1 withType:(unsigned short)arg2 withPayload:(id)arg3;
- (void)handleAudioTypeResult:(unsigned char)arg1 withStatus:(unsigned char)arg2 forRequest:(unsigned int)arg3;
- (void)handleTouches:(id)arg1;
- (void)handleSoftkey:(unsigned char)arg1 withEventType:(unsigned char)arg2;
- (_Bool)handleSetFrameSizeWithWidth:(unsigned short)arg1 andHeight:(unsigned short)arg2 andPhysicalWidth:(unsigned short)arg3 andPhysicalHeight:(unsigned short)arg4;
- (_Bool)handleFrameProperties:(id)arg1;
- (void)handleFramebufferUpdateAck:(_Bool)arg1;
- (void)receivedServerHandshakeAcknowledge:(_Bool)arg1;
- (void)announceAppTransition;
- (void)sendAppState:(long long)arg1;
- (void)sendFrameBufferUpdate:(id)arg1;
@property(readonly, nonatomic) struct CGSize screenSizeMM;
@property(readonly, nonatomic) struct CGSize screenSizePixel;
@property(readonly, nonatomic) MSCFrameProperties *frameProperties;
- (void)serviceCore:(id)arg1 hasChangedState:(unsigned char)arg2 fromState:(unsigned char)arg3 withReason:(unsigned char)arg4;
- (long long)read:(char *)arg1 withMaxLen:(id)arg2;
- (long long)write:(const char *)arg1 withMaxLen:(id)arg2;
- (void)disconnect;
- (void)connect;
- (_Bool)changeStateTo:(long long)arg1;
- (_Bool)stop;
- (_Bool)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

