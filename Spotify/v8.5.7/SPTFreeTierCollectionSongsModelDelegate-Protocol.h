//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTFreeTierCollectionSongsModel;

@protocol SPTFreeTierCollectionSongsModelDelegate <NSObject>
- (void)songsModel:(id <SPTFreeTierCollectionSongsModel>)arg1 error:(NSError *)arg2;
- (void)songsModelDidUpdate:(id <SPTFreeTierCollectionSongsModel>)arg1;
@end

