//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SPTTabBarItem-Protocol.h"

@class NSString;

@interface SPTSidebarItem : NSObject <NSCopying, SPTTabBarItem>
{
    _Bool _badgeDisplayed;
    long long _icon;
    NSString *_title;
    NSString *_identifier;
}

@property(readonly, nonatomic, getter=isBadgeDisplayed) _Bool badgeDisplayed; // @synthesize badgeDisplayed=_badgeDisplayed;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIcon:(long long)arg1 title:(id)arg2 identifier:(id)arg3 badgeDisplayed:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

