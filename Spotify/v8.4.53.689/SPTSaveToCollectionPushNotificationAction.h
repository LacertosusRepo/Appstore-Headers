//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPushNotificationAction.h"

@class NSString;

@interface SPTSaveToCollectionPushNotificationAction : NSObject <SPTPushNotificationAction>
{
    id <SPTCollectionPlatform> _collectionPlatform;
}

+ (id)saveToCollectionPushNotificationActionWithCollectionPlatform:(id)arg1;
@property(retain, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
- (void).cxx_destruct;
- (_Bool)handlePushNotificationActionForIdentifier:(id)arg1 URL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithCollectionPlatform:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

