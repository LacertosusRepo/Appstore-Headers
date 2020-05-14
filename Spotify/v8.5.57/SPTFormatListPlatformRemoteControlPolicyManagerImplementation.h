//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFormatListPlatformRemoteControlPolicyManager-Protocol.h"

@class NSString, SPTObserverManager;

@interface SPTFormatListPlatformRemoteControlPolicyManagerImplementation : NSObject <SPTFormatListPlatformRemoteControlPolicyManager>
{
    SPTObserverManager *_observers;
}

@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (id)init;
- (void)dislikeDidFinish:(id)arg1 track:(id)arg2 contextURI:(id)arg3 identifier:(id)arg4 error:(id)arg5 success:(_Bool)arg6;
- (void)unlikeDidFinish:(id)arg1 track:(id)arg2 contextURI:(id)arg3 error:(id)arg4 success:(_Bool)arg5;
- (void)likeDidFinish:(id)arg1 track:(id)arg2 contextURI:(id)arg3 error:(id)arg4 success:(_Bool)arg5;
- (void)dislikeButtonPressed:(id)arg1 track:(id)arg2 contextURI:(id)arg3 identifier:(id)arg4;
- (void)unlikeButtonPressed:(id)arg1 track:(id)arg2 contextURI:(id)arg3;
- (void)likeButtonPressed:(id)arg1 track:(id)arg2 contextURI:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
