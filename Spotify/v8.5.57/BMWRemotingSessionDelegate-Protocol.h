//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AVButtonEvent, IDApplicationManagementServiceEvent, IDAudioConnectionType, IDAudioPlayerState, IDMapEvent, IDSpeechDialogServiceStatus, IDVRSEvent, LockEvent, NSArray, NSData, NSDictionary, NSNumber, NSObject, NSString, PIAEvent, PlaybackState, VDSDiagnosticsType, VoiceSessionStateType;

@protocol BMWRemotingSessionDelegate
- (void)sds_onDialogEventHandle:(NSNumber *)arg1 result:(IDSpeechDialogServiceStatus *)arg2 parameters:(NSDictionary *)arg3;
- (void)vrs_onEventHandle:(NSNumber *)arg1 event:(IDVRSEvent *)arg2 seq:(NSNumber *)arg3 data:(NSData *)arg4;
- (void)rcs_headphoneEventHandle:(NSNumber *)arg1 headphoneEnabled:(NSNumber *)arg2;
- (void)rcs_playbackEventHandle:(NSNumber *)arg1 state:(PlaybackState *)arg2;
- (void)rcs_entPlaylistEventHandle:(NSNumber *)arg1 index:(NSNumber *)arg2 count:(NSNumber *)arg3 titles:(NSArray *)arg4;
- (void)rcs_entSourceEventHandle:(NSNumber *)arg1 entId:(NSNumber *)arg2;
- (void)rcs_entListEventHandle:(NSNumber *)arg1 entId:(NSNumber *)arg2 entName:(NSString *)arg3 playable:(NSNumber *)arg4 upnp:(NSNumber *)arg5;
- (void)rcs_muteEventHandle:(NSNumber *)arg1 mute:(NSNumber *)arg2;
- (void)rcs_controlHandle:(NSNumber *)arg1 accelOn:(NSNumber *)arg2 reset:(NSNumber *)arg3;
- (void)rcs_lockEventHandle:(NSNumber *)arg1 event:(LockEvent *)arg2;
- (void)vds_diagnosticHandlerHandle:(NSNumber *)arg1 type:(VDSDiagnosticsType *)arg2 data:(NSData *)arg3;
- (void)map_abortImportHandle:(NSNumber *)arg1 transferId:(NSNumber *)arg2 reason:(NSNumber *)arg3;
- (void)map_onEventHandle:(NSNumber *)arg1 transferId:(NSNumber *)arg2 event:(IDMapEvent *)arg3;
- (void)pia_onEventHandle:(NSNumber *)arg1 event:(PIAEvent *)arg2 data:(NSData *)arg3;
- (void)diag_perf_onewayData:(NSObject *)arg1;
- (void)voice_sessionStateChangedHandle:(NSNumber *)arg1 state:(VoiceSessionStateType *)arg2;
- (void)av_multimediaButtonEventHandle:(NSNumber *)arg1 event:(AVButtonEvent *)arg2;
- (void)av_connectionDeactivatedHandle:(NSNumber *)arg1 connectionType:(IDAudioConnectionType *)arg2;
- (void)av_connectionGrantedHandle:(NSNumber *)arg1 connectionType:(IDAudioConnectionType *)arg2;
- (void)av_requestPlayerStateHandle:(NSNumber *)arg1 connectionType:(IDAudioConnectionType *)arg2 playerState:(IDAudioPlayerState *)arg3;
- (void)av_connectionDeniedHandle:(NSNumber *)arg1 connectionType:(IDAudioConnectionType *)arg2;
- (void)cds_onPropertyChangedBinaryEventHandle:(NSNumber *)arg1 ident:(NSString *)arg2 propertyName:(NSString *)arg3 propertyValue:(NSString *)arg4 propertyBinaryValue:(NSData *)arg5;
- (void)cds_onPropertyChangedEventHandle:(NSNumber *)arg1 ident:(NSString *)arg2 propertyName:(NSString *)arg3 propertyValue:(NSString *)arg4;
- (void)am_onAppEventHandle:(NSNumber *)arg1 ident:(NSString *)arg2 appId:(NSString *)arg3 event:(IDApplicationManagementServiceEvent *)arg4;
- (void)rhmi_onHmiEventHandle:(NSNumber *)arg1 ident:(NSString *)arg2 componentId:(NSNumber *)arg3 eventId:(NSNumber *)arg4 args:(NSDictionary *)arg5;
- (void)rhmi_onActionEventHandle:(NSNumber *)arg1 ident:(NSString *)arg2 actionId:(NSNumber *)arg3 args:(NSDictionary *)arg4;
- (void)ver_getVersion;
@end

