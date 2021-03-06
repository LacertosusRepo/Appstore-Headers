//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTKaraokeManagerObserver-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSString;
@protocol SPTKaraokeFooterModelDelegate, SPTKaraokeManager, SPTLocalSettings, SPTLogCenter, SPTOfflineModeState, SPTTooltipPresentationManager;

@interface SPTKaraokeFooterModel : NSObject <SPTKaraokeManagerObserver, SPTOfflineModeStateObserver>
{
    id <SPTKaraokeFooterModelDelegate> _delegate;
    long long _mode;
    id <SPTKaraokeManager> _manager;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTLocalSettings> _localSettings;
    id <SPTTooltipPresentationManager> _tooltipPresentationManager;
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTTooltipPresentationManager> tooltipPresentationManager; // @synthesize tooltipPresentationManager=_tooltipPresentationManager;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTKaraokeManager> manager; // @synthesize manager=_manager;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <SPTKaraokeFooterModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)dealloc;
- (void)karaokeManagerDidChangeKaraoke:(id)arg1;
@property(readonly, nonatomic, getter=isOffline) _Bool offline;
- (void)presentTooltipWithAnchorView:(id)arg1;
- (void)switchKaraokeMode;
- (id)initWithManager:(id)arg1 offlineModeState:(id)arg2 localSettings:(id)arg3 tooltipPresentationManager:(id)arg4 logCenter:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

