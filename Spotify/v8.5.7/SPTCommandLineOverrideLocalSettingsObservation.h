//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, SPTLocalSettingsObserver;

@interface SPTCommandLineOverrideLocalSettingsObservation : NSObject
{
    id <SPTLocalSettingsObserver> _observer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <SPTLocalSettingsObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;

@end

