//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSURL;
@protocol SPTSortingFilteringPreferences, SPTSortingFilteringUIFactory;

@protocol SPTSortingFilteringService <SPTService>
- (id <SPTSortingFilteringPreferences>)provideSortingFilteringPreferencesForEntityURL:(NSURL *)arg1;
- (id <SPTSortingFilteringUIFactory>)provideSortingFilteringUIFactory;
@end

