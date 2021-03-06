//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMConnectionManagerDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface IMDownloadManagerRegistry : NSObject <IMConnectionManagerDelegate>
{
    NSMutableArray *managers;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)imConnectionManager:(id)arg1 removedConnections:(id)arg2;
- (void)imConnectionManager:(id)arg1 addedConnections:(id)arg2;
- (void)imConnectionManager:(id)arg1 haveConnections:(id)arg2;
- (id)init;
- (id)allManagers;
- (id)managerForSessionId:(id)arg1;
- (id)managerForConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

