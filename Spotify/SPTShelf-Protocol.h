//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol SPTShelf <NSObject>
- (void)execute:(NSURL *)arg1 source:(NSString *)arg2 completion:(void (^)(NSString *))arg3;
- (void)shelfView:(void (^)(SPTSwipeableTableViewCellShelf *))arg1;
@end
