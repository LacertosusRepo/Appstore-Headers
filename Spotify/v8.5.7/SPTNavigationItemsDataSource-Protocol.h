//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSOrderedSet;
@protocol SPTNavigationConfiguration, SPTNavigationListProvider, SPTTabBarControllerFactory;

@protocol SPTNavigationItemsDataSource <NSObject>
- (id <SPTTabBarControllerFactory>)provideTabBarControllerFactory;
- (id <SPTNavigationConfiguration>)provideNavigationConfiguration;
- (NSOrderedSet *)provideDefaultTabPriorityList;
- (id <SPTNavigationListProvider>)provideNavigationListProvider;
@end
