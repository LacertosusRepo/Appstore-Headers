//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuAction-Protocol.h"

@class NSString;

@interface SPTHomeMixContextMenuAction : NSObject <SPTContextMenuAction>
{
    _Bool _disabled;
    CDUnknownBlockType _actionBlock;
    NSString *_title;
    NSString *_subtitle;
    long long _icon;
}

@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (_Bool)shouldHaveTwoLineSubtitle;
- (id)performAction;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 icon:(long long)arg3 disabled:(_Bool)arg4 action:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
