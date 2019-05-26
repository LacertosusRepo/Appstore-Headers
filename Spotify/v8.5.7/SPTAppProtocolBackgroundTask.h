//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIApplication;
@protocol SPTAppProtocolBackgroundTaskDelegate;

@interface SPTAppProtocolBackgroundTask : NSObject
{
    id <SPTAppProtocolBackgroundTaskDelegate> _delegate;
    UIApplication *_application;
    unsigned long long _backgroundTaskIdentifier;
}

@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(readonly, nonatomic) __weak UIApplication *application; // @synthesize application=_application;
@property(nonatomic) __weak id <SPTAppProtocolBackgroundTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)stopAfterDelay:(double)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

@end

