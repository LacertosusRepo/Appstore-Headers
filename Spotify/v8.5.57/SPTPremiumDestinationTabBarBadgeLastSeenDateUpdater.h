//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;
@protocol SPTPremiumDestinationTabBarBadgeLastSeenDateDelegate;

@interface SPTPremiumDestinationTabBarBadgeLastSeenDateUpdater : NSObject
{
    id <SPTPremiumDestinationTabBarBadgeLastSeenDateDelegate> _delegate;
    NSUserDefaults *_userDefaults;
}

@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) __weak id <SPTPremiumDestinationTabBarBadgeLastSeenDateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setLastSeenDate:(id)arg1;
- (id)getLastSeenDate;
- (id)initWithUserDefaults:(id)arg1;

@end

