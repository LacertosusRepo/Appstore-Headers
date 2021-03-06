//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMHistory : NSObject
{
    id notificationToken;
}

+ (id)history;
- (void).cxx_destruct;
- (void)removeLastVisitedItems;
- (void)removeLastPlayedItems;
- (void)notifyHistoryChange;
- (void)removeLastPlayedItem:(id)arg1;
- (void)didPlayItem:(id)arg1 atPath:(id)arg2;
- (void)removeLastVisitedItem:(id)arg1;
- (id)itemPathWithLastVisitedItem:(id)arg1;
- (id)lastVisitedItemInFolder:(id)arg1;
- (void)didVisitItem:(id)arg1;
- (id)lastVisitedItem;
- (id)lastVisitedItems:(int)arg1;
- (id)lastPlayedItems:(int)arg1;
- (void)dealloc;
- (id)init;

@end

