//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTKaraokeUserInterfaceFactory-Protocol.h"

@class NSString;
@protocol GLUETheme, SPTKaraokeManager, SPTLocalSettings, SPTLogCenter, SPTOfflineModeState, SPTTooltipPresentationManager;

@interface SPTKaraokeUserInterfaceFactoryImplementation : NSObject <SPTKaraokeUserInterfaceFactory>
{
    id <GLUETheme> _glueTheme;
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
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
- (void).cxx_destruct;
- (double)karaokeFooterHeight;
- (id)createKaraokeButton;
- (id)initWithGlueTheme:(id)arg1 manager:(id)arg2 offlineModeState:(id)arg3 localSettings:(id)arg4 tooltipPresentationManager:(id)arg5 logCenter:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

