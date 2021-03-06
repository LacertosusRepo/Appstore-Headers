//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTHubInteractionLogger, SPTLocalSettings, SPTPlayer, SPTUBIHubsUtilities;

@interface SPTHomeCommandHandlerFactory : NSObject
{
    NSString *_username;
    id <SPTPlayer> _player;
    id <SPTLocalSettings> _localSettings;
    id <SPTHubInteractionLogger> _hubInteractionLogger;
    id <SPTUBIHubsUtilities> _ubiHubsUtilities;
}

@property(readonly, nonatomic) id <SPTUBIHubsUtilities> ubiHubsUtilities; // @synthesize ubiHubsUtilities=_ubiHubsUtilities;
@property(readonly, nonatomic) id <SPTHubInteractionLogger> hubInteractionLogger; // @synthesize hubInteractionLogger=_hubInteractionLogger;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)provideListeningHistoryCommandHandler:(id)arg1;
- (id)providePlayThenPauseCommandHandler:(id)arg1;
- (id)providePlayAndNavigateCommandHandler:(id)arg1;
- (id)providePlayThenNavigateCommandHandler:(id)arg1;
- (id)provideTasteOnboardingSkipCommandHandlerWithOverrides:(id)arg1;
- (id)provideTooltipDismissalCommandHandlerWithViewModelProvider:(id)arg1;
- (id)provideReloadCommandHandlerWithViewModelProvider:(id)arg1;
- (id)initWithUsername:(id)arg1 player:(id)arg2 localSettings:(id)arg3 hubInteractionLogger:(id)arg4 ubiHubsUtilities:(id)arg5;

@end

