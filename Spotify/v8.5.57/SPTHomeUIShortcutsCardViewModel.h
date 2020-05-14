//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"

@class NSString;
@protocol HUBComponentModel, SPTHomeUIShortcutsCardViewModelDelegate, SPTPlayer;

@interface SPTHomeUIShortcutsCardViewModel : NSObject <SPTPlayerObserver>
{
    _Bool _isActiveContext;
    id <SPTHomeUIShortcutsCardViewModelDelegate> _delegate;
    id <HUBComponentModel> _hubComponentModel;
    id <SPTPlayer> _player;
}

@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) _Bool isActiveContext; // @synthesize isActiveContext=_isActiveContext;
@property(readonly, nonatomic) id <HUBComponentModel> hubComponentModel; // @synthesize hubComponentModel=_hubComponentModel;
@property(nonatomic) __weak id <SPTHomeUIShortcutsCardViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 hubComponentModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

