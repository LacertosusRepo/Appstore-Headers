//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKOpencastHttpRequest : NSObject
{
}

+ (id)requestAppIDPublished:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failedHandler:(CDUnknownBlockType)arg3;
+ (id)requestStopAudioWithEnvironmentScan:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failedHandler:(CDUnknownBlockType)arg3;
+ (id)requestPlayAudioWithEnvironmentScan:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failedHandler:(CDUnknownBlockType)arg3;
+ (id)requestSessionWithEnvironmentScan:(id)arg1 pinType:(int)arg2 pinCode:(id)arg3 TLSCertificateHash:(id)arg4 successHandler:(CDUnknownBlockType)arg5 failedHandler:(CDUnknownBlockType)arg6;

@end

