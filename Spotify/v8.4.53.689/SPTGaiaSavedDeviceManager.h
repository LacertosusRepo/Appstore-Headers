//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTGaiaSavedDeviceManager : NSObject
{
    NSString *_username;
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)savedDeviceNameKey;
- (id)savedDeviceIdKey;
- (void)clearSavedDevice;
- (void)setSavedDeviceId:(id)arg1 deviceName:(id)arg2;
- (id)savedDeviceName;
- (id)savedDeviceId;
- (id)initWithUsername:(id)arg1;

@end

