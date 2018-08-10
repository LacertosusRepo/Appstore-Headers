//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBContentOperation.h"
#import "SPTPlayerObserver.h"

@class NSString, SPTPlayerState;

@interface SPTHubPlaybackHighlightingContentOperation : NSObject <SPTPlayerObserver, HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    id <SPTPlayerFeature> _playerFeature;
    SPTPlayerState *_playerState;
}

@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)recursivelyUpdatePlaybackHighlightForComponentModel:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)performForViewURI:(id)arg1 featureInfo:(id)arg2 connectivityState:(unsigned long long)arg3 viewModelBuilder:(id)arg4 previousError:(id)arg5;
- (void)dealloc;
- (id)initWithPlayerFeature:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
