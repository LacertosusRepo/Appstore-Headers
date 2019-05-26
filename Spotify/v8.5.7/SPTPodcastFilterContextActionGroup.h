//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastFilterContextActionGroup-Protocol.h"

@class NSArray, NSString;

@interface SPTPodcastFilterContextActionGroup : NSObject <SPTPodcastFilterContextActionGroup>
{
    NSArray *_actions;
    NSString *_title;
    long long _icon;
}

@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)removeActionAtIndex:(unsigned long long)arg1;
- (void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)actionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfActions;
- (id)initWithTitle:(id)arg1 actions:(id)arg2;
- (id)initWithTitle:(id)arg1 icon:(long long)arg2 actions:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

