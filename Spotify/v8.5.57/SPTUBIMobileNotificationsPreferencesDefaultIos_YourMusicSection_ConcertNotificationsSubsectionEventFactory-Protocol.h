//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_ConcertNotificationsSubsection_EmailNotificationEventFactory, SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_ConcertNotificationsSubsection_PushNotificationEventFactory;

@protocol SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_ConcertNotificationsSubsectionEventFactory <NSObject>
- (id <SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_ConcertNotificationsSubsection_EmailNotificationEventFactory>)emailNotificationFactory;
- (id <SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_ConcertNotificationsSubsection_PushNotificationEventFactory>)pushNotificationFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

