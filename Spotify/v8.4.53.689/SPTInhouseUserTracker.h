//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTThirdPartyAppTracker.h"
#import "SPTThirdPartyUserTracker.h"

@class NSNumber, NSString;

@interface SPTInhouseUserTracker : NSObject <SPTThirdPartyUserTracker, SPTThirdPartyAppTracker>
{
    _Bool _enableUserTracker;
    NSString *_trackerUserID;
    id <SPTLogCenter> _logCenter;
    NSString *_deviceID;
    NSNumber *_lastSecondsFromUTC;
}

@property(retain, nonatomic) NSNumber *lastSecondsFromUTC; // @synthesize lastSecondsFromUTC=_lastSecondsFromUTC;
@property(readonly, copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) NSString *trackerUserID; // @synthesize trackerUserID=_trackerUserID;
@property(readonly, nonatomic, getter=shouldEnableUserTracker) _Bool enableUserTracker; // @synthesize enableUserTracker=_enableUserTracker;
- (void).cxx_destruct;
- (void)setOfflineMode:(_Bool)arg1;
- (void)trackAppWillOpenURL:(id)arg1;
- (void)trackAppDidLaunch;
- (void)userDidLoginWithProductState:(id)arg1;
- (id)initWithLogCenter:(id)arg1 deviceID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

