//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIView;

@protocol SPTTabBar <NSObject>
@property(nonatomic) __weak id <SPTTabBarDelegate> tabBarDelegate;
@property(nonatomic) unsigned long long selectedIndex;
@property(retain, nonatomic) NSArray *tabBarItems;
- (UIView *)viewForItemAtIndex:(unsigned long long)arg1;
@end
