//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUserNotificationsRegistrar-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SPTPushNotificationsAppRegistrar : NSObject <SPTUserNotificationsRegistrar>
{
    _Bool _shouldPerformRegistration;
    NSMutableDictionary *_categories;
}

@property(nonatomic) _Bool shouldPerformRegistration; // @synthesize shouldPerformRegistration=_shouldPerformRegistration;
@property(retain, nonatomic) NSMutableDictionary *categories; // @synthesize categories=_categories;
- (void).cxx_destruct;
- (void)unregisterApplicationForRemoteNotifications;
- (void)registerApplicationForRemoteNotifications;
- (void)performRegistration;
- (id)categorySet;
- (void)unregisterCategoriesWithIdentifiers:(id)arg1;
- (void)registerCategories:(id)arg1;
- (id)defaultCategories;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

