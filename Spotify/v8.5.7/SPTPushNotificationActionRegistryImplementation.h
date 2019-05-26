//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPushNotificationActionRegistry-Protocol.h"

@class NSMapTable, NSMutableArray, NSString;

@interface SPTPushNotificationActionRegistryImplementation : NSObject <SPTPushNotificationActionRegistry>
{
    _Bool _enabled;
    NSMapTable *_actions;
    NSMapTable *_allocationContexts;
    NSMutableArray *_notifications;
}

@property(retain, nonatomic) NSMutableArray *notifications; // @synthesize notifications=_notifications;
@property(retain, nonatomic) NSMapTable *allocationContexts; // @synthesize allocationContexts=_allocationContexts;
@property(retain, nonatomic) NSMapTable *actions; // @synthesize actions=_actions;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)registerAction:(id)arg1 forIdentifier:(id)arg2;
- (void)clearPendingActions;
- (void)sendActionForIdentifier:(id)arg1 URL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
