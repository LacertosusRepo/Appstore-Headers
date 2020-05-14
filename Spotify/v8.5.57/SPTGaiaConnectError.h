//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTGaiaConnectDevice;

@interface SPTGaiaConnectError : NSObject
{
    unsigned long long _errorCode;
    SPTGaiaConnectDevice *_originDevice;
}

@property(retain, nonatomic) SPTGaiaConnectDevice *originDevice; // @synthesize originDevice=_originDevice;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedErrorDescription;
- (id)initWithErrorCode:(unsigned long long)arg1 device:(id)arg2;

@end

