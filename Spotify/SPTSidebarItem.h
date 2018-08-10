//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SPTTabBarItem.h"

@class NSString;

@interface SPTSidebarItem : NSObject <NSCopying, SPTTabBarItem>
{
    _Bool _badgeDisplayed;
    long long _icon;
    NSString *_title;
    NSString *_identifier;
    unsigned long long _badgeCount;
}

@property(nonatomic) unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long icon; // @synthesize icon=_icon;
@property(readonly, nonatomic, getter=isBadgeDisplayed) _Bool badgeDisplayed; // @synthesize badgeDisplayed=_badgeDisplayed;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIcon:(long long)arg1 title:(id)arg2 identifier:(id)arg3 badgeDisplayed:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

