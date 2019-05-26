//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFormatListPlatformFeedbackActionImplementationDelegate.h"
#import "SPTFormatListPlatformFeedbackActions.h"

@class NSArray, NSDictionary, NSString;

@interface SPTFormatListPlatformFeedbackActionsImplementation : NSObject <SPTFormatListPlatformFeedbackActionImplementationDelegate, SPTFormatListPlatformFeedbackActions>
{
    id <SPTFormatListPlatformFeedbackAction> _defaultAction;
    NSArray *_actions;
    id <SPTFormatListPlatformFeedbackActionsDelegate> _delegate;
    id <SPTNowPlayingRemoteControlPolicy> _remoteControlPolicy;
    long long _type;
    id <SPTPlayer> _player;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTFormatListPlatformResolver> _resolver;
    NSDictionary *_actionPerformances;
}

@property(readonly, nonatomic) NSDictionary *actionPerformances; // @synthesize actionPerformances=_actionPerformances;
@property(readonly, nonatomic) id <SPTFormatListPlatformResolver> resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id <SPTNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(nonatomic) __weak id <SPTFormatListPlatformFeedbackActionsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) id <SPTFormatListPlatformFeedbackAction> defaultAction; // @synthesize defaultAction=_defaultAction;
- (void).cxx_destruct;
- (void)feedbackActionImplementationRequestsPerformAction:(id)arg1;
- (void)performFromView:(id)arg1 fromEntityURL:(id)arg2;
- (id)initWithSerialised:(id)arg1 remoteControlPolicy:(id)arg2 type:(long long)arg3 player:(id)arg4 collectionPlatform:(id)arg5 contextMenuPresenterFactory:(id)arg6 resolver:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
