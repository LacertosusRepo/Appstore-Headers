//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTContextMenuTaskAction.h"

#import "SPTContextMenuAction-Protocol.h"

@class NSAttributedString, NSString;

@interface SPTAdsContextMenuCustomAction : SPTContextMenuTaskAction <SPTContextMenuAction>
{
    CDUnknownBlockType _actionBlock;
    long long _actionIcon;
    NSString *_actionTitle;
    NSAttributedString *_actionAttributedTitle;
}

@property(copy, nonatomic) NSAttributedString *actionAttributedTitle; // @synthesize actionAttributedTitle=_actionAttributedTitle;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) long long actionIcon; // @synthesize actionIcon=_actionIcon;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (id)performAction;
@property(readonly, nonatomic) NSAttributedString *attributedTitle;
- (long long)icon;
- (id)title;
- (id)initWithIcon:(long long)arg1 actionAttributedTitle:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (id)initWithIcon:(long long)arg1 actionTitle:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

