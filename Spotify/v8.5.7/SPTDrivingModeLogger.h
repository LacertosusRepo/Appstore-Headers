//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTDrivingModeLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logInteractionWithType:(id)arg1 sectionId:(id)arg2 intent:(id)arg3;
- (void)logOpenPivotButtonInteraction;
- (void)logCarViewEnabledInSettingsChanged:(_Bool)arg1;
- (void)logDisableDrivingModeButtonInteraction;
- (void)logDrivingModeContextMenuOpenButtonInteraction;
- (void)logDrivingModeContextMenuCancelButtonInteraction;
- (id)initWithLogCenter:(id)arg1;

@end
