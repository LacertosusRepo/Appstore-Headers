//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPopupStateTransition.h"

@class NSString;

@interface SPTPopupStateTransition : NSObject <SPTPopupStateTransition>
{
    long long _oldState;
    long long _newState;
}

+ (id)popupStateTransitionFromOldState:(long long)arg1 toNewState:(long long)arg2;
@property(readonly, nonatomic) long long newState; // @synthesize newState=_newState;
@property(readonly, nonatomic) long long oldState; // @synthesize oldState=_oldState;
- (id)initWithOldState:(long long)arg1 toNewState:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

