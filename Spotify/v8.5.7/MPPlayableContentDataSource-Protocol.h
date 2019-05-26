//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MPContentItem, NSIndexPath, NSString;

@protocol MPPlayableContentDataSource <NSObject>
- (MPContentItem *)contentItemAtIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfChildItemsAtIndexPath:(NSIndexPath *)arg1;

@optional
- (void)contentItemForIdentifier:(NSString *)arg1 completionHandler:(void (^)(MPContentItem *, NSError *))arg2;
- (_Bool)childItemsDisplayPlaybackProgressAtIndexPath:(NSIndexPath *)arg1;
- (void)beginLoadingChildItemsAtIndexPath:(NSIndexPath *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end
