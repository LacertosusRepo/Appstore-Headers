//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKUIMultistateButton.h"

@interface GCKUIButton : GCKUIMultistateButton
{
    unsigned long long _applicationState;
}

@property(nonatomic) unsigned long long applicationState; // @synthesize applicationState=_applicationState;
- (void)convertRepeatStates;
- (void)convertMuteStates;
- (void)convertPlayPauseStates;

@end

