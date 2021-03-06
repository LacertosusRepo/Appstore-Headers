//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTProfileUserDataLegacy-Protocol.h"

@class NSHashTable, NSString, NSURL, SPTUser;

@interface SPTProfileUserDataImp : NSObject <SPTProfileUserDataLegacy>
{
    SPTUser *_user;
    NSHashTable *_observers;
}

@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) SPTUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)removeProfileChangeObserver:(id)arg1;
- (void)addProfileChangeObserver:(id)arg1;
- (void)dispatchObservers;
@property(readonly, nonatomic) NSURL *imageURL; // @dynamic imageURL;
@property(readonly, nonatomic) NSString *shortName; // @dynamic shortName;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) NSString *username; // @dynamic username;
- (id)initWithUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

