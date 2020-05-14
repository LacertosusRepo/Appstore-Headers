//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSArray, NSString;

@interface SPTLogMessageMobileDeviceSettings2 : SPTLogMessage
{
    _Bool _isScreenReaderOnValue;
    _Bool _hasPushNotificationsEnabledValue;
    NSString *_deviceLanguageValue;
    NSString *_pushNotificationsAuthStatusValue;
    NSArray *_pushNotificationsSettingsValue;
}

+ (id)messageWithDeviceLanguage:(id)arg1 isScreenReaderOn:(_Bool)arg2 hasPushNotificationsEnabled:(_Bool)arg3 pushNotificationsAuthStatus:(id)arg4 pushNotificationsSettings:(id)arg5;
@property(copy, nonatomic) NSArray *pushNotificationsSettingsValue; // @synthesize pushNotificationsSettingsValue=_pushNotificationsSettingsValue;
@property(copy, nonatomic) NSString *pushNotificationsAuthStatusValue; // @synthesize pushNotificationsAuthStatusValue=_pushNotificationsAuthStatusValue;
@property(nonatomic) _Bool hasPushNotificationsEnabledValue; // @synthesize hasPushNotificationsEnabledValue=_hasPushNotificationsEnabledValue;
@property(nonatomic) _Bool isScreenReaderOnValue; // @synthesize isScreenReaderOnValue=_isScreenReaderOnValue;
@property(copy, nonatomic) NSString *deviceLanguageValue; // @synthesize deviceLanguageValue=_deviceLanguageValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
