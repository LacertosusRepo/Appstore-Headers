//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_PlaylistUpdatesSubsection_EmailNotificationEventFactory, SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_PlaylistUpdatesSubsection_PushNotificationEventFactory;

@protocol SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_PlaylistUpdatesSubsectionEventFactory <NSObject>
- (id <SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_PlaylistUpdatesSubsection_EmailNotificationEventFactory>)emailNotificationFactory;
- (id <SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_PlaylistUpdatesSubsection_PushNotificationEventFactory>)pushNotificationFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

