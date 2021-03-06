//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTContextMenuTaskAction.h"

#import "SPTContextMenuAction-Protocol.h"

@class NSString;
@protocol SPTPlaylistActionDelegate;

@interface SPTPlaylistAction : SPTContextMenuTaskAction <SPTContextMenuAction>
{
    long long _actionType;
    long long _actionState;
    id <SPTPlaylistActionDelegate> _delegate;
}

+ (id)actionWithType:(long long)arg1 state:(long long)arg2 delegate:(id)arg3;
@property(nonatomic) __weak id <SPTPlaylistActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long actionState; // @synthesize actionState=_actionState;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)performAction;
@property(readonly, nonatomic) NSString *logUserIntent;
- (id)iconColor;
- (long long)icon;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

