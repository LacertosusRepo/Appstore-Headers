//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol SPTAssistedCurationCardModel, SPTAssistedCurationTrackModelEntity;

@protocol SPTAssistedCurationCardModelDelegate <NSObject>
- (void)assistedCurationCardModel:(id <SPTAssistedCurationCardModel>)arg1 deletedTrack:(id <SPTAssistedCurationTrackModelEntity>)arg2 atIndex:(unsigned long long)arg3 completion:(void (^)(void))arg4;
- (void)assistedCurationCardModel:(id <SPTAssistedCurationCardModel>)arg1 insertedTracks:(NSArray *)arg2 atIndex:(unsigned long long)arg3 completion:(void (^)(void))arg4;
- (void)didFinishLoadingMoreTracksForAssistedCurationCardModel:(id <SPTAssistedCurationCardModel>)arg1;
@end
