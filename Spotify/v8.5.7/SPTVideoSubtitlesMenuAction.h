//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuAction-Protocol.h"

@class NSString, UIView;

@interface SPTVideoSubtitlesMenuAction : NSObject <SPTContextMenuAction>
{
    NSString *_title;
    long long _accessoryIcon;
    CDUnknownBlockType _action;
    UIView *_accessoryViewCache;
}

@property(retain, nonatomic) UIView *accessoryViewCache; // @synthesize accessoryViewCache=_accessoryViewCache;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) long long accessoryIcon; // @synthesize accessoryIcon=_accessoryIcon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)accessoryView;
- (id)catIcon:(long long)arg1 withColor:(id)arg2;
- (id)performAction;
- (_Bool)isEnabled;
- (id)initWithTitle:(id)arg1 accessoryIcon:(long long)arg2 action:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

