//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTFreeTierCollectionHiddenContentModel;

@protocol SPTFreeTierCollectionHiddenContentModelDelegate <NSObject>
- (void)hiddenContentModel:(id <SPTFreeTierCollectionHiddenContentModel>)arg1 didFailWithError:(NSError *)arg2;
- (void)hiddenContentModelDidUpdate:(id <SPTFreeTierCollectionHiddenContentModel>)arg1;
@end

