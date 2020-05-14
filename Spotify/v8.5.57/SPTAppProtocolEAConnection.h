//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTAppProtocolStreamConnection.h"

#import "EAAccessoryDelegate-Protocol.h"

@class EASession, NSString;

@interface SPTAppProtocolEAConnection : SPTAppProtocolStreamConnection <EAAccessoryDelegate>
{
    EASession *_session;
}

@property(readonly, nonatomic) EASession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)accessoryDidDisconnect:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
