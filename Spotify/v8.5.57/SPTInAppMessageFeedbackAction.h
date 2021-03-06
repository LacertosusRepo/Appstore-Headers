//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuAction-Protocol.h"

@class NSString;

@interface SPTInAppMessageFeedbackAction : NSObject <SPTContextMenuAction>
{
    long long _actionIcon;
    NSString *_actionTitle;
}

@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) long long actionIcon; // @synthesize actionIcon=_actionIcon;
- (void).cxx_destruct;
- (id)performAction;
- (long long)icon;
- (id)title;
- (id)initWithIcon:(long long)arg1 actionTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

