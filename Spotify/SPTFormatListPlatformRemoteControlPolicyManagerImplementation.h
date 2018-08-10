//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFormatListPlatformRemoteControlPolicyManager.h"

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

