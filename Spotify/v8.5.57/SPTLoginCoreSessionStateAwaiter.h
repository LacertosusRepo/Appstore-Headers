//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPCore, SPTaskCompletionSource;

@interface SPTLoginCoreSessionStateAwaiter : NSObject
{
    SPTaskCompletionSource *_logoutSource;
    SPTaskCompletionSource *_loginSource;
    SPCore *_core;
}

- (void).cxx_destruct;
- (void)sessionStateChanged;
- (id)taskCompletedByTask:(id)arg1;
- (id)awaitLogin;
- (id)awaitLogout;
- (id)initWithCore:(id)arg1;

@end

