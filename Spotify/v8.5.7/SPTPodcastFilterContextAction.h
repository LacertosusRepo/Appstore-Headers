//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastFilterContextAction-Protocol.h"

@class NSString;

@interface SPTPodcastFilterContextAction : NSObject <SPTPodcastFilterContextAction>
{
    _Bool _active;
    NSString *_title;
    long long _icon;
    long long _accessoryIcon;
    CDUnknownBlockType _action;
}

@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) long long accessoryIcon; // @synthesize accessoryIcon=_accessoryIcon;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)execute;
- (id)initWithTitle:(id)arg1 icon:(long long)arg2 accessoryIcon:(long long)arg3 action:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

