//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileHome_Shelves_RecentlyPlayedShelfEventFactory, SPTUBIMobileHome_Shelves_ShelfEventFactory;

@protocol SPTUBIMobileHome_ShelvesEventFactory <NSObject>
- (id <SPTUBIMobileHome_Shelves_ShelfEventFactory>)shelfFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2;
- (id <SPTUBIMobileHome_Shelves_RecentlyPlayedShelfEventFactory>)recentlyPlayedShelfFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

