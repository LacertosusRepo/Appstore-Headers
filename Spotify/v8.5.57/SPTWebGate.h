//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTConnectivityAccessTokenScope;

@interface SPTWebGate : NSObject
{
    SPTConnectivityAccessTokenScope *_accessTokenScope;
}

@property(readonly, nonatomic) SPTConnectivityAccessTokenScope *accessTokenScope; // @synthesize accessTokenScope=_accessTokenScope;
- (void).cxx_destruct;
- (id)callForRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initWithAccessTokenScope:(id)arg1;

@end
