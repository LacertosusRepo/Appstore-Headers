//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTVoiceSessionViewModel;

@protocol SPTVoiceSessionViewModelDelegate <NSObject>
- (void)sessionViewModelWantsToClose:(SPTVoiceSessionViewModel *)arg1 completion:(void (^)(void))arg2;
- (void)sessionViewModelDidEncounterError:(SPTVoiceSessionViewModel *)arg1;
- (void)sessionViewModelDidHandleResults:(SPTVoiceSessionViewModel *)arg1;
- (void)sessionViewModelDidStartListening:(SPTVoiceSessionViewModel *)arg1;
- (void)sessionViewModelWillStartListening:(SPTVoiceSessionViewModel *)arg1;
@end

