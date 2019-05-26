//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDReachability : NSObject
{
    _Bool localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
    NSString *_hostName;
}

+ (id)reachabilityWithHostName:(id)arg1;
@property(readonly, copy) NSString *hostName; // @synthesize hostName=_hostName;
- (void).cxx_destruct;
- (id)networkReachabilityFlagsStringRepresentation:(unsigned int)arg1;
- (long long)currentReachabilityStatus;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (id)initWithHostName:(id)arg1;

@end

