//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileFindfriends_UserList_UserEventFactory;

@protocol SPTUBIMobileFindfriends_UserListEventFactory <NSObject>
- (id <SPTUBIMobileFindfriends_UserList_UserEventFactory>)userFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
