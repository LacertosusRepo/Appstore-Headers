//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTProfileUserData.h"

@class NSHashTable, NSString, NSURL, SPTUser, UIColor;

@interface SPTProfileUserDataImp : NSObject <SPTProfileUserData>
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
@property(readonly, nonatomic) UIColor *color; // @dynamic color;
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

