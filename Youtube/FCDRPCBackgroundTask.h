//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIApplication;

@interface FCDRPCBackgroundTask : NSObject
{
    UIApplication *_sharedApplication;
    unsigned long long _taskIdentifier;
    _Bool _expired;
    _Bool _finished;
    NSString *_purpose;
}

@property(readonly) NSString *purpose; // @synthesize purpose=_purpose;
- (void).cxx_destruct;
- (void)expireFromExpirationHandler;
- (void)clearBackgroundTask;
- (void)finish;
@property(readonly, getter=isFinished) _Bool finished;
@property(readonly, getter=isExpired) _Bool expired;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPurpose:(id)arg1 sharedApplication:(id)arg2;
- (id)initWithPurpose:(id)arg1;

@end

