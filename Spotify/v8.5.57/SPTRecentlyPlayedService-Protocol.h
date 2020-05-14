//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol SPTRecentlyPlayedList, SPTRecentlyPlayedShortcutItemsProvider;

@protocol SPTRecentlyPlayedService <SPTService>
- (id <SPTRecentlyPlayedShortcutItemsProvider>)provideShortcutItemsProvider;
- (void)registerOptionalContentType:(unsigned long long)arg1;
- (id <SPTRecentlyPlayedList>)provideRecentlyPlayedListWithoutSongs;
- (id <SPTRecentlyPlayedList>)provideRecentlyPlayedList;
@end
